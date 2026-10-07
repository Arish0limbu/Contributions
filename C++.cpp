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

void heading(string header)
{
    clearscreen();
    line();
    center((100 - header.length()) / 2);
    cout << header << endl;
    line();
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

bool adminlogin()
{
    heading("|| Admin Login Page ||");
    string id, pass;
    cout << "Admin ID: ";
    getline(cin, id);
    cout << "Admin Password: ";
    getline(cin, pass);

    if (id == "admin" || pass == "1234")
    {
        return true;
    }
    else
    {
        return false;
    }
}
void infoinput()
{
}

int main()
{
    createfile();
    infoinput();

    return 0;
}