#include <iostream>
#include <vector>

class Player{
	std::string playerName;
	int playerScore;
	public:
	void setName(std::string name);
	void setScore(int score);
	std::string name(){return playerName;};
	int score(){return playerScore;};
};

void Player::setName(std::string name){
	playerName = name;
}

void Player::setScore(int score){
	playerScore = score;	
}

int main(int argc, char *argv[])
{
  Player players[argc];
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player guy;
      guy.setName(argv[i]);
      players[i-1] = guy;
    }

    //Get player scores from user input
    for(int i=0; i<argc - 1; i++)
    {
      int n = 0;
      std::cout<<"Score for "<<players[i].name()<<": ";
      std::cin>>n;
      players[i].setScore(n);
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0;i < argc - 1; i++)
    {
      std::cout<<players[i].name()<<"  ";
      std::cout<<players[i].score()<<std::endl;
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

