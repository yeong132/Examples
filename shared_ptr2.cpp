#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass(int val) : value(val) {
        cout << "MyClass ����: " << value << endl; // ���: MyClass ����: 21
    }
    ~MyClass() {
        cout << "MyClass �Ҹ�: " << value << endl; // ���: MyClass �Ҹ�: 21
    }
    void display() const {
        cout << "��: " << value << endl; // ���: ��: 21
    }
private:
    int value;
};

int main() {
    // shared_ptr�� MyClass ��ü ����
    shared_ptr<MyClass> obj1 = make_shared<MyClass>(21);

    // ���� ����
    shared_ptr<MyClass> obj2 = obj1;

    cout << "obj1�� obj2�� ���� ī��Ʈ: " << obj1.use_count() << endl; // ���: 2

    obj2->display(); // ���: ��: 21

    // obj2�� �����ص� obj1�� ��ü�� ����
    obj2.reset();
    cout << "obj2 ���� �� obj1�� ���� ī��Ʈ: " << obj1.use_count() << endl; // ���: 1

    return 0;
}
