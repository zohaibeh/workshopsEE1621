#include <iostream>
#include <string>
using namespace std;
float converter(float a, string b);
float calculateSum();
void calculateAvg(float &avg);
void testTask1(int& pass, int& fail, int& test);
void testTask2(int& pass, int& fail, int& test);
int main() {
	int pass1=0, fail1=0, test1=0;
	float avg = 0;
	float x;
	string z;
	cout << "Enter the unit to which you want to convert: ";
	getline(cin, z);
	cout << "Enter the temprature: ";
	cin >> x;
	cout << "The conversion to " << z << " unit is: " << converter(x, z) << endl;
	cout << "Test Started for Task 1" << endl;
	testTask1(pass1, fail1, test1);
	cout << "Total tests " << test1 <<endl;
	cout << "Test Passed " << pass1 <<endl;
	cout << "Test Failed " << fail1 << endl;
	cout << "Task 1 complete" << endl;
	int pass2=0, fail2=0, test2=0;
	cout << "Test Started for Task 2"<<endl;
	testTask2(pass2, fail2, test2);
	cout << "Total tests " << test2 << endl;
	cout << "Test Passed " << pass2 << endl;
	cout << "Test Failed " << fail2 << endl;
	cout << "Task 2 Complete" << endl;
}