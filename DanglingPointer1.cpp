#include <iostream>
using namespace std;

void func5() {
    int* ptr = new int(40);  // �� �޸𸮿� ���� 40 �Ҵ�
    int* ptr2 = ptr;

    cout << "ptr adress = " << ptr << endl;
    cout << "ptr2 adress = " << ptr2 << endl;
    cout << *ptr << endl;

    delete ptr;

    cout << *ptr2 << endl;
}

int main() {
    func5();
    return 0;
}
