#include <iostream>
using namespace std;

void func2() {
    int* arr = new int[5];  // �� �޸𸮿� ���� �迭 5�� �Ҵ�
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;  // �迭 �޸� ����
}

int main() {
    func2();
    return 0;
}
