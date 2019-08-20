#include<iostream>
#include<string>

using namespace std;

class invalidEntry {
public:
	invalidEntry() {
		message = "Invalid Entry , Try again!";
	}
	invalidEntry(char str[]) {
		message = str;
	}
	string what() {
		return message;
	}
private:
	string message;
};

