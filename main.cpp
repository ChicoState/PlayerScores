#include <iostream>
#include <vector>


class Player{
  public:
    Player(std::string n, int s): name(n), score(s){};
    std::string get_name();
    int get_score();
    void set_score(int s);
    
  private:
    std::string name;
    int score;
};

std::string Player::get_name(){
  return name;
}

int Player::get_score(){
  return score;
}

void Player::set_score(int s){
  score = s;
}

int main(int argc, char *argv[])
{
  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player p(argv[i], 0);
      players.push_back(p);
    }
    
    //Get player scores from user input
    int input = 0;
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<"Score for "<<players[i].get_name()<<": ";
      std::cin>>input;
      players[i].set_score(input);
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