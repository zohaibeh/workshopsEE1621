#include <iostream>
using namespace std;
float calculateSum();
void calculateAvg(float& avg);
void testTask2(int& pass, int& fail, int& test) {
	float returnedSum = calculateSum();
	float Avg;
	//Marks 1 = 95
	//Marks 2 = 90.7
	//Marks 3 = 85
	//Marks 4 = 89.6
	//Makrs 5 = 65
	//Sum = 425.3
	//Average = 85.06
	if (abs(returnedSum - 425.3) < 0.01f) {
		cout << "The sum of the Marks is: " << returnedSum <<endl;
		pass++;
	}
	else
		fail++;
	test++;
	calculateAvg(Avg);
	if (abs(Avg - 85.06) < 0.01f) {
		cout << "The avg of the Marks is: " << Avg <<endl;
		pass++;
	}
	else
		fail++;
	test++;
}