// Algorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#if 0
void BubbleSort();
void InitRand();
void InitArray();
void ShowArray();

const int ARRAY_SIZE = 5;
const int MAX_NUMBER = 99;
int ARRAY[ARRAY_SIZE];

int main()
{
	InitRand();
	InitArray();

	cout << "Init data is" << endl;
	ShowArray();
	cout << endl << endl;

	cout << "bubble sort is" << endl;
	BubbleSort();

	return 0;
}

void BubbleSort()
{
	int tmp;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = j < ARRAY_SIZE - 1; j > i; j++)
		{
			if (ARRAY[j] < ARRAY[j - 1])
			{
				tmp = ARRAY[j - 1];
				ARRAY[j] = ARRAY[j - 1];
				ARRAY[j - 1] = tmp;
			}
		}
		ShowArray();
		cout << "(" << i + 1 << "‰ñ–Ú‚Ì•ÏXŒ‹‰Ê)" << endl;
	}
}

void InitRand() {
	srand((unsigned int)time(NULL));
}

void initArray() {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		ARRAY[i] = rand() % MAX_NUMBER + 1;
	}
}

void showArray() {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << ARRAY[i] << ' ';
	}
}
#endif

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
