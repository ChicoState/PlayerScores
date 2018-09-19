#include <iostream>
#include <vector>

class Player {
  public:
    Player();
    Player(std::string name);
    ~Player();
    void setScore(int score);
    int getScore();
    void setName(std::string name);
    std::string getName();
  private:
    std::string name_;
    int score_;

};


int main(int argc, char *argv[])
{
  std::vector<std::string> names;
  std::vector<int> scores;
  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player temp(argv[i]);
      players.push_back(temp);
      names.push_back(argv[i]);
    }

    //Get player scores from user input
    for(unsigned int i = 0; i < players.size(); i++) {
      int tempScore;
      std::cout << "Score for " << players[i].getName() <<": ";
      std::cin >> tempScore;
      players[i].setScore(tempScore);
    }
    /*scores.resize(names.size());
    for(int i=0; i<names.size(); i++)
    {
      std::cout<<"Score for "<<names[i]<<": ";
      std::cin>>scores[i];
    }*/

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(unsigned int i = 0; i < players.size(); i++) {
      std::cout<<players[i].getName()<<"  ";
      std::cout<<players[i].getScore()<<std::endl;
    }
    /*for(int i=0; i<names.size(); i++)
    {
      std::cout<<names[i]<<"  ";
      std::cout<<scores[i]<<std::endl;
    }*/
  }
  else
  {
    std::cout<<"Usage: PlayerScores [players]\n"
             <<"\n\t[players] must specify one or more player names, "
             <<"each separated by space\n";
  }

  return 0;
}

Player::Player() {
  name_ = "";
  score_ = 0;
}

Player::Player(std::string name) {
  name_ = name;
  score_ = 0;
}

Player::~Player() {
  //Does nothing
}

void Player::setScore(int score) {
  score_ = score;
  return;
}

int Player::getScore() {
  return score_;
}

void Player::setName(std::string name) {
  name_ = name;
  return;
}

std::string Player::getName() {
  return name_;
}
