#include<iomanip>
#include<iostream>
#include<conio.h>
#include<string>
#include "Header.h"
#include "exception.h"


using namespace std;
int menu(bool);
void convertF();
void convertC();
void intro();
int main()


{
	intro();

	bool firstTry;
	int choices;
	firstTry = true;

	do {
		choices = menu(firstTry);
		switch (choices)
		{
		case 1:
			convertF();
			firstTry = false;
			break;

		case 2:
			convertC();
			firstTry = false;
			break;

		case 3:
			cout << "Thank you for using the program!!" << endl;
			break;

		default:
			cout << "Invalid entry please try again.";
			firstTry = false;
			break;

		}

	} while (choices != 3);
	cout << "Press any key to exit!!" << endl;
	_getch();
	return 0;
}
void intro() {
	cout << "Module 9 -Final Project-Programmed by Deepa Natarajan!";
	cout << endl;
}

int menu(bool firstTry) {
	int choice;

	cout << "Enter 1: To convert from Fahrenheit to Celsius." << endl;
	cout << "Enter 2: To convert from Celsius to Fahrenheit." << endl;
	if (!firstTry)
		cout << "Enter 3: To Exit." << endl;
	cin >> choice;
	return choice;
}
void convertF()
{
	temperature temp1;
	double *temp;
	temp = new double;
	bool done;
	done = false;
	char str[] = "Invalid";

	do
	{
		try
		{
			cout << "Enter the Fahrenheit Temperature:" << endl;
			cin >> *temp;
			if (!cin)
				throw str;
			done = true;
		}
		catch (char)
		{
			cout << "Invalid entry .Enter only numbers!" << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}
	} while (!done);
	temp1.setFahrenheit(*temp);
	temp1.FahrenheittoCelsius();
	cout << temp1;
	
	delete temp;
}

void convertC()
{
	temperature temp1;
	double *temp;
	temp = new double;
	
	bool done;
	done = false;
	char str[] = "Invalid";
	do {
		try
		{
			cout << "Enter the Centigrade Temperature:" << endl;
			cin >> *temp;
			if (!cin)
				throw str;
			done = true;
		}
		catch (char)
		{
			cout << "Invalid entry .Enter only numbers!" << endl;
			cin.clear();
			cin.ignore(100, '\n');
		}

	} while (!done);
	temp1.setCelsius(*temp);
	temp1.CelsiustoFahrenheit();

	cout << temp1;
	
	delete temp;
}