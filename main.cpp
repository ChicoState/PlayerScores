#include <iostream>
#include <vector>

struct Player
{
  std::string name;
  int score;

};

int main(int argc, char *argv[])
{
  //std::vector<std::string> names;
  //std::vector<int> scores;
  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Player* temp = new Player;
      temp->name = argv[i];
      temp->score = 0;

      players.push_back(*temp);
      delete temp;
    }

    //Get player scores from user input
    //scores.resize(names.size());

    for(int i=0; i < players.size(); i++)
    {
      //std::cout<<"Score for "<<names[i]<<": ";
      //std::cin>>scores[i];

      std::cout<<"Score for " << players[i].name << ": ";
      std::cin >> players[i].score;

    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    //for(int i=0; i<names.size(); i++)
    for(int i = 0; i < players.size(); i++)
    {
      //std::cout<<names[i]<<"  ";
      //std::cout<<scores[i]<<std::endl;
      std::cout<<players[i].name << "  ";
      std::cout<<players[i].score<<std::endl;
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
