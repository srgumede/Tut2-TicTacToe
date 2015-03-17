/*
TicTac Toe Game
Class members definitions

*/

#include "TicTac.h"

// Constructor
TicTac::TicTac()
{

	board[0][0] = '1'; board[0][1] = '2'; board[0][2] = '3';
	board[1][0] = '4'; board[1][1] = '5'; board[1][2] = '6';
	board[2][0] = '7'; board[2][1] = '8'; board[2][2] = '9';

}
// Game rules and instructions
void TicTac::gmInstruct()
{

	cout << endl << " The board is numbered as follows." << endl;
	disBoard();

}
// Display the board
void TicTac::disBoard()
{
	cout << endl;
	cout << "         |     |     " << endl;
	cout << "      " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << endl;
	cout << "    -----+-----+-----" << endl;
	cout << "         |     |     " << endl;
	cout << "      " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << endl;
	cout << "    -----+-----+-----" << endl;
	cout << "         |     |     " << endl;
	cout << "      " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << endl;
}

// Check Wins
bool TicTac::checkWin()
{

	if (board[0][0] == board[0][1] && board[0][0] == board[0][2]) { return true; }			// row1
	else if (board[1][0] == board[1][1] && board[1][0] == board[1][2]) { return true; }		// row2
	else if (board[2][0] == board[2][1] && board[2][0] == board[2][2]) { return true; }		// row3
	else if (board[0][0] == board[1][0] && board[0][0] == board[2][0]) { return true; }		// column1
	else if (board[0][1] == board[1][1] && board[0][1] == board[2][1]) { return true; }		// column2
	else if (board[0][2] == board[1][2] && board[0][2] == board[2][2]) { return true; }		// column3
	else if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) { return true; }		// right left diagonal
	else if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) { return true; }		// left right diagonal
	else { return false; }

}

// Check if Draw
bool TicTac::checkDraw()
{
	int drw = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == 'X' || board[i][j] == 'O') { drw += 1; }
		}
	}

	if (drw == 9) { return true; }
	else { return false; }
}

// Resetting the board
void TicTac::RESTART()
{

	board[0][0] = '1'; board[0][1] = '2'; board[0][2] = '3';
	board[1][0] = '4'; board[1][1] = '5'; board[1][2] = '6';
	board[2][0] = '7'; board[2][1] = '8'; board[2][2] = '9';

}

// Player one's play
void TicTac::player1(int pos)
{
	if (checkWin() != true)
	{
		switch (pos)
		{
		case 1:{
			if (move(0, 0) == true) { board[0][0] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl; }
			break;
		}
		case 2:{
			if (move(0, 1) == true) { board[0][1] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 3:{
			if (move(0, 2) == true) { board[0][2] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 4:{
			if (move(1, 0) == true) { board[1][0] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 5:{
			if (move(1, 1) == true) { board[1][1] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 6:{
			if (move(1, 2) == true) { board[1][2] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 7:{
			if (move(2, 0) == true) { board[2][0] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 8:{
			if (move(2, 1) == true) { board[2][1] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 9:{
			if (move(2, 2) == true) { board[2][2] = 'X'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		default:{
			cout << endl << " Invalid Move!!!" << endl;
		}
		}
	}
}

// Player Two's play
void TicTac::player2(int pos)
{
	if (checkWin() != true)
	{
		switch (pos)
		{
		case 1:{
			if (move(0, 0) == true) { board[0][0] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 2:{
			if (move(0, 1) == true) { board[0][1] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 3:{
			if (move(0, 2) == true) { board[0][2] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 4:{
			if (move(1, 0) == true) { board[1][0] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 5:{
			if (move(1, 1) == true) { board[1][1] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 6:{
			if (move(1, 2) == true) { board[1][2] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 7:{
			if (move(2, 0) == true) { board[2][0] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 8:{
			if (move(2, 1) == true) { board[2][1] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		case 9:{
			if (move(2, 2) == true) { board[2][2] = 'O'; }
			else { cout << endl << " Invalid Play!!" << endl;; }
			break;
		}
		default:{
			cout << endl << " Invalid Move!!!" << endl;
		}
		}
	}
}

// Moving to Valid Position
bool TicTac::move(int row, int col)
{
	if (board[row][col] == 'X' || board[row][col] == 'O') { return false; }
	else { return true; }
}