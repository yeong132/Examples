#include <iostream>
using namespace std;

void func4() {
    int* ptr = new int(30);  // �� �޸𸮿� ���� 30 �Ҵ�
    cout << "Value: " << *ptr << endl;
    delete ptr;             // ù ��° ����
    delete ptr;          // �� ��° ���� (�ڵ� Ȱ��ȭ �� ���� �߻�)
}

int main() {
    func4();
    return 0;
}
