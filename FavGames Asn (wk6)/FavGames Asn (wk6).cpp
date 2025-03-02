// FavGames Asn (wk6).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
		//Setup
	string favGames[5];
	int gameCount = 0;



		//start loop

		//0. Greet player, list things they can input to start interacting with the list, and ask for input
	cout << "Welcome player! Let's build a list of our favorite games.\n";
	string input;
	do {
		cout << "To interact with the list, type 'add', 'edit', 'remove', or 'show', or type 'quit' to quit.\n";
		getline(cin, input);		//get input
		
		//1. Quit
		if (input == "quit") { 			
			cout << "Quitting activity...thanks for coming!\n";		//tell the player they have quit the game
			//TO DO: show the final list of names
			break;													//break the loop
		}	

		if (gameCount >= 5) {										//Fail case: list is full
			cout << "Whoopsie! We've already listed the maximum amount of games (5). Try another command.\n";
		}



		//2. Show
		if (input == "show") {
			cout << "Showing list...\n";
			cout 
		}
			//cout the list of names
			//return to the start of the loop at position 0
		//3. Add
			//ask the player what name they want to add
			//get input
			//add that name to the array and increment gameCount
			//(optional) tell player what name they've added
		//4. Remove
			//ask the player which name they want to remove
			//get input
			//compare input to each existing name in the list, until either the name is found or the list has been exhausted
				//if no matching name is found in the list...
					//tell the player nothing was found that matched their input
					//return to the start of the loop at position 0
				//if a matching name is found in the list...
					//tell the player a matching name was found
					//change the value of the name in the list to null
					//tell the player the name has been removed successfully
					//return to the start of the loop at position 0
		//5. Edit
			//ask the player which name they want to edit
			//get input
			//use for loop to compare input to games[i]
				//if no matching name is found in the list...
					//tell the player nothing was found that matched their input
					//return to the start of the loop at position 0
				//if a matching name is found in the list...
					//tell the player a matching name was found
					//ask the player what they want to change it to
					//get input
					//change the value of the matching name to the input
					//prove to the player that the name has been changed to the input
					//return to the start of the loop at position 0
		
		
		
	} while (true);
}

