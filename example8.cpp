#include <iostream>
using namespace std;

void func2() {
    int b = 20;  // ���� ���� 'b', stack �޸𸮿��� ������
    cout << "func2: b = " << b << endl;
}

void func1() {
    int a = 10;  // ���� ���� 'a', stack �޸𸮿��� ������
    cout << "func1: a = " << a << endl;
    func2();  // func2() ȣ��
}  // func1() ���� �� 'a'�� �Ҹ�ǰ�, func2() ���� �� 'b'�� �Ҹ��

void func() {
    // int a = 10;
    static int a = 10;
    a++;
    cout << "func: a = " << a << endl;
}

int main() {
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    return 0;
}
