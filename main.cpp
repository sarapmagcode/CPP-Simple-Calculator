#include <iostream>
#include <cmath>

using namespace std;

void Prompt(double&); // entering 1 number
void Prompt(double&, double&); // entering 2 numbers
double Add(double, double); // adding to 2 numbers
double Subtract(double, double); // subtracting 2 numbers
double Multiply(double, double); // multiplying 2 numbers
double Divide(double, double); // dividing 2 numbers
double Square(double); // squaring a number
double SquareRoot(double); // taking the square root of a number

int main() {
	while (true) {
		// menu:
		cout << "Select any operation from C++ Calculator" << endl;
		string choices[] = {"Addition", "Subtraction", "Multiplication", "Division",
							"Square", "Square Root", "Exit"};					
		int len = sizeof(choices) / sizeof(choices[0]);
		for (int i = 0; i < len; i++) {
			cout << (i + 1) << " = " << choices[i] << endl;
		}
		
		// pick an operation:
		cout << endl << "Make a choice: ";
		int num;
		cin >> num;
		
		// perform chosen operation:
		double x = 0;
		double y = 0;
		double res = 0;
		switch (num) {
			case 1: {
				Prompt(x, y);
				res = Add(x, y);
				cout << "The sum of " << x << " and " << y << " is " << res << endl;	
			} break;
			case 2: {
				Prompt(x, y);
				res = Subtract(x, y);
				cout << "The difference of " << x << " and " << y << " is " << res << endl;	
			} break;
			case 3: {
				Prompt(x, y);
				res = Multiply(x, y);
				cout << "The product of " << x << " and " << y << " is " << res << endl;	
			} break;
			case 4: {
				Prompt(x, y);
				if (y == 0) {
					cout << endl << "Cannot divide by 0." << endl;
					break;
				}
				res = Divide(x, y);
				cout << "The quotient of " << x << " and " << y << " is " << res << endl;	
			} break;
			case 5: {
				Prompt(x);
				res = Square(x);
				cout << "The square of " << x << " is " << res << endl;	
			} break;
			case 6: {
				Prompt(x);
				if (x < 0) {
					cout << endl << "Cannot take the square root of a negative number." << endl;
					break;
				}
				res = SquareRoot(x);
				cout << "The square root of " << x << " is " << res << endl;	
			} break;
			case 7:
				cout << "Program exiting..." << endl;
				exit(0);
			default:
				cout << "Invalid input. Please try again." << endl;
		}
		
		// ask if user wants to continue:
		bool proceed = true;
		while (proceed) {
			cout << endl << "Do you want to continue? (Y/N): ";
			char ch;
			cin >> ch;
			switch (ch) {
				case 'Y': case 'y':
					system("cls");
					proceed = false;
					break;
				case 'N': case 'n':
					cout << "Program exiting..." << endl;
					exit(0);
					break;
				default:
					cout << "Invalid input. Please try again." << endl;
			}
		}
	}
	return 0;
}

void Prompt(double& x) {
	cout << "Enter number: ";
	cin >> x;
}

void Prompt(double &x, double &y) {
	cout << "Enter 1st number: ";
	cin >> x;
	cout << "Enter 2nd number: ";
	cin >> y;
}

double Add(double x, double y) {
	return (x + y);
}

double Subtract(double x, double y) {
	return (x - y);
}

double Multiply(double x, double y) {
	return (x * y);
}

double Divide(double x, double y) {
	return (x / y);
}

double Square(double x) {
	return (x * x);
}

double SquareRoot(double x) {
	return (sqrt(x));
}

