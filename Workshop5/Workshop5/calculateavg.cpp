#include <iostream>
#include <string>
using namespace std;
/*This function takes numbers of inputs of student's marks in a loop (Type "Done" and press enter to break loop)
to determine the average of the marks but does not print it. As it is a void function, it wont be able to return 
the average to be printed. However, it can take a variable and assign the average to that variable(Useful while testing)*/
void calculateAvg(float &avg) {
	string c;
	int count = 0;
	float sum = 0;
	while (true) {
		cout << "Input the number: ";
		cin >> c;
		if (c == "Done")
			break;
		else{
			sum += stof(c);
			count += 1;
		}
	}
	avg = sum / count;
}