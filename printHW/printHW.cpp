#include<iostream>
using namespace std;

struct address {
	int no;
	string name;
	int age;
	string phone;
};

int main() {
	address addr[100];
	int getCount;
	cout << "� �Է� : ";
	cin >> getCount;
	for (int i = 0; i < getCount; i++) {
		addr[i].no = i + 1;
		cout << "�̸� �Է� : ";
		cin >> addr[i].name;

		for (int i = 0; i < getCount; i++)
			addr[i].no = i + 1;
		cout << "���� �Է� : ";
		cin >> addr[i].age;

		for (int i = 0; i < getCount; i++)
			addr[i].no = i + 1;
		cout << "���� �Է� : ";
		cin >> addr[i].phone;
	}
	for (int i = 0; i < getCount; i++) {
		cout << addr[i].no << ". " << addr[i].name << ", " << addr[i].age << ", " << addr[i].phone << endl;
	}
	return 0;
}