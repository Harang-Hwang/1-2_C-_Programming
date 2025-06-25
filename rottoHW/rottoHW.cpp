#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));

	int b, c, d, e, f;
	int a = rand() % 45 + 1;

	while (1)
	{
		b = rand() % 45 + 1;
		c = rand() % 45 + 1;
		d = rand() % 45 + 1;
		e = rand() % 45 + 1;
		f = rand() % 45 + 1;
		if (b != a && c != a && c != b && d != a && d != b && d != c && e != a && e != b && e != c && e != d && f != a && f != b && f != c && f != d && f != e)
			break;
	}
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
}