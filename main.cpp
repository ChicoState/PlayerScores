#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

class Player{
private:
  string _name = "";
  int _score = 0;
public:
  string GetName();
  int GetScore();
  void SetName(string);
  void SetScore(int);
};

string Player::GetName()
{
  return _name;
}

int Player::GetScore()
{
  return _score;
}

void Player::SetName(string name)
{
  _name = name;
}

void Player::SetScore(int score)
{
  _score = score;
}

int main(int argc, char *argv[])
{
  //std::vector<std::string> names;
  //std::vector<int> scores;
  std::vector<Player*> players;
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      //Player names.push_back(argv[i]);
      Player *tempPlayer = new Player();
      tempPlayer->SetName(argv[i]);
      players.push_back(tempPlayer);
    }

    //Get player scores from user input
    //scores.resize(names.size());
    //for(int i=0; i<players.size(); i++)
    for (auto item : players)
    {

      std::cout<<"Score for "<<item->GetName()<<": ";
      int score;
      std::cin>>score;
      item->SetScore(score);
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    //for(int i=0; i<names.size(); i++)
    for(auto item : players)
    {
      std::cout<<item->GetName()<<"  ";
      std::cout<<item->GetScore()<<std::endl;
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
