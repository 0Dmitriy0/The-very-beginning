//! Project executor DDC.

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    string name, surnames;
    cout << "Enter your name: ";
    getline (cin, name);
    cout << "Enter your surnames: ";
    getline (cin, surnames);
    
    cout << name + surnames;

    cin.get();
    return 0;
}