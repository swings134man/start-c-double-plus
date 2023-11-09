//
// Created by 강석준 on 11/9/23.
//

#include "Person.h"
#include "iostream"
#include "cstring"

using namespace std;

// 2번쨰 Person 은 Person Class 의 생성자를 뜻함.
Person::Person(const char *name, const char *addr) {

    // name 저장 공간 할당
    // this 는 Person의 전역변수 name 을 뜻한다. 생성자의 name 은 파라미터.
    // strlen : String length
    this->name = new char[strlen(name) + 1]; //C++ 에선 문자열 끝에 0이라는 null String 이 들어가기 떄문에 + 1해줘야한다.

    // 변수 name 에 data set
    // 파라미터 name 을 Person객체의 필드 name 에 copy
    // strcpy : String Copy
    strcpy(this->name, name);


    this->addr = new char(strlen(addr) + 1);
    strcpy(this->addr, addr);

    cout << "Person 객체 생성 : " << name << endl;
}

// 소멸자
// name, addr 의 할당된 저장공간 반납.
Person::~Person() {
    cout << "Person 객체 제거(" << name << ")" << endl;

    // 저장공간 반납
    delete [] name;
    delete [] addr;
}

void Person::print() const {
    cout << addr << "에 거주 " << name << " 이다." << endl;
}

// 주소 변경
void Person::chAddr(const char *newAddr) {
    delete [] addr;

    addr = new char(strlen(newAddr) +1);
    strcpy(this->addr, newAddr);
}