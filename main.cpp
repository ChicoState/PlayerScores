#include <iostream>
#include <vector>

class Player
{
 private:
  std::string name;
  int score;

 public:
  Player()
  {
    name ="";
    score = 0;
  }

  void setName(std::string name)
  {
    this->name = name;
  }
  void setScore(int score)
  {
    this->score = score;
  }
  std::string getName()
  {
    return name;
  }
  int getScore()
  {
    return score;
  }
};

int main(int argc, char *argv[])
{
  std::vector<Player> players;
  Player temp;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      temp.setName(argv[i]);
      players.push_back(temp);
    }

    //Get player scores from user input
    int tempScore;
    for(unsigned int i=0; i < players.size(); i++)
    {
      std::cout << "Score for " << players[i].getName() << ": ";
      std::cin >> tempScore;
      players[i].setScore(tempScore);
    }

    //Print summary
    std::cout << "### SCOREBOARD ###\n";
    for(unsigned int i=0; i < players.size(); i++)
    {
      std::cout << players[i].getName() << "  ";
      std::cout << players[i].getScore() << std::endl;
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
