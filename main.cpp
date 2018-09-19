#include <iostream>
#include <vector>
#include "players.h"

int main(int argc, char *argv[])
{
  //std::vector<std::string> names;
  //std::vector<int> scores;

  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      string name = argv[i];
      players.push_back(*new Player(name));
    }

    //Get player scores from user input
    //scores.resize(names.size());
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<"Score for "<<players[i].getName()<<": ";
      int score;
      std::cin >> score;
      players[i].setScore(score);
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout << players[i].getName() << " ";
      std::cout << players[i].getScore() << std::endl;
    }
  }
  else
  {
    std::cout<<"Usage: PlayerScores [players]\n"
             <<"\n\t[players] must specify one or more player names, "
             <<"each separated by space\n";
  }

  return 0;
}
