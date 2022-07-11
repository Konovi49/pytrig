#include <iostream>
#include <algorithm>

using namespace std;

void drawTriangle() {

	cout << "\n\n		|\\" << endl;
	cout << "		| \\" << endl;
	cout << "		|  \\" << endl;
	cout << "		|   \\" << endl;
	cout << "	A	|    \\   C" << endl;
	cout << "		|     \\" << endl;
	cout << "		|      \\" << endl;
	cout << "		|       \\" << endl;
	cout << "		|________\\" << endl;
	cout << "\n" << "		    B" << endl;


}

void Trigonometry() {

	drawTriangle();

}

void Pythagoras() {
	
	drawTriangle();

	double sideA;
	double sideB;
	double sideC;

	char choice;

	cout << "\nWhich side do you want to work out? ";
	cin >> choice;

	if (choice == 'A' || choice == 'a') {
		cout << "\nEnter side B: ";
		cin >> sideB;
		cout << "Enter side C: ";
		cin >> sideC;
		sideA = sqrt(pow(sideB, 2) + pow(sideC, 2));
		cout.precision(4);
		cout << "\nYour answer is: " << sideA << "cm." << endl;
	}
	else if (choice == 'B' || choice == 'b') {
		cout << "\nEnter side A: ";
		cin >> sideA;
		cout << "Enter side C: ";
		cin >> sideC;
		sideB = sqrt(pow(sideA, 2) + pow(sideC, 2));
		cout.precision(4);
		cout << "\nYour answer is: " << sideB << "cm." << endl;
	}
	else if (choice == 'C' || choice == 'c') {
		cout << "\nEnter side A: ";
		cin >> sideA;
		cout << "Enter side B: ";
		cin >> sideB;
		sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
		cout.precision(4);
		cout << "\nYour answer is: " << sideC << "cm." << endl;
	}
	else {
		cout << "Enter a valid side!" << endl;
	}
	

}

int main() {

	char choice;

	cout << "===========================================" << endl;
	cout << "          Trigonometry & Pythagoras        " << endl;
	cout << "===========================================" << endl;

	cout << "\n\n" << "1. Pythagoras" << endl;
	cout << "\n\n" << "2. Trigonometry" << endl;

	cout << "\n\nChoice: ";
	cin >> choice;


	switch (choice) {

	case '1':
		Pythagoras();
		break;
	case '2':
		Trigonometry();
		break;
	default:
		cout << "Please enter either 1 or 2.";
	}

	return 0;
}