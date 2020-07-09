#include "tic_tac_toe.h"


int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
	std::string repeat;

	do //do while for the entire program
	{
	
		do //do while for initializing the player
		{
		std::cout<<"Enter X or O: ";
		std::cin>>player;

		if(player != "X" && player != "O")
		{
			std::cout<<"That was not an X or an O."<<"\n";
		}

		}while(player != "X" && player != "O");

		tic_tac_toe.start_game(player);

		do //do while for playing the game
		{
			int position;
			std::cout<<"Enter position from 1 to 9: ";
			std::cin>>position;
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();


		}while (tic_tac_toe.game_over() == false);


		std::cout<<"Game Over"<<"\n";
		std::cout<<"Winner: "<<tic_tac_toe.get_winner()<<"\n";


		//condition that asks user if program repeats or not
		std::cout<<"Enter y or Y to play another game: ";
		std::cin>>repeat;
		std::cout<<"\n";

	}while (repeat == "y" || repeat == "Y");
	return 0;
}