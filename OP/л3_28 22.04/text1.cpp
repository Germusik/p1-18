/** Text1�. ���� ��� ����� � ����� ������������� ����� N � K.
������� ��������� ���� � ��������� ������ � �������� � ���� N �����, ������ �� ������� ������� �� K �������� �*� (���������). */
# include <string>
# include <fstream>
#include <locale>
# include <iostream>
using namespace std;
int main () {
    setlocale(LC_ALL,"RUSSIAN");
string name;
int n, k;
cin >> name >> n >> k;
string zvezd(k,'*');
    ofstream fout;
    fout.open(name.c_str());
for(int i = 0;i<n;i++){
    fout << zvezd << endl ;
    }
fout.close();
return 0;
}
