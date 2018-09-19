#include "player.h"

Player(std::std::string name, int score):
  name(name), score(score)
  {}

std::std::string GetName(){
  return name;
}

int GetScore(){
  return score;
}
