#include <iostream>
using namespace std;

class FootballPlayer{
	
	string playerName, position;
	int goalCount;
	
	public:
		
		FootballPlayer(){
		
			playerName = "Unknown Player";
			position = "Benchwarmer";
			goalCount = 0;
		}
		
		FootballPlayer(const FootballPlayer &p){
			
			playerName = p.playerName;
			position = p.position;
			goalCount = p.goalCount;
		}	
				
		FootballPlayer(string playerName, string position = "Midfielder", int goalCount = 10){
			
			this->playerName = playerName;
			this->position = position;
			this->goalCount = goalCount;
		}
	
		void score(int goal){
			goalCount += goal;
		}
		
		void displayPlayerInfo(){
			cout << "Player Name: " << playerName << endl << "Position: " << position << endl << "Goals: " << goalCount << endl << "Ready to win the Ballon d'Or!\n" << endl;
		}

};

int main(){
    FootballPlayer f1;
    FootballPlayer f2("Lionel Messi", "Forward", 820);
    FootballPlayer f3 = f2;
    FootballPlayer f4("Kevin De Bruyne");

    f1.score(2);

    f1.displayPlayerInfo();
    f3.displayPlayerInfo();
    f4.displayPlayerInfo();

}
