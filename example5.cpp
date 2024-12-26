#include <iostream>
using namespace std;

// 기본 클래스: Employee
class Employee {
public:
    Employee() {
        cout << "Employee 기본 생성자 호출!" << endl;
    }

    virtual void work() {
        cout << "Employee is working." << endl;
    }

    virtual ~Employee() {
        cout << "Employee 소멸자 호출!" << endl;
    }
};

// 파생 클래스: Developer
class Developer : public Employee {
public:
    Developer() {
        cout << "Developer 기본 생성자 호출!" << endl;
    }

    void work() {
        cout << "Developer is coding." << endl;
    }

    ~Developer() {
        cout << "Developer 소멸자 호출!" << endl;
    }
};

// 파생 클래스: Manager
class Manager : public Employee {
public:
    Manager() {
        cout << "Manager 기본 생성자 호출!" << endl;
    }

    void work() {
        cout << "Manager is planning." << endl;
    }

    ~Manager() {
        cout << "Manager 소멸자 호출!" << endl;
    }
};

int main() {
    cout << "=== 정적 배열 사용 ===" << endl;

    // Employee 배열 (기본 생성자 호출됨)
    Employee team_static[2];  // 기본 생성자만 호출됨
    team_static[0].work();    // Employee의 work() 호출
    team_static[1].work();    // Employee의 work() 호출

    cout << "=== 동적 배열 사용 ===" << endl;

    // 동적 메모리 할당
    Employee* team_dynamic2[2];
    cout << "start!" << endl;
    team_dynamic2[0] = new Developer();  // Developer 객체 생성
    team_dynamic2[1] = new Manager();    // Manager 객체 생성

    for (int i = 0; i < 2; i++) {
        team_dynamic2[i]->work();  // 다형성 적용, 각각의 work() 호출
    }

    // 동적 메모리 해제
    for (int i = 0; i < 2; i++) {
        delete team_dynamic2[i];
    }

    return 0;
}
