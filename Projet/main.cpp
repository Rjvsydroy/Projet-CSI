#include <iostream>
#include <string>
#include "player.h"
#include "Reward.h"
using namespace std;

int main(){
	Reward r1(12);
	Reward r2(13);
	Reward rSomme = r1+r2;
	cout<<rSomme.getReward();
	
	
	return 0;
	
}

