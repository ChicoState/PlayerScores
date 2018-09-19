#include <iostream>
#include <vector>

class Player
{
  public:
    Player(){};
    Player(std::string name);
    int score;
    std::string m_name;
  private:
};

Player::Player(std::string name)
{
  m_name = name;
}

int main(int argc, char *argv[])
{
  //std::vector<std::string> names;
  //std::vector<int> scores;
  std::vector<Player*> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      //names.push_back(argv[i]);
      Player *temp = new Player(argv[i]);
      players.push_back(temp);
    }

    //Get player scores from user input
    //scores.resize(names.size());
    for(int i=0; i<players.size(); i++)
    {
      int score = 0;
      std::cout<<"Score for "<<players[i]->m_name<<": ";
      std::cin>>score;
      players[i]->score = score;
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      //std::cout<<names[i]<<"  ";
      //std::cout<<scores[i]<<std::endl;
      std::cout<<players[i]->m_name<<" ";
      std::cout<<players[i]->score<<std::endl;
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
