#include <iostream>
#include <vector>
/**
��������� �����, ������ �������
�������, ������ �., ������, ����, ��, ������� �.
�������� ��������� ���,
����� ��� ���������� ����� ������� � ���������� ���������,
����� ����� ������� � �������������� � �.�.
������� ϸ��
*/

int main()
{
    int n, size_array, summ;
    std::cin >> n;
    std::vector <int> array(n);
    size_array = n - 1;
    for(int i = 0; i < n; ++i)
    {
        std::cin >> array[i];
    }
    for(int i = 0; i < n; ++i)
    {
        summ = array[i] + array[size_array];
        std::cout << summ << std::endl;
        --size_array;
    }
    return 0;
}
