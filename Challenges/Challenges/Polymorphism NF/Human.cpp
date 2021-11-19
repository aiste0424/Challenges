#include "Human.h"
#include <time.h>
#include <stdlib.h>

Human::Human()
{
	m_health = 90;
	m_attackPower = 10;
	m_chanceAdditional = 0;
}

void Human::Attack(const Player& otherPlayer)
{
	srand(time(NULL));
	m_chanceAdditional = rand() % 100 + 1;
	if (m_chanceAdditional >= 50)
	{
		m_attackPower = m_attackPower * 1.5;
	}
}
