#include <iostream>
using namespace std;

int main() {
    // ������ A�� ���� �޸𸮸� �Ҵ��ϰ� ���� 30���� ����
    int* A = new int(30);

    // ������ B�� A�� ����Ű�� �޸𸮸� ����
    int* B = A;

    cout << "A�� ��: " << *A << endl; // ���: 30
    cout << "B�� ��: " << *B << endl; // ���: 30

    // A�� ���� �޸𸮸� ����
    delete A;

    // ���� B�� Dangling Pointer(������ �޸𸮸� ����Ű�� ������)
    // �� �������� B�� ���� �����ϸ� Undefined Behavior �߻�
    cout << "B�� �� (dangling): " << *B << endl; // ����: ���ǵ��� ���� ����

    return 0;
}
