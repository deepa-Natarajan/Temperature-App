#include<iostream>
#include<string>

using namespace std;

class invalidEntry {
public:
	invalidEntry() {
		message = "Invalid Entry , Try again!";
	}
	invalidEntry(string s) {
		message = s;
	}
	string what() {
		return message;
	}
private:
	string message;
};

