//
// Created by 강석준 on 2023/10/15.
//

#include <iostream>
using namespace std;

/**
* 동적 메모리 할당
 *
 * 프로그램 동작중 기억공간의 필요성 및 소요량을 결정, 필요한 공간 할당
 *  -> 기억 공간 생성 시점 : new 연산자 실행시점
 *  -> 기억 공간 소멸 시점 : delete 연산자 실행시점
 * 포인터 변수가 할당된 기억 공간을 가리키게함.
 *
 *
 *  사용 예제
 *  1. 메모리 할당 연산자 - ptrVar 은 포인터변수임
 *      ptrVar = new TypeName;
 *      ptrVar = new TypeName[n];
 *
 *  2. 메모리 반납 연산자
 *      delete ptrVar;
 *      delete [] ptrVar;
 *
 *  3. 반납 후 해당 포인터 변수가 아무것도 가르키고 있지 않다고 재정의 해줘야 한다. !!!! 중요!!!! ! !! !
 *
 *      int* intPtr;
 *      intPtr = new int; // 메모리 할당
 *      *intPtr = 10;
 *
 *      delete intPtr; // 메모리 반납
 *      intPtr = nullptr; //메모리는 있지만 사용은 못하는 상태이기 때문에 아무것도 가르키고 있지 않다고 표현.
 *
 *
 * 4. 배열 데이터 공간의 할당 및 반환
 *      int* intPtr;
 *      intPtr = new int[4];
 *      *intPtr = 10; // 0번 값 = 10
 *      *(intPtr + 1) = 20; 1번 값 = 20
 *      intPtr[2] = 30; 2번값 = 30
 *
 *      delete [] intPtr;
 *      intPtr = nullptr;
*/

/**
* 참조 - reference
 *
 * 포인터보다 좀더 안전하게 사용가능한것. (포인터와 같다고 생각) 다만 사용 방법이 다름
 *
 * 어떠한 대상을 가리키는 값(포인터와 유사)
 * 참조 변수는 참조 대상의 별명처럼 사용 가능
 * **** 참조변수는 무조건 초기화 해줘야 함.
 * l-value 참조 : 실체가 있는대상 (l-value) 에 대한 참조
 *
 * l-value  = r-value
 * a        = b +10;
 *
 * 1. l-value 참조 변수 선언 형식
 *      TypeName& refVar = varName;  무조건 초기화 해줘야함.
 *         TypeName : 참조 대상의 자료형
 *         refVar : 참조 변수 이름
 *         varName : 참조 대상
 *
 * 2. const 참조
 *      참조 변수가 참조하는 대상의 값을 바꿀수 없음
 *      -> 값을 수정하는 용도 사용 X
 *      -> READ ONLY 임
 *
 *
 *  3.포인터와 다른점
 *      1. 참조 변수를 이용하여 값을 읽거나 저장할 떄 참조 대상 변수를 사용하는 형식과 동일.
 *      2. 참조 변수는 초기화를 통해 반드시 어떤 대상을 참조해야한다.
 *      3. 참조 변수는 초기화를 통해 지정된 참조 대상을 바꿀수 없다. 참조의 유효기간동안 하나의 대상만 참조 가능.
 *
 *  4. r-value 참조
 *      - 사용한 후에 그 값을 더이상 가지고 있을 필요가 없는 대상을 참조
 *      - 객체의 값을 다른 객체로 이동 할때 사용한다.
*/

void refTest1() {
    // 참조 변수 사용 예제
    int a = 10, b = 20;
    int& aRef = a; //a참조
    cout << aRef << endl; // aRef = 10;

    aRef = 100; // aRef = 100
    cout << aRef << endl; // aRef = 10;

    aRef = b; // aRef = 20
    cout << aRef << endl; // aRef = 10;

    // const 참조 - 값 수정 X
    int x {30};
    const int& xRef = x; // x 참조
    cout << xRef << endl; // x 값 READ
    //xRef += 10; // 이건 ERROR 값 변경 X
}


int main () {
    refTest1();
    return 0;
}