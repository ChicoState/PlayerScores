#include <iostream>
#include <vector>

class Player
{
public:
  Player(std::string val2);
  std::string getName(){return name;};
  int getScore(){return score;};
  void setName(std::string val){name = val;};
  void setScore(int val){score = val;};
private:
  std::string name;
  int score;

};

Player::Player(std::string val2)
{
  setName(val2);
}

int main(int argc, char *argv[])
{
  std::vector<Player> players;
  // std::vector<std::string> names;
  // std::vector<int> scores;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player temp_player(argv[i]);
      players.push_back(temp_player);
      //names.push_back(argv[i]);
    }

    //Get player scores from user input
    //scores.resize(names.size());
    for(int i=0; i< players.size(); i++)
    {
      std::cout<<"Score for "<<players[i].getName()<<": ";
      int temp_val;
      std::cin>>temp_val;
      players[i].setScore(temp_val);

    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<players[i].getName()<<"  ";
      std::cout<<players[i].getScore()<<std::endl;
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
