#include <iostream>
#include <memory> // shared_ptr ���
using namespace std;

int main() {
    // shared_ptr ����
    shared_ptr<int> ptr1 = make_shared<int>(5);

    // ptr1�� ���� ī��Ʈ ���
    cout << "ptr1�� ���� ī��Ʈ: " << ptr1.use_count() << endl; // ���: 1

    // ptr2�� ptr1�� ���ҽ��� ����
    shared_ptr<int> ptr2 = ptr1;
    cout << "ptr2 ���� �� ���� ī��Ʈ: " << ptr1.use_count() << endl; // ���: 2

    // ptr2�� ������ ����� ���� ī��Ʈ ����
    ptr2.reset();
    cout << "ptr2 ���� �� ���� ī��Ʈ: " << ptr1.use_count() << endl; // ���: 1

    // ������ ����� ptr1�� �ڵ� ����
    return 0;
}
