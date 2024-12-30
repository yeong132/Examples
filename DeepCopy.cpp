#include <iostream>
using namespace std;

int main() {
    // 포인터 A가 동적 메모리를 할당하고 값을 30으로 설정
    int* A = new int(30);

    // 포인터 B가 A가 가리키는 값을 복사 (깊은 복사)
    int* B = new int(*A);

    cout << "A의 값: " << *A << endl; // 출력: 30
    cout << "B의 값: " << *B << endl; // 출력: 30

    // A가 동적 메모리를 해제
    delete A;

    // B는 여전히 독립적으로 자신의 메모리를 관리
    cout << "B의 값 (깊은 복사 후): " << *B << endl; // 출력: 30

    // B의 메모리도 해제
    delete B;

    return 0;
}
