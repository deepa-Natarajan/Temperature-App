#include<iostream>
#include<iomanip>
#include<string>

using namespace std;


class temperature {
	
	friend ostream& operator<<(ostream&, const temperature&);
public:
	void setFahrenheit(double f);
	void setCelsius(double c);
	double getFahrenheit();
	double getCelsius();
	double FahrenheittoCelsius();
	double CelsiustoFahrenheit();
	
	temperature();
	temperature(double temp);

private:
	double fahrenheit;
	double centigrade;
}; 
