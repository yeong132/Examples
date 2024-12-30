#include <iostream>
using namespace std;

void func1() {
    int* ptr = new int(10);  // 힙 메모리에 정수 10 할당
    cout << "Value: " << *ptr << endl;
    delete ptr;             // 메모리 해제
}

int main() {
    func1();
    return 0;
}
