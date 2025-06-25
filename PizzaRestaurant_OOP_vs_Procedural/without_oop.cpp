#include <iostream>

using namespace std;
// Chicken
void MakeChickenPizzaDough() {
	cout << "Making Chicken Pizza Dough" << endl;
}
void AddChickenPizzaToppings() {
	cout << "Adding Chicken Pizza Toppings" << endl;
}
void BakingChickenPizza() {
	cout << "Baking Chicken Pizza" << endl;
}

void MakeChickenPizza() {
	MakeChickenPizzaDough();
	AddChickenPizzaToppings();
	BakingChickenPizza();
	cout << "Chicken Pizza is ready";
}
// Cheese
void MakeCheesePizzaDough() {
	cout << "Making Cheese Pizza Dough" << endl;
}
void AddCheesePizzaToppings() {
	cout << "Adding Cheese Pizza Toppings" << endl;
}
void BakingCheesePizza() {
	cout << "Baking Cheese Pizza" << endl;
}

void MakeCheesePizza() {
	MakeCheesePizzaDough();
	AddCheesePizzaToppings();
	BakingCheesePizza();
	cout << "Cheese Pizza is ready";
}
// Beef
void MakeBeefPizzaDough() {
	cout << "Making Beef Pizza Dough" << endl;
}
void AddBeefPizzaToppings() {
	cout << "Adding Beef Pizza Toppings" << endl;
}
void BakingBeefPizza() {
	cout << "Baking Beef Pizza" << endl;
}

void MakeBeefPizza() {
	MakeBeefPizzaDough();
	AddBeefPizzaToppings();
	BakingBeefPizza();
	cout << "Beef Pizza is ready";
}


//void main() {
//	int choice;
//	cout << "Choose Pizza type (1 Cheese) (2 Beef) (3 Chicken): ";
//	cin >> choice;
//
//	switch (choice)
//	{
//	case 1: 
//		MakeCheesePizza();
//		break;
//	case 2: 
//		MakeBeefPizza();
//		break;
//	case 3: 
//		MakeChickenPizza();
//		break;
//	default: 
//		cout << "Invalid Choice";
//	}
//}
