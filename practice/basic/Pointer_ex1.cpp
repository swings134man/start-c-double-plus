//
// Created by 강석준 on 2023/10/15.
//

#include <iostream>
using namespace std;// namespace 지정 간소화

/**
 * 포인터란?
 *
 * 대상이 위치한 곳을 가리키는(주소를 저장하는) 변수
 * -> 가리키는 대상: 포인터에 지정된 자료형에 해당되는 변수, 동적으로 할당된 메모리, 함수 등
 *
 * 포인터 선언 형식
 * -> TypeName* ptrVar;
 *  -> TypeName: 가리킬 값의 자료형
 *  -> ptrVar: 포인터 변수의 이름
 *
 * 예)
 * int* iPtr; -> iPtr 변수는 정수형 포인터 변수이다.
 *
 * ** 주의사항
 * 포인터가 유효한 대상을 가리키게 한 후 사용해야 함.
 * -> ptrVar = &var; //ptrVar이 var을 가리키게 함.
 *      ->  ptrVar 에 var변수의 주소값을 저장하게 된다.
 *
 * -> *ptrVar = value; // ptrVar 을 이용하여 var 변수에 엑세스한다.
 *
 * & = 주소 계산 연산자
 * *ptrVar = 포인터 ptrVar 가 가르키는곳 (주소)
 */

void ptrTest1() {
    int a;
    int* iPtr = &a; // iPtr 포인터 변수는 a변수의 주소값을 가지고 있음
    *iPtr = 40; // 결론적으로 a = 40

    cout << "iPtr이 가리키는 값: " << *iPtr << endl;

    *iPtr = 10;
    cout << "변수 a 값: " << a << endl;
}

//int main () {
//    ptrTest1();
//    return 0;
//}