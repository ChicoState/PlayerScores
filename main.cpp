#include <iostream>
#include <vector>

class player {
  public:  
  std::vector<std::string> names;
  std::vector<int> scores;
  void setValues(vector<int> x, vector<string> y)
};

void setValues(vector<int> x, vector<string> y){
  scores = x;
  names = y;
}

int main(int argc, char *argv[])
{
  player player;
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      player.names[i].push_back(argv[i]);
    }

    //Get player scores from user input
    scores.resize(player.names.size());
    for(int i=0; i<player.names.size(); i++)
    {
      std::cout<<"Score for "<<player.names[i]<<": ";
      std::cin>>player.scores[i];
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<player.names[i].size(); i++)
    {
      std::cout<<player.names[i]<<"  ";
      std::cout<<player.scores[i]<<std::endl;
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
