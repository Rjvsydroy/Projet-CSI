#ifndef REWARD_H
#define REWARD_H

class Reward
{
	int nReward;
	public:
		// just an example of friend and operator+ function
		Reward(int nReward){
			this->nReward=nReward;
		}
		int getReward(){
			return this->nReward;
		}
	friend Reward operator+(const Reward &r1, const Reward &r2);

};

#endif
