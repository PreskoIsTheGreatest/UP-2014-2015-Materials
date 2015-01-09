#include <iostream>
#include <string.h>
#include <string>
#include <iomanip>
using namespace std;

void invertWithReferences(int& a, int& b)
{
	int x = a;
	a = b;
	b = x;
}

void invertWithPointers(int* a, int* b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

void InverseArray(int* a, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
	
	/*	int x = *(a + i);
		*(a + i) = *(a + size - i - 1);
		*(a + size - i - 1) = x;*/
		invertWithReferences(*(a + i), *(a + size - i - 1));
		//invertWithPointers(&*(a + i), &*(a + size - i - 1));
	
	}
}

void printArray(int* a, int size){
	for (int i = 0; i < size; i++){
		cout << *(a + i);
	}
}

void printMatrix(int a[][3], int width, int height)
{
	for (int i = 0; i < width; i++){
		for (int j = 0; j < height; j++){
			cout << *(*(a + i) + j);
		}
		cout << endl;
	}
}

bool checkIsIn(char* word, char* searchedWord, int sizeOfWord , int sizeOfSeachedword)
{
	bool isIn = true;
	while (*searchedWord){
		if (*word !=*searchedWord ){
			isIn = false;
			break;
		}
		*word++;
		*searchedWord++;
	}
	return isIn;
}

void changeArrays(int* arrayOne , int* arrayTwo,int size){
	for (int i = 0; i < size; i++){
		int x = *(arrayOne + i);
		*(arrayOne + i) = *(arrayTwo + i);
		*(arrayTwo + i) = x;
		//invertWithPointers(&*(arrayOne + i), &*(arrayTwo + i));
	}
}

void wrongInvertion(int a, int b)
{
	int x = a; 
	a = b; 
	b = x; 
}

int main()
{
	system("pause");
	return 0;
}
