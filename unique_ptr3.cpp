#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {
        cout << "MyClass 생성: " << value << endl;
    }
    ~MyClass() {
        cout << "MyClass 소멸: " << value << endl;
    }
    void display() const {
        cout << "값: " << value << endl;
    }
private:
    int value;
};

int main() {
    // unique_ptr로 MyClass 객체 관리
    unique_ptr<MyClass> myObject = make_unique<MyClass>(24);

    // MyClass 멤버 함수 호출
    myObject->display();

    // 소유권 이동
    unique_ptr<MyClass> newOwner = move(myObject);

    if (!myObject) {
        cout << "myObject는 이제 비어 있습니다." << endl;
    }
    newOwner->display();

    // 범위를 벗어나면 newOwner가 관리하는 메모리 자동 해제
    return 0;
}
