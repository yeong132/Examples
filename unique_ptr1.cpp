#include <iostream>
#include <memory> // unique_ptr ���
using namespace std;

int main() {
    // unique_ptr ����
    unique_ptr<int> ptr1 = make_unique<int>(10);

    // unique_ptr�� �����ϴ� �� ���
    cout << "ptr1�� ��: " << *ptr1 << endl;

    // unique_ptr�� ���簡 �Ұ���
    // unique_ptr<int> ptr2 = ptr1; // ������ ���� �߻�!

    // ������ ����� �޸� �ڵ� ����
    return 0;
}
