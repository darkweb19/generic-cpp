#include <iostream>
#include <string>
using namespace std;

void greet(const string &name)
{
    cout << "Hello, " << name << '\n';
}

int main()
{
    string key, name;
    cout << "Enter  key: ";
    getline(cin, key);
    cout << "Enter Value: ";
    getline(cin, name);

    cout << "Stored Key: " << key << endl;

    cout << "Stored Name: " << name << endl;
    greet(name);
}