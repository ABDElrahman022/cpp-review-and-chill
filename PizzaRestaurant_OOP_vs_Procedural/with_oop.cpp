#include <iostream>
using namespace std;


class Pizza {

private:
	void MakePizzaDough() {
		cout << "Making " << GetPizzaName()<<" Pizza Dough" << endl;
	}
	void AddPizzaToppings() {
		cout << "Adding " << GetPizzaName() << " Pizza Toppings" << endl;
	}
	void BakingPizza() {
		cout << "Baking " << GetPizzaName() << " Pizza" << endl;
	}

protected:
	virtual const char * GetPizzaName() = 0;

public:
	void MakePizza() {
		MakePizzaDough();
		AddPizzaToppings();
		BakingPizza();
		cout <<GetPizzaName() <<" Pizza is ready";
	}

};

class CheesePizza : public Pizza {
protected:
	const char* GetPizzaName() {
		return "Cheese";
	}
};

class ChickenPizza : public Pizza {
protected:
	const char* GetPizzaName() {
		return "Chicken";
	}
};

class BeefPizza : public Pizza {
protected:
	const char* GetPizzaName() {
		return "Beef";
	}
};

void MakePizza(Pizza* pizza) {
	pizza->MakePizza();
}
void main() {

	Pizza* pizza = NULL;
	int choice;
	cout << "Choose Pizza type (1 Cheese) (2 Beef) (3 Chicken): ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		pizza = new CheesePizza;
		break;
	case 2:
		pizza = new BeefPizza;
		break;
	case 3:
		pizza = new ChickenPizza;
		break;
	default:
		cout << "Invalid Choice";
	}
	if (pizza) {
		MakePizza(pizza);
	}
}