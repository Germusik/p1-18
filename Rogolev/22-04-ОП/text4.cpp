/** Text4�. ��� ��������� ����. ������� ���������� ������������ � ��� ��������
� ����� (������� ������ ����� EOLN � ����� ����� EOF ��� �������� ���������� �������� �� ���������)..*/
# include <string>
# include <fstream>
# include <iostream>
using namespace std;
int main () {
    string name ;
    char n;
    int i,j = 0;
    ifstream input ("input.txt");
    input >> n;
    while(!input.eof())
    {
        j++;
        for(i=0;n != '\0' ;i++)
            input >> n;
    }
    cout << j << " - " << n << endl;
    return 0;
}
