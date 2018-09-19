#include <iostream>
#ifndef Player
#define Player
class Player{
  private:
    std::string name;
    int score;
  public:
    Player();
    int GetScore();
    std::string GetName();
}


#endif /* end of include guard: Player */
