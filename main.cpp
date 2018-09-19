#include <iostream>
#include <vector>

struct temp{
std::vector<std::string> names;
  std::vector<int> scores;

  //std::vector<std::string < int > > names;
};

int main(int argc, char *argv[])
{

temp t;
//t.names.push_back("ASDASDADASD");
//std::cout<<t.names[0];

//  std::vector<std::string> names;
 // std::vector<int> scores;
 
  if( argc > 1 )
  {
    //Collect player names from command-line arguments
    for(int i=1; i<argc; i++)
    {
      t.names.push_back(argv[i]);
    }
    
    //Get player scores from user input
    t.scores.resize(t.names.size());
    for(int i=0; i<t.names.size(); i++)
    {
      std::cout<<"Score for "<<t.names[i]<<": ";
      std::cin>>t.scores[i];
    }
    
    //Print summary
    std::cout<<"### SCOREBOARD ###\n";
    for(int i=0; i<t.names.size(); i++)
    {
      std::cout<<t.names[i]<<"  ";
      std::cout<<t.scores[i]<<std::endl;
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
