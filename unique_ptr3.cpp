#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {
        cout << "MyClass ����: " << value << endl;
    }
    ~MyClass() {
        cout << "MyClass �Ҹ�: " << value << endl;
    }
    void display() const {
        cout << "��: " << value << endl;
    }
private:
    int value;
};

int main() {
    // unique_ptr�� MyClass ��ü ����
    unique_ptr<MyClass> myObject = make_unique<MyClass>(24);

    // MyClass ��� �Լ� ȣ��
    myObject->display();

    // ������ �̵�
    unique_ptr<MyClass> newOwner = move(myObject);

    if (!myObject) {
        cout << "myObject�� ���� ��� �ֽ��ϴ�." << endl;
    }
    newOwner->display();

    // ������ ����� newOwner�� �����ϴ� �޸� �ڵ� ����
    return 0;
}
