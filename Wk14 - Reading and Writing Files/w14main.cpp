//Mason Phillips, Coding 1 Tue, Apr 2025
//playing with multiple files today
//saving and loading to files too

#include "filemgmt.h"			//import the extra functions that we have created
using namespace std;


//read array from file. That's homework

//IN-CLASS ASSIGNMENT:
//in a new source file (.cpp) and with a header file (.h)...
//...create a new class named item with the following variables and functions
	//string name, enum location, item(), use(), examine()

/*
HOMEWORK:
1. create a function in filemgmt.cpp to read a file into an array.
	1a. each new line becomes a new element in the array
2. finish the item class
3. in main, create an array of 5 items and display them with a loop
	3a. use itemArray[i].examine() to show all of the details...
4. upload the folder of files to github
	4a. submit a link to the assignment page with the folder in github.com
*/

int main() {
	cout << "Hello\n";

	ReadFromFile();			//edit the file.txt to include 3 lines of games to play
	WriteToFile();			//please confirm that the file was created on your hard drive (yes!)

	string favs[100];
	int nextIndex = 0;

	cout << "Type out your favorites, or type done to stop: \n";
	while (true) {
		string input;					//to store the user's input
		cout << ">> ";
		getline(cin, input);			//get the user's input

		if (input == "done") {			//check to see if they're done
			break;							//if so, break out of the loop
		}

		favs[nextIndex] = input;		//otherwise, assign the user's input to the array...
		nextIndex++;					//...and point at the next element in the array

	}

	WriteArrayToFile(favs, nextIndex);
}