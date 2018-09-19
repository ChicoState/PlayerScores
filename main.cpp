#include <iostream>
#include <vector>


class Player 
{
	private:
		std::string name;
		int score;

	public:
		Player();
	        void setname(std::string x) { name = x; };
		void setscore(int s) { score = s; };
		std::string getname (void) { return name;};
		int getscore(void) { return score;};
};	

int main(int argc, char *argv[])
{
  std::vector<Player> players;

  if( argc > 1 )
  {
    Player player1;
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      players.push_back(player1.setname(argv[i]));
      
    }

    //Get player scores from user input
   // scores.resize(names.size());
    std::string s;
    for(int i=0; i< players.size(); i++)
    {
      std::cout<<"Score for "<< players[i].getname() <<": ";
      std::cin>>s;
      players[i].setname(s); 
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      std::cout<<players[i].getname() <<"  ";
      std::cout<<players[i].getscore() <<std::endl;
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
