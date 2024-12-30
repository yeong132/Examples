#include <iostream>
using namespace std;

void func3() {
    int* ptr = new int(20);  // 힙 메모리에 정수 20 할당
    cout << "Value: " << *ptr << endl;
    // 메모리 해제를 하지 않음
}

int main() {
    func3();  // 메모리 누수 발생
    return 0;
}
