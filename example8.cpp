#include <iostream>
using namespace std;

void func2() {
    int b = 20;  // 지역 변수 'b', stack 메모리에서 관리됨
    cout << "func2: b = " << b << endl;
}

void func1() {
    int a = 10;  // 지역 변수 'a', stack 메모리에서 관리됨
    cout << "func1: a = " << a << endl;
    func2();  // func2() 호출
}  // func1() 종료 시 'a'는 소멸되고, func2() 종료 후 'b'도 소멸됨

void func() {
    // int a = 10;
    static int a = 10;
    a++;
    cout << "func: a = " << a << endl;
}

int main() {
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    func();
    return 0;
}
