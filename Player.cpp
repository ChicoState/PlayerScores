#include "Player.h"

Player::Player()
	: m_score(DEFAULT_SCORE)
{
}

Player::~Player()
{
}

std::string Player::getName()
{
	return m_name;
}

void Player::setName(std::string name)
{
	m_name = name;
}

int Player::getScore()
{
	return m_score;
}

void Player::setScore(int score)
{
	m_score = score;
}