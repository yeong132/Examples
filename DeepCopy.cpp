#include <iostream>
using namespace std;

int main() {
    // ������ A�� ���� �޸𸮸� �Ҵ��ϰ� ���� 30���� ����
    int* A = new int(30);

    // ������ B�� A�� ����Ű�� ���� ���� (���� ����)
    int* B = new int(*A);

    cout << "A�� ��: " << *A << endl; // ���: 30
    cout << "B�� ��: " << *B << endl; // ���: 30

    // A�� ���� �޸𸮸� ����
    delete A;

    // B�� ������ ���������� �ڽ��� �޸𸮸� ����
    cout << "B�� �� (���� ���� ��): " << *B << endl; // ���: 30

    // B�� �޸𸮵� ����
    delete B;

    return 0;
}
