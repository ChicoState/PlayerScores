#include <iostream>
#include <vector>
#include <string>
#include "Player.h"

int main(int argc, char *argv[])
{
	std::vector <Player> players;
	Player player;

	if (argc > 1)
	{
		//Collect player names from command-line arguments
		std::string playerName;
		for (int i = 1; i < argc; i++)
		{
			playerName = argv[i];
			player.setName(playerName);
			players.push_back(player);
		}

		//Get player scores from user input
		int score = 0;
		for (size_t i = 0; i < players.size(); i++)
		{
			std::cout << "Score for " << players[i].getName() << ": ";
			std::cin >> score;
			players[i].setScore(score);
		}

		//Print summary
		std::cout << "### SCOREBOARD ###\n";
		for (size_t i = 0; i < players.size(); i++)
		{
			std::cout << players[i].getName() << "  ";
			std::cout << players[i].getScore() << std::endl;
		}
	}
	else
	{
		std::cout << "Usage: PlayerScores [players]\n"
			<< "\n\t[players] must specify one or more player names, "
			<< "each separated by space\n";
	}
	return 0;
}