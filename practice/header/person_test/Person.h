//
// Created by 강석준 on 11/9/23.
//

#ifndef START_C_DOUBLE_PLUS_PERSON_H
#define START_C_DOUBLE_PLUS_PERSON_H


class Person {

    char* name;
    char* addr;

public:
    Person(const char* name, const char* addr);
    ~Person();
    void print() const;
    void chAddr(const char* newAddr); //주소 변경
};


#endif //START_C_DOUBLE_PLUS_PERSON_H
