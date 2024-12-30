#include <iostream>
using namespace std;

void func3() {
    for (int i = 0; i < 3; ++i) {  // 반복문 안에서 지역 변수 'i'가 매번 새로 생성됨
        int temp = i * 10;  // 반복문 안에서만 유효한 'temp'
        cout << "Iteration " << i << ": temp = " << temp << endl;
    }  // 반복문 끝날 때마다 'temp'는 소멸됨
}

int main() {
    func3();  // func3 호출
    return 0;
}
