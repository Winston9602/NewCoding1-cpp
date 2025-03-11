// Mason Phillips
// Week 8 - Recap

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	
	//TASK:
	//ask the player if they prefer cheese or pepperoni pizza
	cout << "Which kind of pizza do you prefer, cheese or pepperoni?\n";
	string input = "";
	getline(cin, input);

	//use an if, else if, and else to check their input
	// have the computer agree or disagree with their choice, or berate them for any other option.
	if (input == "cheese") {
		cout << "Cheese is okay I guess...\n";
	}
	else if (input == "pepperoni") {
		cout << "Yeah, pepperoni is the best!\n";
	}
	else if (input == "sausage") {
		cout << "Sausage is nice too, but I didn't ask about sausage.\n";
	}
	else if (input == "pineapple") {
		cout << "Yooooo, most people don't seem to like pineapple on pizza, but I like it too!\n";
	}
	else {
		cout << "Ewwww, I can't believe you like " << input << " on your pizza!\n";
	}




	

	//TASK:
	//build a guess-the-number game
	srand(time(0));
	bool Debug = true;

	cout << "Let's play guess the number, between 1 and 10!\n";

	//have the computer choose a random number between 1 and 10 (inclusive)
	int theNumber = 0;
	theNumber = (rand() % 10 +1);

	if (Debug) {
		cout << "DEBUG IS ON...The number is: " << theNumber << ".\n";
	}
	
	//start a while loop
	while (true) {

		//ask the player to guess the number
		cout << "What is your guess?\n";
		getline(cin, input);
		int playerGuess = 0;

		try {
			int playerGuess = stoi(input);
		}
		catch (invalid_argument) {
			cout << "That's not a number, please try again.\n";
		}

		if (input == "quit") {
			cout << "Okay, see you later!\n";
			break;
		}

		if (stoi(input) == theNumber) {
			cout << "Yep, the number was " << theNumber << "!\n";
			break;
		}

		//tell the player whether the number is higher or lower than their guess, or if it is correct end the loop
		if (stoi(input) > theNumber) {
			cout << "Lower...\n";
		}

		if (stoi(input) < theNumber) {
			cout << "Higher...\n";
		}


	}
	//don't forget:
		// #include <cstdlib>
		// #include <ctime>
		// in main(), srand(time(0));
	



	return 0;
}