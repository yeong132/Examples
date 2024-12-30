#include <iostream>
#include <memory> // unique_ptr 사용
using namespace std;

int main() {
    // unique_ptr 생성
    unique_ptr<int> ptr1 = make_unique<int>(10);

    // unique_ptr이 관리하는 값 출력
    cout << "ptr1의 값: " << *ptr1 << endl;

    // unique_ptr은 복사가 불가능
    // unique_ptr<int> ptr2 = ptr1; // 컴파일 에러 발생!

    // 범위를 벗어나면 메모리 자동 해제
    return 0;
}
