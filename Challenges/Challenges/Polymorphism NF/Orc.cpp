#include "Orc.h"
#include <time.h>
#include <stdlib.h>
Orc::Orc()
{
	m_health = 120;
	m_attackPower = 10;
	m_chanceMissed = 0;
	m_chanceDouble = 0;
}

void Orc::Attack(const Player& otherPlayer)
{
	//20% chance of missing an attack == 5 numbers and 1 picked randomly.
	srand(time(NULL));
	m_chanceMissed = rand() % 5 + 1;
	m_chanceDouble = rand() % 100 + 1;
	if (m_chanceMissed == MissedAttack::Missed)
	{
		m_attackPower = 0;
	}
	if (m_chanceMissed != MissedAttack::Missed && m_chanceDouble <= 30)
	{
		m_attackPower = m_attackPower * 2;
		m_health = m_health - m_attackPower;
	}
}
