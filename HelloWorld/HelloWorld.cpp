#include <iostream>
#include <string>

using namespace std;

int main(){
    string name, like;
    int Good, Badly;
    Good = 1;
    Badly = 0;

    cout << "Hello World!" << endl;
    cout << "What is your name? -> ";
    getline(cin, name);
    cout << "Hello " << name << endl;
    cout << "_______________\
             |1:Good or 2:Badly|\
             ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << endl;
    cout << "Like you? -> ";
    getline(cin, like);

    for(int _Good = 1; _Good > Badly; _Good++){
        Good = _Good;
        cout << "It's good" << endl;
        cout << "But I need to go" << endl;
        cout << "Good bye " << name << endl;
        cin >> Good;

        return 0;
    }
    for (int _Badly = 0; _Badly < Good; _Badly++){
        Badly = _Badly;
        cout << "This is bad" << endl;
        cout << "I'm sorry but I need to leave" << endl;
        cout << "You just do not be sad" << endl;
        cout << "Good bye " << name << endl;
        cin >> Badly;

        return 0;
    }

    cin.get();
    return 0;
}