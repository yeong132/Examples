#include <iostream>
using namespace std;

void func1() {
    int* ptr = new int(10);  // �� �޸𸮿� ���� 10 �Ҵ�
    cout << "Value: " << *ptr << endl;
    delete ptr;             // �޸� ����
}

int main() {
    func1();
    return 0;
}
