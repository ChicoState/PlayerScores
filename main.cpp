#include <iostream>
#include <vector>

class Player {
    private:
    
        std::string name;
        int score;
    
    public:

        std::string get_name(){ return name; };
        int get_score(){ return score; };
        void set_score(int x){ score = x; };
        void set_name(std::string n){ name = n; };
};

int main(int argc, char *argv[])
{
  std::vector<Player> players;

  if( argc > 1 )
  {
    //Collect player players from command-line arguments
    for(int i=1; i<argc; i++) 
    {
      Player p;
      p.set_name(argv[i]);
      players.push_back(p);
    }

    for(int i=0; i<players.size(); i++)
    {
      int x = 0;
      std::cout<<"Score for "<<players[i].get_name()<<": ";
      std::cin>>x;

      players[i].set_score(x);
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
