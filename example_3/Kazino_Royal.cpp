#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
    cout<<"����� ���������� � ������-����\n";
    cout<<"������� � �����?\n";
    cout<<"�� ����������� ����� - � ������ �����.\n";
    cout<<"���� �� ������ � ���� ������� - �� �������\n";
    cout<<"��� - ��������, � ������� ����� ����������\n";
    srandom(time(nullptr));
    for (int i = 0; i<3; i++) {
        cout<<"������� ����� �� 1 �� 6 : ";
        int num;
        cin >> num;
        if (!cin.good()) {
            cerr<<"��� ���� �����?\n";
            return 2;
        }
        if ( ! isspace(cin.peek())) {
            cerr<<"������ ��������\n";
            return 2;
        }
        if ( (num<1) || (num>6)) {
            cerr<<"� ����� ������ �� ����� ��������\n";
            return 2;
        }
        int res = random() % 6 + 1;
        cout<<"������ ����� "<<res<<endl;
        if (num == res) {
            cout<<"�� �����!!!\n";
            return 0;
        }
    }
    cout<<"����� � ����� �������?\n";
    return 1;
}