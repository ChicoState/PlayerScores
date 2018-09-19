#include "player.h"

Player::Player(){};

Player::Player(std::string aname, int ascore):
  name(aname), score(ascore)
  {}

std::string Player::GetName(){
  return name;
}

int Player::GetScore(){
  return score;
}
