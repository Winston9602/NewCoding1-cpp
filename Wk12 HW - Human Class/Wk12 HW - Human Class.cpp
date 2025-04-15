// Mason Phillips, Coding 1 Tuesday, Spr. 2025

#include <iostream>
#include <string>
using namespace std;

class human {
private:
	string name;
	int health = 10;
	int damage = 4;

public:
	human(string, int, int);
	human();
	void SayHello();

	/*void SetName(string givenName) {
		if (givenName.size() < 2) {
			cout << "Name is too short!\n";
			return;			//return nothing out of a void function to end the function
		}
		else if (givenName.size() > 20) {
			cout << "Name is too long!\n";
			return;
		}
		else {
			name = givenName;
		}
	}*/

	void SetName(string newName) {
		name = newName;
	}

	string GetName() {
		return name;
	}

	void SetHealth(int byAmount) {
		health = byAmount;
	}

	int GetHealth() {
		return health;
	}

	void SetDamage(int givenDamage) {
		damage = givenDamage;
	}

	int GetDamage() {
		return damage;
	}

};

human::human(string givenName, int givenHealth, int baseDamage) {			///constructor
	name = givenName;
	health = givenHealth;
	damage = baseDamage;

	cout << "A new human approaches!\n";		//lets us know that this constructor has run
}

human::human() {
	cout << "Using the DEFAULT constructor.\n";
}

void human::SayHello() {
	cout << "My name is " << name << ", I have " << health << " health and I can do " << damage << " damage.\n";
}



int main() {
	cout << "Human classes boi\n";

	human jeff;
	jeff.SetName("Jeff");
	jeff.SetHealth(19);

	cout << "Please welcome, my new friend Jeff!\n";
	jeff.SayHello();

	human bill("Bill", 10, 1);
	bill.SayHello();

}