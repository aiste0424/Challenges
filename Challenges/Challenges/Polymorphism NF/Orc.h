#pragma once
#include "Player.h"

class Orc : public Player
{
public:

	Orc();
	virtual void Attack(const Player& otherPlayer);

private:

	enum MissedAttack
	{
		Missed = 1,
		Double
	};

	int m_health;
	int m_attackPower;
	int m_chanceMissed;
	int m_chanceDouble;
};

