#if 0
#include <iostream>
using namespace std;

const int ARRAY_SIZE = 5;
int main()
{
	int a[ARRAY_SIZE] = { 3,2,6,9,8 };
	int index;

	for (int i = 0; i < ARRAY_SIZE; ++i)
	{
		index = i;
		for (int j = i + 1; j < ARRAY_SIZE; ++j)
		{
			if (a[index] < a[j])
			{
				continue;
			}
			index = j;
		}
		swap(a[i], a[index]);
	}

	for (int k = 0; k < ARRAY_SIZE; k++)
	{
		cout << a[k];
	}
}
#endif