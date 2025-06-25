#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


	int hi(int a)
	{
		srand(time(NULL));
		int b = rand() % a + 1;
		return 10 * 3.4;
	}

	int main()
	{
		int a = hi(100);
		cout << a;
	}
