#include <iostream>

using namespace std;

class Converter {
	
	private:
	static Converter *instance;
	Converter (){} //private constructor
	
	
	public:
	~Converter(); //destructor
	static Converter *getInstance(){ 
		if (!instance)
		instance = new Converter;
		return instance;
	}
	float fromFtoC(float tempInF){ 
		return ( ( tempInF - 32) / 1.8 ); 
	}
	
};

Converter *Converter::instance = 0;

int main()
{
	float tempInF, tempInC;
	Converter *c = Converter:: getInstance();
    cout << "Please enter a temperature. ";
	cin >> tempInF;
	tempInC = c->fromFtoC(tempInF);
	cout << "Converted to Celsius, this temperature is " << tempInC << "!\n";
    return 0;
}