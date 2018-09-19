#include <iostream>
#include <vector>

class Player {
public:
	void addName(std::string);
	void addScore(int);
	std::string getName();
	int getScore();
private:
	int score;
	std::string name;
};

void Player::addName(std::string Name) {
	name = Name;
}

void Player::addScore(int Score) {
	score = Score;
}

std::string Player::getName() {
	return name;
}

int Player::getScore() {
	return score;
}

int main(int argc, char *argv[])
{
  std::vector<Player> allPlayers;
  if( argc > 1 )
  {
	

    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
	  Player newPlayer;
	  newPlayer.addName(argv[i]);
	  allPlayers.push_back(newPlayer);
	  
    }

    //Get player scores from user input
    int score;
    for(int i=0; i<allPlayers.size(); i++)
    {
      std::cout<<"Score for "<<allPlayers[i].getName()<<": ";
      std::cin>>score;
	  allPlayers[i].addScore(score);
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<allPlayers.size(); i++)
    {
      std::cout<<allPlayers[i].getName()<<"  ";
      std::cout<<allPlayers[i].getScore()<<std::endl;
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
