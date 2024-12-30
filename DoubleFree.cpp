#include <iostream>
using namespace std;

void func4() {
    int* ptr = new int(30);  // 힙 메모리에 정수 30 할당
    cout << "Value: " << *ptr << endl;
    delete ptr;             // 첫 번째 해제
    delete ptr;          // 두 번째 해제 (코드 활성화 시 문제 발생)
}

int main() {
    func4();
    return 0;
}
