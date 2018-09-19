#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    struct data {
    std::vector<std::string> names;
    std::vector<int> scores;
    } players;
  //std::vector<std::string> names;
  //std::vector<int> scores;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      players.names.push_back(argv[i]);
    }

    //Get player scores from user input
    players.scores.resize(players.names.size());
    for(int i=0; i<players.names.size(); i++)
    {
      std::cout<<"Score for "<<players.names[i]<<": ";
      std::cin>>players.scores[i];
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.names.size(); i++)
    {
      std::cout<<players.names[i]<<"  ";
      std::cout<<players.scores[i]<<std::endl;
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
