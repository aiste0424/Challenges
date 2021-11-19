#pragma once
#include "Player.h"

class Elf : public Player
{
public:
	
	Elf();
	virtual void Attack(const Player& otherPlayer);

private:

	int m_health;
	int m_attackPower;
	int m_chanceHeal;
};

