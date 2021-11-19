#pragma once
#include "Player.h"

class Human : public Player
{
public:

	Human();
	virtual void Attack(const Player& otherPlayer);

private:

	int m_health;
	int m_attackPower;
	int m_chanceAdditional;
};

