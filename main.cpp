#include <iostream>
#include <vector>

class Player
{
  public:
    Player(std::string);
    int get_score();
    void add_score(int);
    std::string get_name();

  private:
    std::string name;
    int score;

};

Player::Player(std::string n)
{
  name = n;
  score = 0;
}

void Player::add_score(int s)
{
  score = s;
}

int Player::get_score()
{
  return score;
}

std::string Player::get_name()
{
  return name;
}

int main(int argc, char *argv[])
{
  std::vector<Player> players;
  int num;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      players.push_back(Player(argv[i]));
    }

    //Get player scores from user input
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<"Score for "<<players[i].get_name()<<": ";
      std::cin>>num;
      players[i].add_score(num);
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<players[i].get_name()<<"  ";
      std::cout<<players[i].get_score()<<std::endl;
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
