#pragma once
class Player
{
public:

	int m_health;
	virtual void Attack(const Player& otherPlayer) = 0;

protected:

	int m_attackPower;

};

