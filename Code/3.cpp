#include <iostream>
using namespace std;

class SmartDevice{
	
	string name;
	string type;
	bool status; //true for on & false for off
	
	public:
	//para construct
	SmartDevice(string n, string t, bool s){ 
		name = n;
		type = t;
		status = s;
		
		cout <<name <<" -> Smart Device Created.\n" <<endl;
	}
	
	//destructor
	~SmartDevice(){
		cout << name << " is Powering down :'''( \n" << endl;
	}
	
};

int main(){
    SmartDevice d1("Bedroom Light", "Smart Light", true);
    SmartDevice d2("Wall E", "Robo Vacuum", false);
    
}
