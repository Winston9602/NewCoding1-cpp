// Mason Phillips, Coding 1 Tuesday, Spr. 2025
//Also includes notes on Inheritance and followed along in class Wk13





#include <iostream>
#include <string>
using namespace std;

//global debugging variable
bool debug = true;

class human {
protected:
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

	virtual void SetHealth(int byAmount) {			//would probably make more sense to be called "ChangeHealth" since it adds/subtracts
															//virtual keywork helps with something in the shopkeep class
		if (debug) {
			cout << "at top of SetHealth(byAmount), health = " << health << ", byAmount = " << byAmount << ".\n";
		}
		

		if (health < 0) {			//clamping health to be no lower than 0 BEFORE changing
			health = 0;
		}
		if (health > 100) {			//clamping health to be no higher than 100 BEFORE changing
			health = 100;
		}
		
		health += byAmount;

		if (health < 0) {			//clamping health to be no lower than 0 AFTER changing
			health = 0;
		}
		if (health > 100) {			//clamping health to be no higher than 100 AFTER changing
			health = 100;
		}
	}

	int GetHealth() {
		return health;
	}

	void SetDamage(int givenDamage) {
		damage += givenDamage;
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


class barbarian : public human {
	//this class should inherit all of the things that a human has
	//add a constructor
	//add a Yell() function
	//add a doubleSwing() function

public:
	
	barbarian(string givenName, int givenHealth, int baseDamage) {			///constructor
		name = givenName;
		health = givenHealth;
		damage = baseDamage;
	}
	//a constructor needs to have the same name as the class, and no return type
	void Yell() {
		cout << "The barbarian unleashes an inhuman yell, boosting all of their team's stats.\n";
	}

	void doubleSwing(human& target) {				//the "&" lets us use 'target' as a nickname for whatever we need to pull here and do something to, i.e. "Jeff", like slapping on a nametag until the end of the function, where it stops existing!
		cout << "The barbarian swings both weapons at " << target.GetName() << "!\n";

		// call the SetDamage() function on the human target.
		//use the damage from "This" instance of a barbarian
		//double the damage, because it's a double swing, obviously
		int tempDamage = this->GetDamage() * 2;
		target.SetHealth(-tempDamage);
	}
};		//end of the barbarian class



//distill your learning:
//create a shopkeep class that inherits from the human class
//add a dropGold() function
//add a shopName variable

class shopkeep : public human {
private:
	int gold;
	string shopName;

public:
	shopkeep() {
		gold = 15;
	}

	shopkeep(string givenName, int givenHealth) {			///constructor
		name = givenName;
		health = givenHealth;
	}

	void SetShopName(string givenShopName) {
		shopName = givenShopName;
	}

	//overlodading the human::setHealth() function
	void SetHealth(int byAmount) override {					//override keyword says "...
		health += byAmount;

		if (health <= 0) {
			cout << "The proprietor of " << shopName << " has died!\n";
			cout << "They dropped " << gold << " gold.\n";
		}
	}


};




int main() {

	barbarian bane("Bane", 22, 4);
	bane.SayHello();

	shopkeep jingles("Jingles");
	jingles.SetHealth(5);
	jingles.SetShopName("BoJangles");
	jingles.SayHello();


	cout << "Human classes boi\n";

	human jeff;
	jeff.SetName("Jeff");
	jeff.SetHealth(19);

	cout << "Please welcome, my new friend Jeff!\n";
	jeff.SayHello();

	human bill("Bill", 10, 1);
	bill.SayHello();

	bane.doubleSwing(jeff);	
	jeff.SayHello();

	bane.doubleSwing(jingles);
	jingles.SayHello();

}