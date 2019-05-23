#if 0
#include<random>
#include<iostream>
using namespace std;

int main()
{
	random_device rnd;
	for (int i = 0; i < 10; i++)
	{
		cout << hex << rnd() << "\n";
	}
	getchar();
	return 0;
}
#endif