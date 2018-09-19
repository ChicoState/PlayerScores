#include <iostream>
#include <vector>

class Player
{
  
  public:
    Player (std::string, int);
    std::string name;
    int score;
};

Player::Player (std::string pName, int pScore)
{
  name = pName;
  score = pScore;
}

int main(int argc, char *argv[])
{
  std::vector<Player> player_score;
  //std::vector<std::string> names;
  //std::vector<int> scores;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player temp (argv[i], 0);
      player_score.push_back(temp);
    }

    //Get player scores from user input
    //scores.resize(names.size());
    for(int i=0; i<player_score.size(); i++)
    {
      std::cout<<"Score for "<<player_score[i].name<<": ";
      std::cin>>player_score[i].score;
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<player_score.size(); i++)
    {
      std::cout<<player_score[i].name<<"  ";
      std::cout<<player_score[i].score<<std::endl;
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
