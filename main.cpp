#include <iostream>
#include <vector>
using namespace std;

class Player
{
 public:
  string name;
  int score;
};

int main(int argc, char *argv[])
{


  vector<Player> players_vector;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
       Player myPlayer;
       string name = argv[i];
       myPlayer.name = name;
       players_vector.push_back(myPlayer);
    }

    //Get player scores from user input
    //scores.resize(names.size());
    for(int i=0; i<players_vector.size(); i++)
    {
      int score;
      cout<<"Score for "<<players_vector[i].name<<": ";
      cin>>score;
      players_vector[i].score = score;
    }

    //Print summary
    cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players_vector.size(); i++)
    {
      cout<<players_vector[i].name<<"  ";
      cout<<players_vector[i].score<<endl;
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
