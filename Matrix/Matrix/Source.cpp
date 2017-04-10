#include <iostream>
using namespace std;

int main()
{
	int* board = new int[100];
	int** temp = new int*[10];	//a pointer to a pointer! will point to the beginning spot of each row
	int ROW = 10;
	for(int r = 0; r < ROW; r++)
	{
		//temp[0] is the address of pointer board[0]
		temp[r] = &board[r*ROW];
	}
	//temp[r][c]
	temp[1][1] = 6;
	
	delete[] temp;
	delete[] board;


	system("pause");
	return 0;

}