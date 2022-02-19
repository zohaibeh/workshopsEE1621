#include <string>
#include <iostream>
using namespace std;
/*This function takes input of student's marks in a loop (Type "Done" and press enter to break loop) to determine the
sum of the marks. and returns the sum in the form of a float.*/
float calculateSum() {
	string c;
	float sum = 0;
	while (true) {
		cout << "Input the number: ";
		cin >> c;
		if (c == "Done")
			return sum;
		else
			sum += stof(c);
	}
}