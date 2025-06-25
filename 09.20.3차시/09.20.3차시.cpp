/*
#include <iostream>
using namespace std;

void main()
{
	int a, b;
	cin >> a;
	cin >> b;
	cout << "합 : " << a + b << endl;
	cout << "평균 : " << (a + b) / 2 << endl;
}
*/

/*
#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "정수를 입력하세요 : ";
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
	cout << "정수를 입력하세요 : ";
	cin >> a;
	if (a >= 60){
		cout << "합격!" << endl;
		cout << "축하합니다~" << endl;
	}
	else
	cout << "불합격!" << endl;
}
*/

/*
#include <iostream>
using namespace std;

void main()
{
	int a;
	cout << "정수를 입력하세요 : ";
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
	cout << "점수를 입력하세요 : ";
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
	cout << "점수 입력 : ";
	cin >> a;
	switch (a / 10)
	{
	case 9:
	case 8:
	case 7:
	case 6: cout << "합격" << endl; break;
	default:
		cout << "불합격" << endl;
		break;
	}
}
*/

/*
#include <iostream>
using namespace std;

void main() {
	int XA, XB;
	cout << "A의 자백 여부 : ";
	cin >> XA;
	cout << "B의 자백 여부 : ";
	cin >> XB;
	if (XA == 1 && XB == 0) {
		cout << "B는 10년형에 처한다" << endl;
	}
	else if (XB == 1 && XA == 0)
		cout << "A는 10년형에 처한다" << endl;
	else if (XA == 1 && XB == 1)
		cout << "A와 B는 5년형에 처한다" << endl;
	else if (XA == 0 && XB == 0)
		cout << "A와 B는 1년형에 처한다" << endl;
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
cout << "정수 입력 : ";
	while (1) {
		cin >> user;
		
		if (user >= com)
			cout << "DOWN!" << endl;
		else if (user <= com)
			cout << "UP!" << endl;
		else {
			cout << "정답!" << endl;
			break;
		}
	}
}