#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]){

	char text[50];

	//! Writes files!

	ofstream textFile ("text_1.txt");
	textFile << "Hi! Everything work great";
	textFile.close();

	ifstream file("text_1.txt"); //! Protects files!
	if(!file.is_open()){
		cout << "Error! File is not found!" << endl;
	} 
	else{
		//* file >> text;
		//* cout << text << endl;

		file.getline(text, 50);
		file.close();
	}

	return 0;
}