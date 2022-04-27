#pragma once
#include "includes.h"

struct KyivTrip
{
    int _number;
    string _destination;
    string _time_departure;
    string _time_destination;
    int _seats_amount;

    KyivTrip(int number, string destination, string time_departure, string time_destination, int seats_amount)
    {
        _number = number;
        _destination = destination;
        _time_departure = time_departure;
        _time_destination = time_destination;
        _seats_amount = seats_amount;
    };

    void trip_output() {
        stringstream ss;
        ss << "TRIP NUMBER: " << _number
           << "\nDestination: " << _destination << "\n"
           << _time_departure << " | " << _time_destination
           << "\nAvailabe seats: " << _seats_amount << "\n\n";
        string temp_string = ss.str();
        cout << temp_string;

        ofstream write_info;
        write_info.open("file1.txt", ios::app);
        write_info << temp_string;
        write_info.close();
    };
    
    void trip_choice() {
        string temp_line, temp_text, temp_string;
        stringstream ss;

        ifstream show_info;
        show_info.open("file1.txt");
        while (getline(show_info, temp_line))
        {
            ss << temp_line << endl;
            if (temp_line.find("TRIP NUMBER:") != string::npos) //13
            {
                temp_string = "";
                for (int i = 0; i < temp_line.length() - 13; i++)
                {
                    temp_string += temp_line[13 + i];
                }
            }
        }
        string* trips_array = new string[stoi(temp_string)];
        string trips_string = ss.str();

        temp_string = "";
        int counter = 0;
        bool checker_first_symbol = true;
        for (int i = 0; i < trips_string.length(); i++)
        {
            if (!checker_first_symbol)
            {
                temp_string += trips_string[i];
            }
            else
            {
                checker_first_symbol = false;
            }
            if (trips_string[i] == '\n' && trips_string[i + 1] == '\n')
            {
                trips_array[counter] = temp_string;
                temp_string = "";
                counter += 1;
                checker_first_symbol = true;
            }
        }

        cout << "\n\tChoose your trip by writing a number (1 or 2 or ...): ";
        int choosen_number;
        cin >> choosen_number;
        cout << "\tYour trip`s number is " << choosen_number << endl << endl << trips_array[choosen_number - 1];
        cout << "\n\tYour answer was written in file2.txt, you can find this in project directory";

        ofstream write_info;
        write_info.open("file2.txt");
        write_info << trips_array[choosen_number - 1];
        write_info.close();

        delete[] trips_array;
    };
};