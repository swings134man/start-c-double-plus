//
// Created by 강석준 on 2023/10/15.
// 3강 강의 - C++ 언어 기초(2) : 흐름제어, 구조체 클래스, 배열, 포인터, 동적메모리 할당
//

#include <iostream>
#include <math.h>

void test1() {
    int score = 10;
    int result;

    // IF 문 예제
    if(score > 5) {
        std::cout << "score more big" << std::endl;
    } else {
        std::cout << "score more small" << std::endl;
    }


    // switch
    char grade;
    switch(score / 10) {
        case 10: // score 100
        case 9 : grade = 'A';
                 break;
        case 8: grade = 'B';
                break;
        default: grade = 'F'; //score 80 이하일때 기본값
    }


    // for Loop
    int val, total = 0;
    for (int i = 0; total < 10; i++){
        std::cin >> val;
        total += val;
    }

    // C+11 이후 for
    int arr[5] = {2,3,9,4,7};
    int sum = 0;
    for (int a : arr){
        sum += 1;
        std::cout << "합계 = " << sum << std::endl;
    }

    // while
    int val2, total2 = 0;
    {
        int i = 0;
        while (i < 10) {
            std::cin >> val;
            total += val;
            i++;
        }
    }
}//test1


// 1. 구조체 예제1
struct structCenter {
    /**
     * 구조체란? 여러가지 자료형의 데이터 집합을 저장할 수 있는 새로운 자료형을 정의한것.
     *
     * C 언어에서는 구조체와는 별개의 함수로 정의함.
     * -> 데이터 타입 따로 -> 함수 따로 작성.
     **/
    // 예시
    // Tyep1 item1;

    double x,y;
};

// 2. 구조체 예제2
struct Circle {
    structCenter center; // 원의 중심좌표
    double radius;  // 원의 반지름 값
};

// 3. 구조체를 활용한 원 지름 구하는 함수
double circleArea(Circle c) {
    double PI = 3.14;
    // 원의 반지름 * 원의 반지름 * 파이
    return c.radius * c.radius * PI;
}

// 구조체 관련 함수
void test2() {
    // 구조체
    Circle c1 = {{0.0}, 10};

    // 구조체 데이터 처리 함수 사용
    std::cout << "원의 면적 = " << circleArea(c1) << std::endl;
}

/**
 * 클래스란? 표현하고자 하는대상 (객체)의 데이터(속성)와 함께 그 대상이 할 수있는 동작을 나타내는 함수들을 묶어서 선언한것
 *
 * C++ 에서는 구조체보다는 클래스를 활용해서 주로 코딩하게 된다. 구조체 활용은 C 에서 사용했었음.
 */
class CircleClass { //원 클래스
    structCenter center; // 중심좌표
    double radius; // 반경

    // 함수의 모음.
public:
    // 초기화
    void init(double cx, double cy, double r) {
        center.x = cx;
        center.y = cy;
        radius = r;
    };
    // 원의 면적 계산
    double area() const {
        double PI = 3.14;
        return radius * radius * PI;
    };
    bool chkOverlap(const CircleClass& c) const {
        double dx = center.x - c.center.x;
        double dy = center.y - c.center.y;
        double dCntr = sqrt(dx*dx + dy*dy);
        return dCntr < radius + c.radius;
    };
    void display() const {
        std::cout << "center =  x=" << center.x << " y=" << center.y << std::endl;
        std::cout << "radius = " << radius << std::endl;
    };
};

// 배열 - array
void test3() {
    int a[5] = {1,2,3,4,5};
    int c[] = {1,2,3,4,5}; //배열은 5로 초기화 됨
    int d[2][4] = {{1,2,3,4}, {1,2,3,4}};

    // 1차원 배열 선언
    float fArray[4];
    int i=0;
    fArray[i] = 10.0f;
    std::cin >> fArray[1] >> fArray[2] >> fArray[3];
    std::cout << fArray[1] * fArray[2];

    // 2차원 배열
    int Arr2D[4][3];
}

//int main () {

    // //클래스 활용
//    CircleClass c1,c2;
//    c1.init(0,0,10);
//    c2.init(30,10,5);
//
//    //1
//    std::cout << "1" << std::endl;
//    c1.display();
//    std::cout << "1 result = "<< c1.area()  << std::endl;
//
//    //2
//    std::cout << "2" << std::endl;
//    c2.display();
//    std::cout << "2 result = "<< c2.area()  << std::endl;

// 배열
//test3();
//}