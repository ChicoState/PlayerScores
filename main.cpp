/**Auth: Ryan Saitta**/

#include <iostream>
#include <vector>

class Player{
	private: 
		std::string name;
		int score;
	public:
		Player(string in_name):name(in_name);
		void addScore(int player){
			std::cout<<"Score for "<< name<<": ";
			std::cin>>score;}
    }
		
};

int main(int argc, char *argv[])
{
	std::vector<Player> Players;
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      Players.push_back(Player(argv[i]));
    }

    //Get player scores from user input
    for(int i=0; i<argc-1; i++)
    {
      Players[i].addScore();
    }

    //Print summary
	std::cout<<"### SCOREBOARD ###\n";
		for(int i=0; i<names.size(); i++)
		{
			std::cout<<names[i]<<"  ";
			std::cout<<scores[i]<<std::endl;
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
