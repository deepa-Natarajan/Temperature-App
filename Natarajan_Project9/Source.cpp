#include<iomanip>
#include<iostream>
#include"Header.h"
using namespace std;



double temperature::getFahrenheit() {
	return fahrenheit;
}

double temperature::getCelsius() {
	return centigrade;
}

double temperature::FahrenheittoCelsius()
{
	 centigrade=(getFahrenheit() - 32) * 5 / 9;
	return centigrade;
}
double temperature::CelsiustoFahrenheit()
{
	fahrenheit = (getCelsius() * 9 / 5) + 32;
	
	return fahrenheit;
}

temperature::temperature() {
	centigrade = 0;
	fahrenheit = 0;
}
temperature::temperature(double t) {
	centigrade = t;
	fahrenheit = t;
}
void temperature::setFahrenheit(double f) {
	fahrenheit = f;
}
void temperature::setCelsius(double c) {
	centigrade = c;
}
ostream& operator<<(ostream& osObj, const temperature& obj)
{
	cout << showpoint << fixed << setprecision(1) << endl;
	cout << "Centigrade Temperature:" << obj.centigrade << endl;
	cout << "Farenheit Temperature:" << obj.fahrenheit << endl;
	return osObj;
}
