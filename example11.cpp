#include <iostream>
using namespace std;

void func3() {
    int* ptr = new int(20);  // �� �޸𸮿� ���� 20 �Ҵ�
    cout << "Value: " << *ptr << endl;
    // �޸� ������ ���� ����
}

int main() {
    func3();  // �޸� ���� �߻�
    return 0;
}
