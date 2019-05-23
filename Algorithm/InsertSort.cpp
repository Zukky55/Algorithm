#if 0
#include <iostream>
#include <random>
using namespace std;

const int ARRAY_SIZE = 9;
const int minVal = 0;
const int maxVal = 100;


//int a[ARRAY_SIZE];
int a[ARRAY_SIZE] = { 3,2,6,9,8,1,5,7,4 };


void DisplayResult(int result[])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << result[i] << endl;
	}
}

void GenerateRandomArray(int material[])
{
	mt19937_64 mt64(0);
	uniform_int_distribution<int> gen_rand_uni_int(minVal, maxVal);

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		material[i] = gen_rand_uni_int(mt64);
	}
}

int main()
{
	//GenerateRandomArray(a);

	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		for (int j = i; j > 0; --j)
		{
			if (a[j - 1] < a[j])
			{
				break;
			}
			swap(a[j - 1], a[j]);
		}
	}
	DisplayResult(a);
}
#endif