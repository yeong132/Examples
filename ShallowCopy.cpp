#include <iostream>
using namespace std;

int main() {
    // 포인터 A가 동적 메모리를 할당하고 값을 30으로 설정
    int* A = new int(30);

    // 포인터 B가 A가 가리키는 메모리를 공유
    int* B = A;

    cout << "A의 값: " << *A << endl; // 출력: 30
    cout << "B의 값: " << *B << endl; // 출력: 30

    // A가 동적 메모리를 해제
    delete A;

    // 이제 B는 Dangling Pointer(해제된 메모리를 가리키는 포인터)
    // 이 시점에서 B를 통해 접근하면 Undefined Behavior 발생
    cout << "B의 값 (dangling): " << *B << endl; // 위험: 정의되지 않은 동작

    return 0;
}
