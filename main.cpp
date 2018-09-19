// test_main.cpp //

#include <iostream>
#include <vector>

class Player {
  public:
    void setName(std::string);
    void setScore(int);

    void printName();
    void printScore();

  private:
    std::string m_name;
    int m_score;
};
void Player::setName(std::string name) {
  m_name = name;
}
void Player::setScore(int score) {
  m_score = score;
}
void Player::printName(){std::cout<< m_name;}
void Player::printScore(){std::cout<< m_score;}

int main(int argc, char *argv[])
{
  std::vector<Player> Players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player p;
      p.setName(argv[i]);
      Players.push_back(p);
    }
    //Get player scores from user input
    int score;
    for(int i=0; i<Players.size(); i++)
    {
      std::cout<<"Score for ";
      Players[i].printName();
      std::cout<<": ";
      std::cin>>score;
      Players[i].setScore(score);
    }
    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<Players.size(); i++)
    {
      Players[i].printName();
      std::cout<< " ";
      Players[i].printScore();
      std::cout<<std::endl;
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
