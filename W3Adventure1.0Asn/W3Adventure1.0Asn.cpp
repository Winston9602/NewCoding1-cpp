#include <iostream>		// this sends and recieves text from the console
#include <string>		// this allows us to use the string variable type
#include <cstdlib>		// this allows us to use rand() and srand()
#include <ctime>		// this allows us to use time(0)
using namespace std;	// this adds a lot of bloat, but keeps us from typing "std::" all the time

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
		// a string is an array of characters, in an ordered list, one after the other.
			// Booleans are a variable type that can only be true/false, yes/no, on/off, etc.
	// About random number generators: include (except the quotation marks)...
		// "#include <cstdlib>"			for rand() and srand()
		// "#include <ctime>"			for time()
		// ALWAYS seed your random number generator ONCE, at the beginning of your program.

	srand(time(0));						//seeding the random number generator

	bool debug = true;					// TURN THIS TO FALSE BEFORE SHIPPING
	if (debug) cout << "DEBUG MODE IS ON\n";

	//this list defines the variables used, along with their initial values
	int health = 10;
	int attack = 0;
	int block = 0;
	int turns = 0;
	char answer;									// this stores the user's input for the character variable called "answer"
	bool playerIsAlive = true;						// this sets up the boolean "playerIsAlive" to start as true
	int score = -5;									// this will keep track of the score

	string input = "";						//this will store the user's text input

	cout << "What is your name?\n";
	cin >> input;							//for example, input = Mason

	cout << "Hello " << input << "!\n";
	cout << "You begin with " << health << " health.\n";		// initial announcement of the player's health at game launch

	
	// below is the simplest kind of loop. It runs as long as the test is true: while(test) { code block }
	while (playerIsAlive) {
		string input;

		//score = score + 5; ...This would allow us to add 5 to the score every time the loop it is within loops. But the code in the next line is a better way to write the same thing.
		score += 5;			//Called a "combined assignment operator", this adds 5 to the value of the score

		if (debug) cout << "DEBUG: score = " << score << "\n";

		cout << "Are you dead yet?\n";
		cin >> input;

		if (input == "yes") {
			playerIsAlive = false;				//this will make the loop stop
		}
	}

	if (debug) cout << "score after loop: " << score << "\n";

	cout << "Oh no, may you rest in peace.\n";
	cout << "Final score..." << score << ".\n";

	cout << "By the way, here are 10 random numbers: \n";
	int count = 0;
	while (count < 10) {
		count += 1;								// add one to the count
		cout << (rand() % 10) + 1 << "\n";					// display a random number. The "%" works as a modulus operator, which does some quick math to divide the... 
															// random number that was drawn by, in this case, 10, and keep the remainder. Then, because remainders can be zero, ...
															// we add one to each remainder to make the random numbers a range from 1 to 10
	}

} // this is the end of main()