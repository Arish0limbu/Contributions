#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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