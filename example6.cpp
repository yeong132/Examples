#include <iostream>
using namespace std;

void func1() {
    int a = 10;  // ���� ���� 'a', stack �޸𸮿��� ������
    cout << "func1: a = " << a << endl;
}  // func1()�� ����Ǹ� 'a'�� �Ҹ��

int main() {
    func1();  // func1() ȣ��
    // 'a'�� func1() ȣ�� �߿��� �����ϰ�, �Լ� ���� �� �Ҹ��
    return 0;
}