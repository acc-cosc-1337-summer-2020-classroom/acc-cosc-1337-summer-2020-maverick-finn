#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify game ends when board is full")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	tic_tac_toe.mark_board(1);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9);
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8);
	//true after all 9 slots are filled, even if out of order
	REQUIRE(tic_tac_toe.game_over() == true);


	REQUIRE(tic_tac_toe.get_winner() == "C");
	
}




TEST_CASE("Test first player set to X")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");

	REQUIRE(tic_tac_toe.get_player() == "X");
}

TEST_CASE("Test first player set to O")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("O");

	REQUIRE(tic_tac_toe.get_player() == "O");
}

TEST_CASE("Test win by first column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by second column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(2); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by third column")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(3); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by first row")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(7); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by second row")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(4); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win by third row")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(1); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(8); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(2); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win diagonally from top left")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(1); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(9); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}

TEST_CASE("Test win diagonally from bottomm left")
{
	TicTacToe tic_tac_toe;
	tic_tac_toe.start_game("X");
	tic_tac_toe.mark_board(7); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(4); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(5); //X
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(6); //O
	REQUIRE(tic_tac_toe.game_over() == false);
	tic_tac_toe.mark_board(3); //X, should win game

	REQUIRE(tic_tac_toe.game_over() == true);
}





