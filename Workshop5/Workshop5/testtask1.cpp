#include <iostream>
#include <string>
using namespace std;
float converter(float a, string b);
void testTask1(int& pass, int& fail, int &test) {
	string unit = "Celsius";
	float value = 35.4;
	float returned = converter(35.4, "Celsius");
	if (abs(returned - 1.88889) < 0.01f)
		pass++;
	else
		fail++;
	test++;
	unit = "Celsius";
	value = -53.4;
	returned = converter(value, unit);
	if (abs(returned - (-47.4444)) < 0.01f)
		pass++;
	else
		fail++;
	test++;
	unit = "Farenheit";
	value = -5.7;
	returned = converter(value, unit);
	if (abs(returned - 21.74) < 0.01f)
		pass++;
	else
		fail++;
	test++;
	unit = "Farenheit";
	value = 45.7;
	returned = converter(value, unit);
	if (abs(returned - 114.26) < 0.01f)
		pass++;
	else
		fail++;
	test++;
}