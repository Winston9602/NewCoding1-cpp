//Mason Phillips, Coding 1 Spring 2025

#include <iostream>					//this sends and recieves text from the console
#include <string>					//this allows us to use the string variable type
#include <cstdlib>					//this allows us to use rand() and srand()
#include <ctime>					//this allows us to use time(0)
using namespace std;

bool debug(false);																								//SET TO FALSE BEFORE SHIPPING!!!!!!!!

//create the following global variables:
	//health
	//totalTreasure
int health = 10;
int treasure = 0;
int beastAttack = 0;
int playerBlock = 0;
int dieRoll1 = 0;
int dieRoll2 = 0;
int dieRoll3 = 0;


//ASSIGNMENT - in a new program, create the following functions:
	//Story()
		//return type is void
void story() {
	cout << "You find yourself walking in a dark forest.\n";
	cout << "A ferocious beast leaps out from the trees!\n";
	cout << "You might be able to get some treasure if you fight, but you could also die trying!\n";
	cout << "(you start with " << health << " health)\n";
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
void rollDie(int dieSides = 6) {
	srand(time(0));								//seeds the r.n.g. based on the time of day
	dieRoll1 = (rand() % dieSides) + 1;								//fix for problem I had to work around:
	dieRoll2 = (rand() % dieSides) + 1;									//put srand within int main() - shomething to do with srand generating a number list and using the same list as reference when having it in rollDie function
	dieRoll3 = (rand() % dieSides) + 1;
	if (debug) {
		cout << "*DEBUG: dieRoll1 is " << dieRoll1 << ", dieRoll2 is " << dieRoll2 << ", dieRoll3 is " << dieRoll3 << ".\n";
	}
	
	
}
	

	//Adventure()
		//return type is void or bool
		//calls rollDie() for attack, block, & treasure
		//tells the player their health after the encounter
void adventure() {
	cout << "You lift your arms to counter an incoming blow...\n";

	rollDie(6);					//calls rollDie function
	beastAttack = dieRoll1;
	playerBlock = dieRoll2;
	cout << "The beast attacks for " << beastAttack << ", you block for " << playerBlock << "...\n";
	
	if (beastAttack > playerBlock) {
		health = health - (beastAttack - playerBlock);
		cout << "It breaks through your block, hitting you for " << (beastAttack - playerBlock) << " damage!\n";
	}
	else {
		cout << "Your block staggered the beast, shaking " << dieRoll3 << " treasure from its pockets!\n";
		treasure = treasure + dieRoll3;
	}

	if (health > 0) {
		cout << "You now have " << health << " health and " << treasure << " treasure!\n";
	}
	else {
		cout << "You died! The beast took back its treasure from your corpse.\n";
	}
}


	//Ending()																									//HAVEN'T DONE THIS YET!!!!!!!!!!!!!!!!
		//return type is void
//then, of course, main()
	//calls story()
	//has a loop for adventure()
	//checks for health
	//calls ending()






int main() {
	
	story();

	while (health > 0) {

		if (askYesNo("Are you brave enough to fight?")) {

			adventure();
		}
		else {
			cout << "You turn and run for the hills!\n";
			if (treasure > 0) {
				cout << "You escape with your life, and " << treasure << " treasure lining your pockets.\n";
			}
			else {
				cout << "You escape with your life, having nothing to show for your time in the woods.\n";
			} break;
			
		}
	}
}

