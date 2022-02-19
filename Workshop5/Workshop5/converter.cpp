#include <string>
using namespace std;
/*This function takes 2 parameters, a float a and string b. On giving the string 
parameter as "Farenheit",function assumes that the float input is in Celsius and converts it 
to Farenheit. On giving the string parameter as "Celsius",function assumes that the 
float input is in Farenheit and converts it to Celsius. */
float converter(float a,string b){
	if (b == "Celsius")
		return (a - 32) * 5 / 9;
	else if (b == "Farenheit")
		return float((float(9) / 5) * a + 32);
}