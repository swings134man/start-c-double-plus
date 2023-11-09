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
 * header 파일의 Class 내부에 메서드가 동작부가 완성되지 않았다면,
 * 같은 이름의 .cpp 파일내에 동작 로직을 구현해줄 수 있다.
 * 그럴 경우 (클래스 멤버 정의?)
 *      -> void {className}::{method Name}() {...} 으로 구현 부를 만들어 줄 수 있다.
 *  -> 이경우 header 파일만 include 하여 사용해도 구현부 까지 사용 가능하다. (구현부는 .cpp 파일에 있다)
 *
 *
 * 생성자의 초기화 리스트
 *  -> 생성자의 머리 부분에 데이터 멤버를 초기화 하는 값들을 나열한 리스트
 *  일반적으로 생성자 내부에 data = 0; 으로 초기화 시키지만
 *  Counter_1() : value{0} {} 으로 데이터를 초기화 시킬 수 있음.
 *  -> 이 경우 const 변수 또한 초기화 시킬 수 있음.
 *
 *  *소멸자란(destructor)
 *  -> 객체가 소멸될 떄 수행할 작업을 정의한 특수한 함수
 *      -> 클래스 이름에 '~'를 붙여 선언
 *      -> 파라미터 X
 *      -> 일반적으로 public 으로 선언함.
 *      -> 상속을 통해 파생 클래스 정의할 경우 virtual 을 지정해 가상함수가 되도록 하는게 좋음.
 *
 * #pragma once 또한 통용됨.
 */
class Counter_1 {

    int value; // Class 의 default 는 private . -> 구조체의 경우 public

public:
    // Constructor
    Counter_1() : value{0} {
        //value = 0; // 초기화 리스트 사용함
    }

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

    // 소멸자(destructor)
    // 객체 제거를 위한 정리 작업을 주로함 ?
    ~Counter_1() {
        std::cout << "Counter_1.h Destructed" << std::endl;
    }

};


#endif //COUNTER_1_H_INCLUDED
