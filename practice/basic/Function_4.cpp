//
// Created by 강석준 on 11/6/23.
//

#include <iostream>
using namespace std;

/**
 * 4강 Function : 함수
 *
 * 함수 정의 형식
 * ReturnType functionName(param) {}
 * -> Java 와 동일
 *
 * - call By Value (값 호출) - 값을 복사하여 사용, 파라미터 값 변경해도 원래값 영향X
 * - Call By Reference(참조 호출) - 파라미터에 사용되는 변수의 참조값을 사용, 데이터변경시 기존값도 변경됨
 *
 * **** 함수를 선언 할 떄 , main 함수 보다 위(먼저) 선언되어야 한다.
 *       -> main 함수보다 아래에 있을 경우, 인식 불가.
 *       -> 혹은 함수의 원형 선언
 *          -> float FahrToC(float fahr) 선언 후
 *          -> main 이후 똑같은 이름으로 body 부분을 선언하여 로직 생성시 인식 가능함.
 *
 */


// 함수 사용 Ex1 - 화씨 -> 섭씨온도 변환 함수
float FahrToC(float fahr) {
    return (fahr - 32) * 5 / 9;
}

// 순환호출(재귀)
int factorial(int n) {
    if(n <= 1){
        return 1;
    }else {
        return n * factorial(n - 1);
    }
}

// 참조 호출 - 파라미터가 복사된 값이 아닌 원래 변수의 참조를 사용
void swapValue(int& x, int& y) {
    // 파라미터로 넘긴 변수의 값을 실제로 변경함.
    int z = x;
    x = y;
    y = z;
}

//

// main
int main() {
    // Ex1 Call
    float cTemp = FahrToC(30);
    cout << "섭씨 온도 = " << cTemp <<endl;

    // ex2 call
    int f = factorial(3);
    cout << f << endl;

    // ex3 call
    int a = 1;
    int b = 2;
    if(a < b) swapValue(a, b);
    cout << "swap value a=" << a << " b=" << b << endl; // a=2, b=1
}
