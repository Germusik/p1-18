#include <iostream>
#include <cmath>
/** �. �. ������� */
/** �� �������� ��� ����������� ��� �����: A, B, C.
����������, ����� �� ���� ��������� ����� (B ��� C) ����������� ����� � A,
� ������� ��� ����� � �� ���������� �� ����� A. */
/** ������� ϸ�� */
using namespace std;

int main()
{
    int a, b, c;
    int ab, ac;
    cin >> a >> b >> c;
    ab = abs(a - b);
    ac = abs(a - c);
    if (ab < ac){
        cout << "b: " << b << " " << ab << endl;
    }
    else if (ab > ac){
        cout << "c: " << c << " " << ac << endl;
    }
    return 0;
}
/**
4 5 1
5 1
 */
