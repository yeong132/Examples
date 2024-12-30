#include <iostream>
using namespace std;

void createDynamicArray() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;  // �迭 ũ�⸦ ����ڷκ��� �Է¹���

    if (size > 0) {
        int* arr = new int[size];  // �Է¹��� ũ�⸸ŭ ���� �迭 ����
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 2;  // �迭 �ʱ�ȭ
            cout << "arr[" << i << "] = " << arr[i] << endl;
        }
        delete[] arr;  // �������� �Ҵ��� �迭 �޸� ����
    }
    else {
        cout << "Invalid size!" << endl;
    }
}

int main() {
    createDynamicArray();
    return 0;
}
