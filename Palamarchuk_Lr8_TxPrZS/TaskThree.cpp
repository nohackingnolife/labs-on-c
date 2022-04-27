#include "TaskThree.h"

CryptoAlgorithms::CryptoAlgorithms(string name, string * characteristics, int const size)
{
	_name = name;
	_characteristics = new string[size];
	for (int i = 0; i < size; i++)
	{
		_characteristics[i] = characteristics[i];
		_size = size;
	}
	list.push_back(this);
}

void CryptoAlgorithms::findCharacteristic(string characteristic)
{
	bool check = 0;
	for (CryptoAlgorithms* n : list)
	{
		for (int i = 0; i < n->_size ; i++)
		{
			if (n->_characteristics[i] == characteristic)
			{
				cout << n->_name << endl;
				check = 1;
			}
		}
	}
	if (!check)
	{
		cout << "None..." << endl;
	}
}

void CryptoAlgorithms::showAllInfo()
{
	for (CryptoAlgorithms* n : list)
	{
		cout << n->_name << " | ";
		for (int i = 0; i < n->_size; i++)
		{
			cout << n->_characteristics[i] << " ";
		}
		cout << endl;
	}
}


WithoutKey::WithoutKey(string name, string * characteristics, int const size)
					  : CryptoAlgorithms(name, characteristics, size)
{
}

Hash::Hash(string name, string* characteristics, int const size) : WithoutKey(name, characteristics, size)
{
}

OneKey::OneKey(string name, string* characteristics, int const size) : CryptoAlgorithms(name, characteristics, size)
{
}

SymmetricEncription::SymmetricEncription(string name, string* characteristics, int const size)
										: OneKey(name, characteristics, size)
{
}

Stream::Stream(string  name, string* characteristics, int const size) : SymmetricEncription(name, characteristics, size)
{
}

TwoKey::TwoKey(string name, string* characteristics, int const size) : CryptoAlgorithms(name, characteristics, size)
{
}

AsymmetricEncription::AsymmetricEncription(string name, string* characteristics, int const size)
										  : TwoKey(name, characteristics, size)
{
}
