#include <iostream>
using namespace std;

// �⺻ Ŭ����: Employee
class Employee {
public:
    Employee() {
        cout << "Employee �⺻ ������ ȣ��!" << endl;
    }

    virtual void work() {
        cout << "Employee is working." << endl;
    }

    virtual ~Employee() {
        cout << "Employee �Ҹ��� ȣ��!" << endl;
    }
};

// �Ļ� Ŭ����: Developer
class Developer : public Employee {
public:
    Developer() {
        cout << "Developer �⺻ ������ ȣ��!" << endl;
    }

    void work() {
        cout << "Developer is coding." << endl;
    }

    ~Developer() {
        cout << "Developer �Ҹ��� ȣ��!" << endl;
    }
};

// �Ļ� Ŭ����: Manager
class Manager : public Employee {
public:
    Manager() {
        cout << "Manager �⺻ ������ ȣ��!" << endl;
    }

    void work() {
        cout << "Manager is planning." << endl;
    }

    ~Manager() {
        cout << "Manager �Ҹ��� ȣ��!" << endl;
    }
};

int main() {
    cout << "=== ���� �迭 ��� ===" << endl;

    // Employee �迭 (�⺻ ������ ȣ���)
    Employee team_static[2];  // �⺻ �����ڸ� ȣ���
    team_static[0].work();    // Employee�� work() ȣ��
    team_static[1].work();    // Employee�� work() ȣ��

    cout << "=== ���� �迭 ��� ===" << endl;

    // ���� �޸� �Ҵ�
    Employee* team_dynamic2[2];
    cout << "start!" << endl;
    team_dynamic2[0] = new Developer();  // Developer ��ü ����
    team_dynamic2[1] = new Manager();    // Manager ��ü ����

    for (int i = 0; i < 2; i++) {
        team_dynamic2[i]->work();  // ������ ����, ������ work() ȣ��
    }

    // ���� �޸� ����
    for (int i = 0; i < 2; i++) {
        delete team_dynamic2[i];
    }

    return 0;
}
