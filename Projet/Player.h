#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

class Player
{
	string name;
	bool active;
	int nRubies;
	
	
	public:
		Player(){
			this->name ="Tom";
			this->active = false;
			this->nRubies = 0;
		}
		void setName(string);
		string getName();
		void setActive(bool);
		bool isActive();
		int getNrubies() const;
		//void addReward(const Reward&);
		void setDisplaymode(bool endOfGame);
};

#endif
