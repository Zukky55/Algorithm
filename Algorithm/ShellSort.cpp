#if 0
#include <iostream>
#include <random>
using namespace std;

const int SORT_AMOUNT = 5;
const int ARRAY_SIZE = 9;
const int minVal = 0;
const int maxVal = 100;

int a[ARRAY_SIZE];
//int a[ARRAY_SIZE] = { 3,2,6,9,8,1,5,7,4 };



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
	GenerateRandomArray(a);

	for (int amount = SORT_AMOUNT; amount > 0; --amount)
	{
		for (int i = 0; i < amount; ++i)
		{
			for (int j = amount + i; j < ARRAY_SIZE; j += amount)
			{
				for (int k = j; k > 0 && k - amount >= 0; k -= amount)
				{
					cout << "a[" << k - amount << "] = " << a[k - amount] << endl;
					cout << "a[" << k << "] = " << a[k] << endl;
					if (a[k - amount] < a[k])
					{
						cout << "Continue." << endl;
						continue;
					}
					cout << a[k - amount] << "‚Æ" << a[k] << "‚ð“ü‚ê‘Ö‚¦‚½" << endl;
					swap(a[k - amount], a[k]);
				}
			}
		}
	}
	DisplayResult(a);
}
#endif