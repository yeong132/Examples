#include <iostream>
using namespace std;

void func3() {
    for (int i = 0; i < 3; ++i) {  // �ݺ��� �ȿ��� ���� ���� 'i'�� �Ź� ���� ������
        int temp = i * 10;  // �ݺ��� �ȿ����� ��ȿ�� 'temp'
        cout << "Iteration " << i << ": temp = " << temp << endl;
    }  // �ݺ��� ���� ������ 'temp'�� �Ҹ��
}

int main() {
    func3();  // func3 ȣ��
    return 0;
}
