#include <iostream>
/** �. �. ������� */
/**���� ����������� �����. ����� ����� � ������������ ��� ����.*/
/** ������� ϸ�� */
using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << (a % 10) + (a / 10 % 10) + (a / 100 % 100) << endl;
    cout << (a % 10) * (a / 10 % 10) * (a / 100 % 100) << endl;
    return 0;
}
/**
123
6
6
 */
