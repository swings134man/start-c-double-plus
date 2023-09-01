//
// Created by 강석준 on 2023/09/01.
//

#include <iostream>
#include <cstdlib> // malloc 함수를 사용하기 위한 헤더

using namespace std;// namespace 지정 간소화

void dynamic() {
    /**
     * C++ 에서 동적 할당 하는 방법
     * new 연산자 활용 || malloc() 함수 사용.
     * 동적으로 할당한 메모리는 반드시 해제.
     * new -> delete, malloc -> free 로 해제해야함.
     */
     // 단순 int
     int *p = new int(0); // 초기값 0
     if(p == null) {
        cout << "System Error!" << endl;
        exit(1);
     }
     *p = 10;
     cout << *p;

     delete p; //메모리 해제
     p = NULL; //해제 후 null


     // ------- 배열의 동적 할당
     int *arr = new int[10];
     if(arr == null){
         cout << "System Error!" << endl;
         exit(1);
     }

     *arr = 10;

     delete[] arr; //메모리 해제
     arr = null;

     // --------------------------------- malloc()
    int* dynamicInt = (int*) malloc(sizeof(int));
    // 아래 조건문은 = 동적 할당 메모리가 제대로 할당되었는지 확인
    if(dynamicInt != nullptr){ // nullptr = 포인터 변수의 값을 0으로 주기위한 키워드 ?
        // 동적할당 되었다면 -> 해당 메모리에 접근하여 사용.
        *dynamicInt = 42;

        free(dynamicInt); // 메모리 해제
    }

    reutrn 0;
};
