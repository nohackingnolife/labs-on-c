#pragma once
#include "includes.h"

class Characteristics
{
public:
	Characteristics(string name, string birthday, string dateOfDeath, int age);

protected:
	string _name;
	string _birthday;
	string _dateOfDeath;
	int _age;
};

class Relation
{
public:
	Relation(string relation);

protected:
	string _relation;
};

class Person : public Characteristics, public Relation
{
public:
	Person(string name, string birthday, string dateOfDeath, int age, string whois);
};
