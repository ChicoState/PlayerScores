#include "player.h"

Player(){};

Player(std::string aname, int ascore):
  name(aname), score(ascore)
  {}

std::string GetName(){
  return name;
}

int GetScore(){
  return score;
}
