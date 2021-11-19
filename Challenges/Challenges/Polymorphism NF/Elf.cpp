#include "Elf.h"
#include <time.h>
#include <stdlib.h>

Elf::Elf()
{
	m_health = 60;
	m_attackPower = 15;
	m_chanceHeal = 0;
}

void Elf::Attack(const Player& otherPlayer)
{
	srand(time(NULL));
	m_chanceHeal = rand() % 100 + 1;
	if (m_chanceHeal <= 30)
	{
		m_attackPower = m_attackPower - 5;
		if (m_health >= 50)
		{
			m_health = 60;
		}
		else
		{
			m_health = m_health + 10;
		}
	}
}
