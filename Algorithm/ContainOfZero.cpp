#if 0
#include <iostream>
#include<random>
using namespace std;

#define ARRAY_LENGTH(array) (sizeof(array) / sizeof(array[0]))

const int ARRAY_SIZE = 10;
const int RANGE = 1000;

bool isContainValue(int targetInt, int searchArray[]);

int main()
{
	int a[ARRAY_SIZE];
	random_device rnd;
	mt19937_64 mt;
	mt.seed(rnd());
	uniform_int_distribution<> rand(-1, 1);

	for (int i = 1; i < ARRAY_SIZE; i++)
	{
		a[i - 1] = rand(mt);
		cout << a[i - 1] << " : ";
		if (!(i % 10))
		{
			cout << endl;
		}
	}
	cout << endl;
	if (isContainValue(0, a))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

bool isContainValue(int targetInt, int searchArray[])
{
	cout << sizeof(searchArray) << endl;
	cout << sizeof(searchArray[0]) << endl;
	for (int index = 0; index < ARRAY_LENGTH(searchArray); index++)
	{
		if (searchArray[index] == targetInt)
		{
			cout << "Detect 0 in array[" << index << "]" << endl;
			return true;
		}
		continue;
	}
	return false;
}

#endif