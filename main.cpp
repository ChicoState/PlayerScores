#include <iostream>
#include <vector>

//Class used to contain players and their scores
class Players
{
  public:
    std::vector<std::string> names;
    std::vector<int> scores;
};

int main(int argc, char *argv[])
{
  Players my_players;
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      my_players.names.push_back(argv[i]);
    }

    //Get player scores from user input
    my_players.scores.resize(my_players.names.size());
    for(int i=0; i<my_players.names.size(); i++)
    {
      std::cout<<"Score for "<<my_players.names[i]<<": ";
      std::cin>>my_players.scores[i];
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<my_players.names.size(); i++)
    {
      std::cout<<my_players.names[i]<<"  ";
      std::cout<<my_players.scores[i]<<std::endl;
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
