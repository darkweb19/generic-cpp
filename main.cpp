#include <iostream>
#include <string>
using namespace std;

void greet(const string &name)
{
    cout << "Hello, " << name << '\n';
}

int main()
{
    string key, name, command;
    bool isRunning = true;

    while (isRunning)
    {

        cout << "Enter command: ";
        getline(cin, command);
        if (command == "put")
        {
            cout << "Enter  key: ";
            getline(cin, key);
            cout << "Enter Value: ";
            getline(cin, name);

            cout << "Stored Key: " << key << endl;

            cout << "Stored Name: " << name << endl;
            greet(name);
        }
        else if (command == "exit")
        {
            isRunning = false;
            cout << "Exiting the program." << endl;
        }
        else
        {
            cout << "Unknown Command" << endl;
        }
    }
    return 0;
}