#include <iostream>
#include <vector>

class Player
{
  public:

  Player(std::string name) : name(name), score(0) {}

  std::string name;
  int score;
};

int main(int argc, char *argv[])
{
  std::vector<std::string> names;
  std::vector<int> scores;

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

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<names.size(); i++)
    {
      std::cout<<names[i]<<"  ";
      std::cout<<scores[i]<<std::endl;
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
