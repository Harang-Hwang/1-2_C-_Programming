/*
#include <iostream>
using namespace std;

void main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << "�� : " << a + b << endl;
	cout << "��� : " << (a + b) / 2 << endl;
}
*/

/*
#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "������ �Է��ϼ��� : ";
	cin >> a;
	cout << a << endl;
}
*/

/*
#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "������ �Է��ϼ��� : ";
	cin >> a;
	if (a >= 60){
		cout << "�հ�!" << endl;
		cout << "�����մϴ�~" << endl;
	}
	else
	cout << "���հ�!" << endl;
}
*/

/*
#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "������ �Է��ϼ��� : ";
	cin >> a;
	if (a >= 90)
		cout << "A!" << endl;
	else if (a>=80)
		cout << "B!" << endl;
	else if (a>=70)
		cout << "C!" << endl;
	else
		cout << "F!" << endl;
}
*/

/*
#include <iostream>
using namespace std;

void main() {
	int a;
	cout << "������ �Է��ϼ��� : ";
	cin >> a;
	switch (a / 10)
	{
	case 9:
		cout << "A" << endl;
		
	case 8:
		cout << "B" << endl;
		
	case 7:
		cout << "C" << endl;
		
	case 6:
		cout << "D" << endl;
		
	default:
		cout << "F" << endl;
		break;
	}
}
*/

/*
#include <iostream>
using namespace std;

void main() {
	int a;
	cout << "���� �Է� : ";
	cin >> a;
	switch (a / 10)
	{
	case 9:
	case 8:
	case 7:
	case 6: cout << "�հ�" << endl; break;
	default:
		cout << "���հ�" << endl;
		break;
	}
}
*/

/*
#include <iostream>
using namespace std;

void main() {
	int XA, XB;
	cout << "A�� �ڹ� ���� : ";
	cin >> XA;
	cout << "B�� �ڹ� ���� : ";
	cin >> XB;
	if (XA == 1 && XB == 0) {
		cout << "B�� 10������ ó�Ѵ�" << endl;
	}
	else if (XB == 1 && XA == 0)
		cout << "A�� 10������ ó�Ѵ�" << endl;
	else if (XA == 1 && XB == 1)
		cout << "A�� B�� 5������ ó�Ѵ�" << endl;
	else if (XA == 0 && XB == 0)
		cout << "A�� B�� 1������ ó�Ѵ�" << endl;
	}
	*/

/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main() {
	srand(time(NULL));
	cout << rand();

}
*/

/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main() {
	srand(time(NULL));
	int i = 0;
	while (1) {
		cout << rand() % 100 + 1 << endl;
		i++;
		if (i == 10)
			break;
	
			
}
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void main() {
	srand(time(NULL));
	int com = rand() % 100 + 1;
	int user;
cout << "���� �Է� : ";
	while (1) {
		cin >> user;
		
		if (user >= com)
			cout << "DOWN!" << endl;
		else if (user <= com)
			cout << "UP!" << endl;
		else {
			cout << "����!" << endl;
			break;
		}
	}
}