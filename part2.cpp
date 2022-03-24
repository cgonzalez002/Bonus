#include <iostream>

using namespace std;

class Converter {
	public: float fromFtoC(float);
};

float Converter::fromFtoC(float tempInF){ return ( ( tempInF - 32) / 1.8 ); }	

int main()
{
	float tempInF, tempInC;
	Converter c = Converter();
    cout << "Please enter a temperature. ";
	cin >> tempInF;
	tempInC = c.fromFtoC(tempInF);
	cout << "Converted to Celsius, this temperature is " << tempInC << "!\n";
    return 0;
}