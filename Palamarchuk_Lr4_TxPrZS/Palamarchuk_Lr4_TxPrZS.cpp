// Palamarchuk_Lr4_TxPrZS.cpp

#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

void task_1() {
    cout << "Task 1\n";

    char word[] = "інтеграл";

    cout << word[5] << word[3] << word[1] << word[2] << word[4] << word[3] << word[1] << endl;
    cout << word[4] << word[6] << word[1] << word[2] << word[3] << 'л' << word[0] << endl;
    cout << word[4] << word[3] << word[1] << endl;
    cout << word[6] << word[4] << word[3] << word[1] << word[2] << endl;
}

void task_2() {
    cout << "\nTask 2";
    ofstream file;
    file.open("file.txt");

    for (int i = 0; i < 5; i++)
    {
        file << "Случайный текст\n";
    }
    file.close();
    
    ifstream file1;
    file1.open("file1.txt", ios::in);
    string temp_text;
    string text = "\n";

    while (!file1.eof())
    {
        file1 >> temp_text;
        text += temp_text + " ";
    }
    
    cout << text << endl;

    file.close();
    file1.close();

    file.open("file1.txt", ios::app);
    file << text;

    cout << "Task 2 completed\n";
}

void task_3(string phrase) {
    cout << "\nTask 3, encryption and decryption\nPhrase: " << phrase << endl;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int alphabet_length = alphabet.length();
    int *numerators = new int[alphabet_length];

    for (int i = 0; i < alphabet_length; i++)
    {
        numerators[i] = i;
    }
    
    //генерация случайного ключа
    string key = alphabet;
    int random;
    int temp_int;
    bool checker = FALSE;
    for (int i = 0; i < alphabet_length; i++)
    {
        random = rand() % alphabet_length;
        
        for (int n = 0; n < alphabet_length; n++)
        {
            if (numerators[n] == random)
            {
                if (numerators[n] != -1)
                {
                    numerators[n] = -1;
                    checker = TRUE;
                    break;
                }
            }
            checker = FALSE;
        }
        if (checker == FALSE)
        {
            i--;
        }
        else
        {
            key[i] = alphabet[random];
        }
    }
    cout << "Key: " << key << endl;
    
    //шифруем фразу
    for (int i = 0; i < phrase.length(); i++)
    {
        for (int n = 0; n < alphabet_length; n++)
        {
            if (phrase[i] == ' ')
            {
                break;
            }
            if (phrase[i] == alphabet[n])
            {
                phrase[i] = key[n];
                break;
            }
        }
    }

    cout << "Encrypted: " << phrase << endl;

    //расшифровуем фразу
    for (int i = 0; i < phrase.length(); i++)
    {
        for (int n = 0; n < alphabet_length; n++)
        {
            if (phrase[i] == ' ')
            {
                break;
            }
            if (phrase[i] == key[n])
            {
                phrase[i] = alphabet[n];
                break;
            }
        }
    }
    cout << "Decrypted: " << phrase << endl;
}

int main()
{
    srand(time(0));
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    task_1();
    task_2();
    task_3("i love my country");
}