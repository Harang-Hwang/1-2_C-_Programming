#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void up(int* x)
{
	int i, j, k;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			if (x[j] > x[j + 1]) {
				k = x[j];
				x[j] = x[j + 1];
				x[j + 1] = k;
			}
		}
	}
}

void main()
{
	srand(time(NULL));
	int x[6];
	int i;
	x[0] = rand() % 45 + 1;

	while (1)
	{
		x[1] = rand() % 45 + 1;
		x[2] = rand() % 45 + 1;
		x[3] = rand() % 45 + 1;
		x[4] = rand() % 45 + 1;
		x[5] = rand() % 45 + 1;

		if (x[1] != x[0] && x[2] != x[0] && x[2] != x[1] && x[3] != x[0] && x[3] != x[1] && x[3] != x[2] && x[4] != x[0] && x[4] != x[2] && x[4] != x[3] && x[4] != x[3] && x[5] != x[0] && x[5] != x[2] && x[5] != x[2] && x[5] != x[3] && x[5] != x[4])
			break;
	}

	cout << "원래 : ";
	cout << x[0] << " ";
	cout << x[1] << " ";
	cout << x[2] << " ";
	cout << x[3] << " ";
	cout << x[4] << " ";
	cout << x[5] << " "	<< endl;
	
	up(x);
	cout << "오름차순 배열 : ";
	for (i = 0; i < 6; i++)
	{
		cout << x[i] << " ";
	}
}