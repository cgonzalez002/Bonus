#include <iostream>
using namespace std;

int main()
{
	float tempInF, tempInC;
    cout << "Please enter a temperature. ";
	cin >> tempInF;
	tempInC = (tempInF - 32) / 1.8;
	cout << "Converted to Celsius, this temperature is " << tempInC << "!\n";
    return 0;
}
