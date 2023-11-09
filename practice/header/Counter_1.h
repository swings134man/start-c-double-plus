//
// Created by 강석준 on 11/9/23.
//

// START~ 내용이 정의되지 않았다면?
#ifndef COUNTER_1_H_INCLUDED
// START 내용을 정의해라
#define COUNTER_1_H_INCLUDED

/**
 *
 * class 를 cpp 저장되어도 되지만, .h 헤더파일에 작성한다면, 다른 파일들에서 해당 Class를 활용할 수 있다.
 *
 * **조건부 컴파일
 * ifndef {} : 정의되지 않았다면 ? {}안의 파일이 정의되지 않았다면 ?
 * endif: ifndef 와 짝을 이룸 종료 시그널
 * define {}: 정의하게된다 {} 안의 파일을
 *
 * -> 즉 해당 header 파일의 내용을 정의하는 것.
 *
 * #pragma once 또한 통용됨.
 */
class Counter_1 {

    int value; //CLass 의 default 는 private . -> 구조체의 경우 public

public:
    void reset(){
        value = 0;
    };
    void count() {
        ++value;
    };

    // const 키워드: 데이터의 값을 변경X -> ReadOnly
    int getValue() const {
        return value;
    }

};


#endif //COUNTER_1_H_INCLUDED
