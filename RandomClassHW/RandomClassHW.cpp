#include <iostream>

using namespace std;


class Random {
public:
    int next() {
        return rand() % 100 + 1;
    }
    int nextInRange(int a, int b) {
       
        cout << "a �Է� : (��, a < b) ";
        cin >> a;

        cout << "b �Է� : (��, a < b) ";
        cin >> b;

        return rand() % (b - a + 1) + a;
    }
};

int main() {
    srand(time(NULL));

    Random r;

    int result_1 = r.next();
    cout << "ù��° �� ��� : " << result_1 << endl;

    int result_2 = r.nextInRange(1,100);
    cout << "�ι�° �� ��� : " << result_2 << endl;
}