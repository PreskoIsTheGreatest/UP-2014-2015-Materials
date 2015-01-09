#include <iostream>
using namespace std;


int matrix[7][7] = { { 0, 0, 0, 1, 0, 0, 0 },
{ 0, 0, 0, 1, 0, 0, 0 },
{ 0, 0, 1, 0, 0, 0, 0 },
{ 1, 1, 0, 0, 0, 1, 1 },
{ 0, 0, 0, 0, 1, 0, 0 },
{ 0, 0, 0, 1, 0, 0, 0 },
{ 0, 0, 0, 1, 0, 0, 0 }
};

void floodFill(int i, int j){
	if (matrix[i][j] == 0 || i < 7 && j < 7 || i >= 0 || j >= 0){
		matrix[i][j] = 1;
	}
	else{
		return;
	}
	if (i - 1 >= 0 && matrix[i - 1][j] != 1){
		floodFill(i - 1, j);
	}
	if (i + 1 <= 6 && matrix[i + 1][j] != 1){
		floodFill(i + 1, j);
	}
	if (j - 1 >= 0 && matrix[i][j - 1] != 1){
		floodFill(i, j - 1);
	}
	if (j + 1 <= 6 && matrix[i][j + 1] != 1){
		floodFill(i, j + 1);
	}
}
int main(){
	floodFill(3, 3);

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
