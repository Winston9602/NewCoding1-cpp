#include <iostream>		// this sends and recieves text from the console
#include <string>		// this allows us to use the string variable type
#include <cstdlib>		// this allows us to use rand() and srand()
#include <ctime>		// this allows us to use time(0)
using namespace std;	// this adds a lot of bloat, but keeps us from typing "std::" all the time


/*ASSIGNMENT: 
welcome the player

set up the game
    int health = 10, attack, block, turns = 0
    seed the random number generator
start the loop
    add 1 to turns
    start the encounter
        randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
        if block is greater or equal to attack, successful block
        otherwise, subtract attack value from health.
        ask the player if they would like to keep adventuring. if they don't, break out of the loop.
keep looping while health is greater than zero and fewer than 4 turns have happened
 
if health is greater than 0, congratulate player
otherwise, tell the player they're dead.*/


//this is where the program starts running
int main() {
	
	bool debug = true;			// TURN TO FALSE BEFORE SHIPPING		// boolean for debug mode. 
// ASSIGNMENT:
// welcome the player
	cout << "Hello player!\n";									// Print text to say hello to the player
// set up the game
    // int health = 10, attack, block, turns = 0
	int health = 10;											// defining integer variables to be used in the game
	int attack = 0;
	int block = 0;
	int turns = 0;
	// seed the random number generator
	srand(time(0));												// seeds the r.n.g. based on the time of day

	if (debug) {												// prints text to let developers know when...
		cout << "DEBUG IS ON\n";								// debug mode is on, and...
		cout << "10 random numbers: \n";						// gives 10 random numbers based off of the seeded r.n.g. to..
		int count = 0;											// prove that it is working properly
		while (count < 10) {
			count += 1;
			cout << (rand() % 10) + 1 << "\n";
		}
	}
	// start the encounter
	cout << "While adventuring through the woods, you come to a bridge.\n";
	cout << "A BLACK KNIGHT guards the bridge and will not let you pass without a fight!\n";
	cout << "How long can you make it without dying? (type 'y' to block their attacks, or 'n' to flee)\n";

	// start the loop
	while (health > 0) {										// starts a loop, which will end when health reaches 0
		// add 1 to turns
		turns += 1;
		if (debug) {
			cout << "DEBUG: Turn #" << turns << "\n";			//debug: desplays the turn number
		}
		if (debug) {
			cout << "DEBUG: Health = " << health << "\n";		//debug: displays the current health
		}
		string input;
		cin >> input;
		if (input != "yes") {}			// move this closing curly bracket
				// randomly generate numbers for attack (range = 0-4) and block (range = 0-4)
				attack = (rand() % 5);
				cout << "BLACK KNIGHT attacks for " << attack << "!\n";
				block = (rand() % 5);
				cout << "YOU block for " << block << "!\n";


				// if block is greater or equal to attack, successful block
				if (attack < block) {
					cout << "Your block was successful!\n";
				}

				// otherwise, subtract attack value from health.
				else {
					cout << "The BLACK KNIGHT's attack breaks through! They hit you for " << attack - block << "!\n";
					health -= (attack -= block);
					cout << "You now have " << health << " health left!\n";
				}
				

				string input;
				// ask the player if they would like to keep adventuring. if they don't, break out of the loop.
				cout << "Would you like to keep fighting? (type 'y' or 'n')\n";
				cin >> input2;
				if (input2) {
					input1 = false;
				}
 }


	if (health > 0) {
		cout << "You got away with your life!\n";
	}
	else {
		cout << "Oh no, they finally got you :(\n";
	}
	cout << "You lasted " << turns << " turns!\n";					// announces how long the player lasted after the game ends
	cout << "Thanks for playing!\n";
	
	
		
		
// keep looping while health is greater than zero and fewer than 4 turns have happened
 
// if health is greater than 0, congratulate player
// otherwise, tell the player they're dead.

	
	
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



	/*
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
	*/
} // this is the end of main()