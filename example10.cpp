#include <iostream>
using namespace std;

void func2() {
    int* arr = new int[5];  // 힙 메모리에 정수 배열 5개 할당
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    delete[] arr;  // 배열 메모리 해제
}

int main() {
    func2();
    return 0;
}
