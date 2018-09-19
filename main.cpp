#include <iostream>
#include <vector>

class player{
   public:
      player();
      void add_player(std::string na, int sc);
      void print();
   private:
      std::string name;
      int score;

};

player::player(){
   score = 0;
   name = "";
}

void player::add_player(na, sc){
   name = na;
   score = sc;
}

void player::print(){
   std::cout << name << " " << score << std::endl;
}


int main(int argc, char *argv[])
{
  std::vector<player> play;

  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
  		//type in score for player 
	    int score;
            std::cout<<"Score for "<< play.name[i]<<": ";
	    std::cin >> score;
	    play.push_back(player::add_player(argv[i], score));
    }

    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<play.size(); i++)
    {
	   player[i].print();  
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
