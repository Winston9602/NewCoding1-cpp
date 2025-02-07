#include <iostream>		// this sends and recieves text from the console
#include <string>		// this allows us to use the string variable type
using namespace std;	// this adds a lot of bloat, but keeps us from typing "std::" all the time

//hi

//this is where the program starts running
int main() {
	// some hints:
	// an "if statement" is a test. If the test is true, the code block runs. If the test is false, or NOT true, the code block does NOT run.
		// formatting: if(test) { code block }
	// about variables (integers, floats, doubles, characters, strings, and booleans
		// an integer is a whole number, positive or negative, between -2bil and 2bil
		// when creating a variable, specify type, name, and optionally, value. (always assign a value though)
			//for example, when adding a variable to declare a player's health and its amount, it would look like: int health = 10; .
		// constant variables cannot change their value and must be defined at creation 
			// for example, a constant variable defining a float type of variable for Earth's gravity, which never changes, would look like this: const float EARTH_GRAVITY = -9.81f; 
			// constants are usually written in ALL CAPS so they are easy to identify and nobody will accidentally edit their values. Btw, I don't know what the f is for after the gravity example.
		// a float is a floating point number accurate to 7 digits. That could be 9,999,999, or something like .0000001
			// a double is similar to a float, but is accurate to 22 digits. that means 9,999,999,999,999,999,999,999
		// a character is a variable for a single unicode input, i.e. one key press on the keyboard. 
			// Example code: char answer = 'n'; defining the character type variable, called "answer", as "n"

	//this list defines the variables used, along with their initial values
	int health = 10; 
	int attack = 0;
	int block = 0;
	int turns = 0;
	char answer;									// this stores the user's input for the character variable called "answer"

	cout << "Health is " << health << ".\n";		// initial announcement of the player's health at game launch

	if (health > 0) {
		cout << "You are still alive!\n";
	}
	else
		cout << "You died. :(\n";

	cout << "Please press Y on the keyboard\n";		// asks the user for an input
	cin >> answer;									// takes the user's input and stores it in the answer variable

	if (answer == 'y') {							// tests the input
		cout << "you pressed Y!\n";					// print text

	}
	else {											// if the test was false, do this
		cout << "you did not press Y.";				// print text
	}

} // this is the end of main()