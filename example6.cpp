#include <iostream>
using namespace std;

void func1() {
    int a = 10;  // 지역 변수 'a', stack 메모리에서 관리됨
    cout << "func1: a = " << a << endl;
}  // func1()이 종료되면 'a'는 소멸됨

int main() {
    func1();  // func1() 호출
    // 'a'는 func1() 호출 중에만 존재하고, 함수 종료 후 소멸됨
    return 0;
}