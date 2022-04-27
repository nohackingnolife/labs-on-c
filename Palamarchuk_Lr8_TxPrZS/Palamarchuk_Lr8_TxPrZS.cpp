// Palamarchuk_Lr8_TxPrZS.cpp
#include "TaskOne.h"
#include "TaskTwo.h"
#include "TaskThree.h"

list<CryptoAlgorithms*> CryptoAlgorithms::list;

int main()
{
    cout << "Task 1, Class Pair\n";
    Pair pair;
    pair.SetNumberOne(5);
    pair.SetNumberTwo(11);
    cout << "Multiplication: " << pair.Multiplication() << endl << endl;

    cout << "Class RigthAngled\n";
    RightAngled trinagle;
    trinagle.SetNumberOne(5);
    trinagle.SetNumberTwo(11);
    cout << "Hypotenuse: " << trinagle.Hypotenuse() << endl;
    cout << "Multiplication: " << trinagle.Multiplication() << endl << endl;

    cout << "Task 2" << endl;
    Person son("Boris Johnson", "19.06.1964", "now", 57, "Son");
    Person father("Stanley Johnson", "12.02.1940", "now", 82, "Father");
    Person mother("Charlotte Fawcett", "1942", "2021", 79, "Mother");
    Person fGrandFather("Wilfred Johnson", "1909", "1992", 83, "Grandfather");
    Person fGrandMother("Irene Williams", "1907", "1987", 80, "Grandmother");
    Person mGrandFather("James Fawcett", "1913", "1991", 78, "Grandfather");
    Person mGrandMother("Frances Lowe", "none", "none", 82, "Grandmother");
    Person firstWife("Allegra Mosty-Owen", "1964", "now", 58, "First wife");
    Person secondWife("Marina Wheeler", "1964", "now", 58, "Second wife");

    cout << "Task 3, Crypto Algorithm | Characteristics" << endl << endl;

    string arr[1] = { "NoKeys" };
    WithoutKey withoutKey("Without Key", arr, sizeof(arr) / sizeof(arr[0]));

    string two_size_arr[2] = { "OneSideEncryption", "Hashing" };
    Hash hash("Hash", two_size_arr, sizeof(two_size_arr) / sizeof(two_size_arr[0]));

    arr[0] = { "Symmetrical" };
    OneKey oneKey("One Key", arr, sizeof(arr) / sizeof(arr[0]));

    SymmetricEncription symmetricEncription("Symmetric Encription", arr, sizeof(arr) / sizeof(arr[0]));

    two_size_arr[0] = { "Symmetrical" }; two_size_arr[1] = { "SymbolToSymbol" };
    Stream stream("Stream", two_size_arr, sizeof(two_size_arr) / sizeof(two_size_arr[0]));
    
    arr[0] = { "UsingTwoKeys" };
    TwoKey twoKey("Two Key", arr, sizeof(arr) / sizeof(arr[0]));

    two_size_arr[0] = { "Secure" }; two_size_arr[1] = { "Slow" };
    AsymmetricEncription asymmetricEncription("Asymmetric Encription", two_size_arr, sizeof(two_size_arr) / sizeof(two_size_arr[0]));

    CryptoAlgorithms::showAllInfo();

    string tempString;
    cout << endl << "Write one characteristic: ";
    cin >> tempString;
    
    CryptoAlgorithms::findCharacteristic(tempString);
}
