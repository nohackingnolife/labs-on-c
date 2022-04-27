#pragma once
#include "includes.h"

struct TZI {
	string name;
	string goal;
	string manufacter;
	string requisites;

	string output_name() {
		return name;
	}

	string output_goal() {
		if (goal == "")
		{
			goal = "goal has no information";
		}
		return goal;
	}

	string output_manufacter() {
		return manufacter;
	}
	
	string output_requisites() {
		return requisites;
	}

	void write_info(string name, string second) {
		ofstream write_info;
		write_info.open("file3.txt");
		write_info << name << endl << second;
		write_info.close();
	}

	void show_last_info() {
		stringstream ss;
		string temp_line;

		ifstream show_info;
		show_info.open("file3.txt");
		while (getline(show_info, temp_line))
		{
			ss << temp_line << endl;
		}

		cout << endl << ss.str();
	}
};