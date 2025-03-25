//Mason Phillips
//All about functions

//warm-up: create an array with three names
	//use a loop to display all of the names
	//compile and run this program to finish

#include <iostream>
#include <string>
using namespace std;

//global variables go at the top so all the functions can use them
//whenever possible - don't use global variables. It's safer, and it avoids bugs.
int currentShirtSizeElement = 0;			//...
string professor = "Brian";



//this is us declaring and defining a new function
	//NOTE: 'int main()' is also a function, and functions cannot occur within other functions, so..
	//we put it outside of 'int main()'
//the function must be declared before it is used
//the function CAN be defined later in the code
//this function returns nothing (that's why it's called 'void')
//this function's name is "sayHello()"
void sayHello() {
	cout << "Hello!\n";
}

//TASK: make a 'say goodbye' function
void sayGoodbye() {
	cout << "Goodbye!\n";
}

//adding two numbers with (parameters)
//parameters go inside the parenthesis
//they are the INPUTS for our function
//optionally, we can add default values for our input parameters 
	//if you add one default value, you must add a default value for all of the parameters
//we are creating two variables in the input parameter (parenthesis)
void add(int number1 = 2, int number2 = 0) {
	cout << "the sum of " << number1 << " and " << number2 << " is ";
	cout << number1 + number2 << endl;
}

//overload the add function
//this one adds two floats!
//don't forget to call this function in main()
void add(float firstNum, float secondNum) {
	cout << firstNum << " plus " << secondNum << " equals ";
	cout << firstNum + secondNum << endl;

}

//break your brain before the break...
//overload add() to accept two strings
//using concatenation!
//call with		add("coffee", "coffee");

void add(string firstWord, string secondWord) {
		cout << firstWord << " plus " << secondWord << " equals ";
		cout << firstWord + secondWord << endl;
}






//return types - the OUTPUT of the function
bool askYN(string question = "y/n?") {
	//in a dowhile loop,
		//ask the user the question
		//get input from the player
		//if y, return true
		//if n, return false
		//else, loop again
	do {
		cout << question << " (y/n)" << endl;
		string input;
		getline(cin, input);

		if (input == "y") {
			return true;			//this quits the function
		}
		else if (input == "n") {
			return false;
		}
		else {
			cout << "Please type 'y' or 'n'.\n";
		}
	} while (true);
}

//show array elements function
//doesn't return anything
//accepts one parameter as a pointer (sshhhh you don't know about those yet)
//call with		'show(names, 3);'
void show(string* array, int arraySize) {
	cout << "Here are the contents of your array:\n";
	for (int i = 0; i < arraySize; i++) {
		cout << array[i] << endl;
	}
}




//TASK: create a function that accepts a pointer to an array of strings
//let it add another element, as long as there are spaces
void addShirtSize(string* array, int currentSize) {
	string input;
	while (true) {
		if (currentShirtSizeElement >= 10) {
			cout << "That is all the shirt sizes we can support.\n";
			break;
		}
		cout << "Please add a shirt size to the array.\n";
		cout << "or type 'done' to stop.\n";
		getline(cin, input);

		if (input == "done") {
			break;
		}
		//increment the global counter
		array[currentShirtSizeElement++] = input;
	}
	
}


//in-class assignment
//1. add a while loop to addShirtSize() that lets the user add sizes until they say done, or...
	//or until they fill up the array


int main() {
	
	//SETUP
	string shirtSizes[10];				//creating the array of shirtSizes
	int currentSize = 0;
	addShirtSize(shirtSizes, currentSize);		

	show(shirtSizes, 10);					//show shirtSizes
		
	
	
	sayHello();							//calling the sayHello() function

	string names[3];			//create an array
								//add three names
	names[0] = "Jack";
	names[1] = "Liz";
	names[2] = "Kenneth";

	/*												//one way to display the names in the array with a while loop
	int counter = 0;
	while (counter < 3) {
		cout << names[counter++] << endl;
	}
	*/

	for (int i = 0; i < 3; i++) {					//another, preferred way to display the names with a for loop
		cout << names[i] << endl;
	}

	sayGoodbye();						//calling the 'sayGoodbye()' function
	add();
	add(23);
	add(23, 2);
	add(19.1f, 15.7f);			//add an f to the value to distinguish it as a float instead of a double

	if (askYN("Do you like pizza?")) {						//calling the 'askYN()' function
		cout << "Let's get some pizza for lunch!\n";
	}
	else {
		cout << "I would not care to know you.\n";
	}

	show(names, 3);

	add("coffee", "coffee"); 
}