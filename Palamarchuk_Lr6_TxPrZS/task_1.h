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
        cout << "TRIP NUMBER: " << _number << endl;
        cout << "Destination: " << _destination << endl;
        cout << _time_departure << " | " << _time_destination << endl;
        cout << "Availabe seats: " << _seats_amount << endl << endl;
    };
};
