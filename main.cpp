#include <iostream>
#include <vector>

using std::string;
using std::vector;

class Player {
    public:
            string name;
            int scores;
            Player(string n, int s);
};

Player::Player(string n, int s){
    name = n;
    scores = s;
}


int main(int argc, char *argv[])
{
  vector<Player> players;


  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      players.push_back(Player(argv[i],0));
    }

    //Get player scores from user input
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<"Score for "<<players[i].name<<": ";
      std::cin>>players[i].scores;
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<players[i].name<<"  ";
      std::cout<<players[i].scores<<std::endl;
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
