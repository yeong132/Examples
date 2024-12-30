#include <iostream>
#include <memory>
using namespace std;

int main() {
    // unique_ptr 생성
    unique_ptr<int> ptr1 = make_unique<int>(10);

    // 소유권 이동 (move 사용)
    unique_ptr<int> ptr2 = move(ptr1);

    if (!ptr1) {
        cout << "ptr1은 이제 비어 있습니다." << endl;
    }
    cout << "ptr2의 값: " << *ptr2 << endl;

    return 0;
}
