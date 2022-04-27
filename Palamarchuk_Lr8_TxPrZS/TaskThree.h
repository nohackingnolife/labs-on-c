#pragma once
#include "includes.h"

class CryptoAlgorithms
{
private:
	string* _characteristics;
	int _size;
	string _name;
	static list<CryptoAlgorithms*> list;

public:
	CryptoAlgorithms(string name, string* characteristics, int const size);
	
	static void findCharacteristic(string characteristic);

	static void showAllInfo();
};

class WithoutKey : public CryptoAlgorithms
{
public:
	WithoutKey(string name, string* characteristics, int const size);
};

class Hash : public WithoutKey
{
public:
	Hash(string name, string* characteristics, int const size);
};

class OneKey : public CryptoAlgorithms
{
public:
	OneKey(string name, string* characteristics, int const size);
};

class SymmetricEncription : public OneKey
{
public:
	SymmetricEncription(string name, string* characteristics, int const size);
};

class Stream : public SymmetricEncription
{
public:
	Stream(string name, string* characteristics, int const size);
};

class TwoKey : public CryptoAlgorithms
{
public:
	TwoKey(string name, string* characteristics, int const size);
};

class AsymmetricEncription : public TwoKey
{
public:
	AsymmetricEncription(string name, string* characteristics, int const size);
};
