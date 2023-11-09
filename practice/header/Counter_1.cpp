//
// Created by 강석준 on 11/9/23.
//

#include <iostream>
#include "Counter_1.h"
using namespace std;


/**
 * Counter_1.p 파일의 Test Main File
 */
int main() {
    Counter_1 c1;
    c1.reset();

    cout << "before Value = " << c1.getValue() << endl;

    c1.count();
    c1.count();

    cout << "after Value = " << c1.getValue() << endl;

    c1.reset();

    cout << "reset Value = " << c1.getValue() << endl;

}