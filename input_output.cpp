#include <iostream>
using namespace std;

int main_input_output()
{
    int i, j;

    cout << "Enter num_1: ";   // ���ڿ� ���
    cin >> i;                  // ����ڿ��� ������ �Է� �޾� i�� ����

    cout << "Enter num_2: ";   // ���ڿ� ���
    cin >> j;                  // ����ڿ��� ������ �Է� �޾� j�� ����

    cout << "num_1 + num_2 = " << i + j << std::endl; // �� ���� �� ���
    return (0);
}
