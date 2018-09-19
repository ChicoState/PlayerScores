#include <iostream>
#include <vector>


struct Player {
  std::string names;
  int scores;
};

int main(int argc, char *argv[])
{
  // std::vector<std::string> names;
  // std::vector<int> scores;
  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      std::string temp = argv[i];
      players.push_back(Player({temp, 0}));
    }

    //Get player scores from user input
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<"Score for "<<players[i].names<<": ";
      std::cin>>players[i].scores;
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<players[i].names<<"  ";
      std::cout<<players[i].scores<<std::endl;
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
