cmake_minimum_required(VERSION 3.26)
project(start_c_double_plus)

set(CMAKE_CXX_STANDARD 17)

add_executable(start_c_double_plus main.cpp
        firstTest.cpp
        practice/basic/DynamicAllocation.cpp
        practice/basic/Class_3.cpp
        practice/basic/Pointer_ex1.cpp
        practice/basic/Dynamic_3.cpp
        practice/basic/Function_4.cpp
        practice/basic/Class_5.cpp
        practice/header/Counter_1.cpp
        practice/header/Counter_1.h
        practice/header/person_test/Person.cpp
        practice/header/person_test/Person.h
        practice/header/person_test/PersonMain.cpp
        practice/exam/Wmv.cpp
        practice/exam/WmvCopyVersion.cpp
        practice/exam/middle/Wmv.cpp
        practice/exam/middle/WmvMain.cpp
)
