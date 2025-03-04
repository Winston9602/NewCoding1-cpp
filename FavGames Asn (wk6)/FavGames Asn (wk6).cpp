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
			cout << "Quitting activity...thanks for coming!\n";		//tell the player they have quit the game, and display the list
			cout << "Here's how the list ended up:\n";

			if (gameCount == 0) {									//Failcase: no items were in the list
				cout << "Looks like the list is empty!\n";
				break;
			}

			//display the final list
			for (int i = 0; i < gameCount; i++) {									//for as long as i (starting at 0) is...
				if (favGames[i] == "") {
					continue;
				}
				cout << i + 1 << "\t";		//add "1. "								//...is less than gameCount...
				cout << favGames[i] << "\n";										//...add 1 to i, and keep looping
			}
			break;																	//break the loop
		}	

		/*use the following as a fail case for each possible command to stop the input from moving on...
		if (gameCount >= 5) {										//Fail case: list is full
			cout << "Whoopsie! We've already listed the maximum amount of games (5). Try another command.\n";
			continue;
		}
		*/



		//2. Show
		if (input == "show") {
			cout << "Showing list...\n";
			if (gameCount == 0) {													//Failcase: list is empty
				cout << "Looks like the list is empty! Try adding something to the list.\n";
				continue;
			}
			//create a for loop to show all existing items in the list
			for (int i = 0; i < gameCount; i++) {									//for as long as i (starting at 0), is less than gameCount, add 1 to i and keep looping
				if (favGames[i] == "") {
					continue;
				}
				cout << i + 1 << "\t";												//display the list, adding "#. " prefix for formatting, incrementing by 1 for each item								
				cout << favGames[i] << "\n";										//display the item in the list related to the current i value
			}
			//input == "0";				//old code, not sure what it was needed for														
		}
		


		//3. Add
		if (input == "add") {
			if (gameCount >= 5) {										//Fail case: list is full
				cout << "Whoopsie! We've already listed the maximum amount of games (5). Try another command.\n";
				continue;
			}
			
			cout << "What game would you like to add?\n";							//ask the player what game they want to add
			getline(cin, input);													//get input

			favGames[gameCount++] = input;											//add that input to the array and increment gameCount
			cout << "You just added " <<input<< " to the list.\n";					//(optional) tell player what game they've added			
		}		
		

		//4. Remove
		if (input == "remove") {
			if (gameCount == 0) {										//Failcase: list is empty
				cout << "Looks like the list is empty! Nothing to remove.\n";
				continue;
			}

			cout << "What game would you like to remove?\n";												//ask the player what game they want to remove
			cout << "Type the item's corresponding number to remove it\n";
			getline(cin, input);																			//get input

			//I don't know where to start with programming the Remove or Edit commands

			//TO DO:
			//compare input to each existing name in the list, until either the name is found or the list has been exhausted
				//if no matching name is found in the list...
					//tell the player nothing was found that matched their input
					//return to the start of the loop at position 0
				//if a matching name is found in the list...
					//tell the player a matching name was found
					//change the value of the name in the list to null
					//tell the player the name has been removed successfully
					//return to the start of the loop at position 0
		}	
					
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

