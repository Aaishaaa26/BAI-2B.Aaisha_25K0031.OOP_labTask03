#include <iostream>
using namespace std;

class CricketPlayer{
	
	string name;
	int jerseyNumber;
	double battingAverage;
	
	public:
	CricketPlayer(string name, int jerseyNumber, double battingAverage){
		
		this->name = name;
		this->jerseyNumber = jerseyNumber;
		this->battingAverage = battingAverage;
	}
	
	CricketPlayer& improveAverage(int runs){
        battingAverage += runs * 0.1;   
        return *this;
    }
    CricketPlayer& playMatch(int runsScored){
        battingAverage = (battingAverage + runsScored) / 2.0;
        return *this;
    }
    
     void displayPlayerStats(){
        cout << "Name: " << name << endl << "Jersey Number: " << jerseyNumber << endl << "Average: " << battingAverage << endl << "This batting average is more consistent than Karachi's weather!\n" << endl;
    }
	
};

int main(){
    CricketPlayer p1("Babar Azam", 56, 48.5);
    CricketPlayer p2("Muhammad Rizwan", 16, 46.2);
    CricketPlayer p3("Saim Ayub", 63, 32.4);

    p1.playMatch(85).improveAverage(20);
    p2.playMatch(44).improveAverage(15).improveAverage(10);
    p3.improveAverage(25).playMatch(60);

    p1.displayPlayerStats();
    p2.displayPlayerStats();
    p3.displayPlayerStats();

}
