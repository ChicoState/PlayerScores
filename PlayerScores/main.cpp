#include <iostream>
#include <vector>
class Player{
        public:
        void add_score(int s){
		    score = s;
		};
		void get_name(){
		    std::cout<<name<<": ";
        };
	    void print(){
		    std::cout<<name<<" "<<score<<std::endl;
		};
        Player(std::string n){
		    name = n;
		    score = 0;
        };

    private:
        std::string name;
        int score;
};

int main(int argc, char *argv[])
{
  
  std::vector<Player> players;
   int score;
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
	Player a = Player(argv[i]);
      players.push_back(a);
    }

    //Get player scores from user input

    for(int i=0; i<players.size(); i++)
    {
      std::cout<<"Score for ";
	    players[i].get_name();
      std::cin>>score;
	players[i].add_score(score);
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<players.size(); i++)
    {
      players[i].print();
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
