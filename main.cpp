#include <iostream>
#include <vector>

class Player {
  public:
    std::string name;
    std::string score;

    void setName(std::string nameInput) {
      name = nameInput;
    }

    void setScore(std::string scoreInput) {
      score = scoreInput;
    }

    std::string getName() {
      return name;
    }

    std::string getScore() {
      return score;
    }

};

int main(int argc, char *argv[])
{
  Player player1;

  std::vector<Player> players;
  //std::vector<int> scores;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      //names.push_back(argv[i]);
      player1.setName(argv[i]);
      players.push_back(player1);
    }

    //Get player scores from user input
    //scores.resize(names.size());
    for(int i=0; i<players.size(); i++)
    {
      std::string temp;
      std::cout<<"Score for "<< /*names[i]*/ players[i].getName() <<": ";
      std::cin>> temp;
      players[i].setScore(temp);
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout<</*names[i]*/ players[i].getName()<<"  ";
      std::cout<</*scores[i]*/ players[i].getScore()<<std::endl;
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
