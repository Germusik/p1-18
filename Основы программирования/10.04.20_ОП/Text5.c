#include <stdio.h>
#define LEN 1000

/**���� ������ S � ��������� ����. �������� ������ S � ����� �����.*/

int main(){
    char s[LEN] = "werhewruih";
    char str[LEN];
    FILE *file;
    file = fopen("newfile.txt", "a");
    fprintf(file, s);
    return 0;
}

