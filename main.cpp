#include <iostream>
#include <vector>

class Player
{
  std::string name;
  int score;
};

int main(int argc, char *argv[])
{
  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player x = {argv[i],0};
      players.push_back(x);
    }

    //Get player scores from user input
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<"Score for "<<players[i].name<<": ";
      std::cin>>players[i].score;
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<players[i].name<<"  ";
      std::cout<<players[i].score<<std::endl;
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
