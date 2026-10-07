#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void line(int l = 100)
{
    for (int i = 0; i < l; i++)
    {
        cout << "=";
    }
    cout << endl;
}

void center(int c = 45)
{
    for (int i = 0; i < c; i++)
    {
        cout << " ";
    }
}

void pausescreen()
{
    system("pause");
}

void clearscreen()
{
#if WIN32
    system("cls");
#else
    system("clear");
#endif
}

void createfile()
{
    ofstream record("student.txt");
    if (record.is_open())
    {
        cout << "File created sucessfully." << endl;
    }
    else
    {
        cout << "Failed to create file." << endl;
    }
}

void infoinput()
{

    string name, age, address;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter address: ";
    getline(cin, address);
}

int main()
{
    createfile();
    infoinput();

    return 0;
}