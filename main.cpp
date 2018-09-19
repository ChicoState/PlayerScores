#include <iostream>
#include <vector>
#include "player.h"

int main(int argc, char *argv[])
{
  std::vector<std::string> names;
  std::vector<int> scores;
  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      names.push_back(argv[i]);
    }

    //Get player scores from user input
    scores.resize(names.size());
    for(int i=0; i<names.size(); i++)
    {
      std::cout<<"Score for "<<names[i]<<": ";
      std::cin>>scores[i];
    }

    for(int i=0; i<names.size(); i++)
    {
      players.push_back(Player(names[i], scores[i]));
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<names.size(); i++)
    {
      std::cout<<players[i].GetName()<<"  ";
      std::cout<<players[i].GetScore()<<std::endl;
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
