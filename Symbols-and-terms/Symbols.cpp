//! Project executor DDC.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	char string[12] = "Hello World";//! We create terms!
	//! char string[12] = {"H", "e", "l", "l", "o", " ", "W", "o", "r", "l", "d", "\0"} You can do so!
	//! char string[] = "Hello World" It's just better because he himself determines how many characters here!

	cout << "Первий способ: " << endl;

	char String[500];
	cout << "Введите строку: ";
	gets(String);
	cout << String << endl;

	cout << "Второй способ: " << endl;

	char string1[] = "this is string - "; //! Line declaration and initialization.
   cout << "Enter the string: ";
	char in_string[500]; //! String array for input.
   gets(in_string); //! The gets () function reads all entered characters with spaces until the Enter key is pressed.
    
	cout << string1 << in_string << endl; //! String value output.
   
	system("pause");
   return 0;
}
