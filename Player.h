#pragma once
#include <string>

class Player
{
private:
	std::string m_name;
	int m_score;
    static const int DEFAULT_SCORE = 0;
public:
	Player();
	~Player();
	void setName(std::string name);
	std::string getName();
	void setScore(int score);
	int getScore();
};

