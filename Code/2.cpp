#include <iostream>
#include <string>
using namespace std;

class WeekDays{
	
	private:
		string Days[7];
		int currentDay;
	public:
		//constructs
		WeekDays(){
			
			Days[0] = "Sunday";
			Days[1] = "Monday";
			Days[2] = "Tuesday";
			Days[3] = "Wednesday";
			Days[4] = "Thursday";
			Days[5] = "Friday";
			Days[6] = "Saturday";
			currentDay = 0;
		}
		WeekDays(int dayNum){

			Days[0] = "Sunday";
			Days[1] = "Monday";
			Days[2] = "Tuesday";
			Days[3] = "Wednesday";
			Days[4] = "Thursday";
			Days[5] = "Friday";
			Days[6] = "Saturday";
			
			if(dayNum <= 6){
				currentDay = dayNum;
			}
			
			else{
				currentDay = dayNum % 7;
			}
		
		}
		//funct
		string getCurrentDay(){
			return Days[currentDay];
		}	
		
		string getNextDay(){
			if(currentDay == 6){
				return Days[0];
			}
			else{
				return Days[currentDay + 1];
			}
		}
		
		string getPreviousDay(){
			if(currentDay == 0){
				return Days[6];
			}
			else{
				return Days[currentDay - 1];
			}
		}

		void getNthDayFromToday(int n){
		    cout << "its going to be " << Days[(n + currentDay) % 7] <<" in  " << n << " Days.\n" << endl;
			
		}
}; 

int main(){

	WeekDays d1(8);

	cout << d1.getCurrentDay() << endl;
	cout << d1.getNextDay() << endl;
	cout << d1.getPreviousDay() << endl;
	d1.getNthDayFromToday(20);

}
