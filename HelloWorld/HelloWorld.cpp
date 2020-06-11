#include <iostream>
#include <string>

using namespace std;

int main(){
	 string name, like;
	 int Good, Badly;
	 Good = true;
	 Badly = false;

	 cout << "Hello World!" << endl;
	 cout << "What is your name? -> ";
	 getline(cin, name);
	 cout << "Hello " << name << endl;
	 cout << "But I need to go" << endl;
	 cout << "Good bye " << name << endl;
	 getline(cin, like);
	
	/*
	 if (int _Good = 1, _Good > Badly, _Good++){
		  Good = _Good;
		  cout << "It's good" << endl;
		  cout << "But I need to go" << endl;
		  cout << "Good bye " << name << endl;
		  cin >> Good;

		  return 0;
	 }
	 if (int _Badly = 0, _Badly < Good, _Badly++){
		  Badly = _Badly;
		  cout << "This is bad" << endl;
		  cout << "I'm sorry but I need to leave" << endl;
		  cout << "You just do not be sad" << endl;
		  cout << "Good bye " << name << endl;
		  cin >> Badly;

		  return 0;
	 }
	*/
	 cin.get();
	 return 0;

	 //! I need to redo everything!
}