#include <iostream>
using namespace std;

void createDynamicArray() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;  // 배열 크기를 사용자로부터 입력받음

    if (size > 0) {
        int* arr = new int[size];  // 입력받은 크기만큼 동적 배열 생성
        for (int i = 0; i < size; ++i) {
            arr[i] = i * 2;  // 배열 초기화
            cout << "arr[" << i << "] = " << arr[i] << endl;
        }
        delete[] arr;  // 동적으로 할당한 배열 메모리 해제
    }
    else {
        cout << "Invalid size!" << endl;
    }
}

int main() {
    createDynamicArray();
    return 0;
}
