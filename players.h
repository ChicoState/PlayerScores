#include<iostream>
#include<string>

using namespace std;

class Player {
  public:
      Player(string name) { m_name = name; } 
      //void setName(string name) { m_name = name; }
      string getName() { return m_name; }
      void setScore(int score) { m_score = score; }
      int getScore() { return m_score; }
  
  private:
      string m_name;
      int m_score;
};

