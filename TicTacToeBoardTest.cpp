/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} 
		virtual ~TicTacToeBoardTest(){} 
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, flipO)
{
	TicTacToeBoard tictac;
	Piece temp = tictac.toggleTurn();
	ASSERT_EQ(temp, 'X');
}
TEST(TicTacToeBoardTest, flipX)
{
	TicTacToeBoard tictac;
	Piece temp = tictac.toggleTurn();
	ASSERT_EQ(temp, 'O');
}

TEST(TicTacToeBoardTest, getPiece)
{
	TicTacToeBoard tictac;
	Piece temp = tictac.getPiece(1,1);
	ASSERT_TRUE(temp);
}

