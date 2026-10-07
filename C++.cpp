#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    ofstream record("student.txt");
    if (record.is_open())
    {
        cout << "File created sucessfully." << endl;
    }
    else
    {
        cout << "Failed to creat file." << endl;
    }

    return 0;
}