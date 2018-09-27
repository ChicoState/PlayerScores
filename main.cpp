#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

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
  vector<Player*> players;
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player *tempPlayer = new Player();
      tempPlayer->SetName(argv[i]);
      players.push_back(tempPlayer);
    }

    for (auto item : players)
    {

      cout<<"Score for "<<item->GetName()<<": ";
      int score;
      cin>>score;
      item->SetScore(score);
    }

    //Print summary
    cout<<"### SCOREBOARD ###\n";
    for(auto item : players)
    {
      cout<<item->GetName()<<"  ";
      cout<<item->GetScore()<<endl;
    }
  }
  else
  {
    cout<<"Usage: PlayerScores [players]\n"
             <<"\n\t[players] must specify one or more player names, "
             <<"each separated by space\n";
  }

  return 0;
}
