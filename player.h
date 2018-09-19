#include <iostream>
#pragma once

class Player{
  private:
    std::string name;
    int score;
  public:
    Player();
    Player(std::string a, int b);
    int GetScore();
    std::string GetName();
};

 /* end of include guard: Player */
