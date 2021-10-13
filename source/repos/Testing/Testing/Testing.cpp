/*
	-PURPOSE-

	This program reads the data in the courseinfo.txt file,
	converts it into the string variable s, and prints
	out the assigned variable.

	You can easily change out the text file that you
	want it to read out by changing the file path
	to the text file you want to display!

	This is part of a number of simple C++ programs
	that I am making in order to learn more of C++.

	If you are looking for easy to modify professional code,
	look elsewhere. I AM NOT A PROFESSIONAL.
*/

#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main() {

	ifstream fs("source/courseinfo.txt"); // File Path
	string s;

	if (fs.fail()) return -1; // could not open the file!
	while (getline(fs, s)) {
		// Output the text from the file
		cout << s;
	}

	// process the file
	fs.close();
	return 0;
}
