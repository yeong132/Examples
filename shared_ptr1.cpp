#include <iostream>
#include <memory> // shared_ptr 사용
using namespace std;

int main() {
    // shared_ptr 생성
    shared_ptr<int> ptr1 = make_shared<int>(5);

    // ptr1의 참조 카운트 출력
    cout << "ptr1의 참조 카운트: " << ptr1.use_count() << endl; // 출력: 1

    // ptr2가 ptr1과 리소스를 공유
    shared_ptr<int> ptr2 = ptr1;
    cout << "ptr2 생성 후 참조 카운트: " << ptr1.use_count() << endl; // 출력: 2

    // ptr2가 범위를 벗어나면 참조 카운트 감소
    ptr2.reset();
    cout << "ptr2 해제 후 참조 카운트: " << ptr1.use_count() << endl; // 출력: 1

    // 범위를 벗어나면 ptr1도 자동 해제
    return 0;
}
