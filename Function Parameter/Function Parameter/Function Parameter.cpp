#include <iostream>
using namespace std;

void showMenu() // void Allows you to call function from anywhere
{
	cout << "1. Seach" << endl;
	cout << "2. View Record" << endl;
	cout << "1. Quit" << endl;
}

int getInput()
{
	cout << "Enter Selection: " << endl;

	int input;
	cin >> input;

	return input;
}

void processSelection(int selection) //We want to pass an integer to process selection
{
	switch (selection)
	{
	case 1:
		cout << "Searching ..." << endl;
		break;
	case 2:
		cout << "Viewing ..." << endl;
	case 3:
		cout << "quitting ..." << endl;
	default:
		cout << "Please select an item from the menu." << endl;
	}
}

int main()
{
	showMenu();

	int selection = getInput();//selection operate separtely from input value in int that is returning
	processSelection(selection);// We putting the values we want to pass into the round brackets
	
	return 0;
}