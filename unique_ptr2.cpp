#include <iostream>
#include <memory>
using namespace std;

int main() {
    // unique_ptr ����
    unique_ptr<int> ptr1 = make_unique<int>(10);

    // ������ �̵� (move ���)
    unique_ptr<int> ptr2 = move(ptr1);

    if (!ptr1) {
        cout << "ptr1�� ���� ��� �ֽ��ϴ�." << endl;
    }
    cout << "ptr2�� ��: " << *ptr2 << endl;

    return 0;
}
