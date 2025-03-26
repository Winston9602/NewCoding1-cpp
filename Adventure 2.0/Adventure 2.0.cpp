//Mason Phillips, Coding 1 Spring 2025

#include <iostream>
#include <string>
using namespace std;

void sayHello() {							//example function to say hello
	cout << "Hellooooo!\n";
}

//ASSIGNMENT - in a new program, create the following functions:
	//Story()
		//return type is void
void story() {
	cout << "~You're walking in the woods. There's noone around and your phone is dead.\n";
	cout << "~Out of the corner of your eye, you spot him (Shia Lebeouf)\n";
	cout << "~He's following you, about thirty feet back. He gets down on all fours and breaks into a sprint, he's gaining on you!\n";
}

	//AskYesNo()
		//One string argument named "question"
		// return type is bool
bool askYesNo(string question = "PLACEHOLDER QUESTION") {
	do {
		cout << question << " (yes/no)" << endl;		//a dowhile loop to ask the question defined at the call location, or the default question, and get input
		string input;
		getline(cin, input);
																	//what to do next, based on the player's input
		if (input == "yes") {
			return true;
		}
		else if (input == "no") {
			return false;
		}
		else {
			cout << "Please type 'yes' or 'no'.\n";
		}
	} while (true);
}

	//RollDie()
		//one int parameter named "sides" with a default value of 6
		//return type is int
	//Ending()
		//return type is void
	//Adventure()
		//return type is void or bool
		//calls rollDie() for attack, block, & treasure
		//tells the player their health after the encounter
//then, of course, main()
	//calls story()
	//has a loop for adventure()
	//checks for health
	//calls ending()






int main() {

	sayHello();								//calling the example function that says hello

	story();

	if (askYesNo("Do you turn and fight?")) {
		cout << "You lift your arms to counter an incoming blow...\n";
	}
	else {
		cout << "You turn and run for the hills.\n";
	}
}

//create the following global variables:
	//health
	//totalTreasure