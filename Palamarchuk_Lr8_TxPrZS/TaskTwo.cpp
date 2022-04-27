#include "TaskTwo.h"

Characteristics::Characteristics(string name, string birthday, string dateOfDeath, int age)
{
	_name = name;
	_birthday = birthday;
	_dateOfDeath = dateOfDeath;
	_age = age;
	cout << name << ", " << birthday << " - " << dateOfDeath << ", " << age << " years old" << endl;
}

Relation::Relation(string relation)
{
	_relation = relation;
	cout << relation << "." << endl;
}

Person::Person(string name, string birthday, string dateOfDeath, int age, string whois) : Characteristics(name, birthday, dateOfDeath, age), Relation(whois)
{
	cout << "Person was successfully created" << endl << endl;
}
