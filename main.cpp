#include <iostream>

using namespace std;// namespace 지정 간소화

// 명칭공간 #1
namespace one {
    int count = 0; // 선언

    // Method
    void printOut() {
        std::cout << "Call By namespace one" << std::endl;
    }
}

// 다른 CPP 테스트 할떄는 주석 처리
//int main() {
////    std::cout << "Hello, World!" << std::endl;
////
////    // 출력
////    int a = 10;
////    std::cout << "Variable a Result=" << a << std::endl;
////
////    // 입력
////    int input;
////    char str[100]; // 문자열 입력받는 변수 (백색 공백문자는 구분문자로 취급(빈칸, 탭, 새줄문자)) -> 공백 이후 문자는 입력X
////    std::cin >> input >> str;
////    // 입력값 출력
////    std::cout << input << str << std::endl;
////
////    // 명칭공간(#1) -> 다른 영역의 변수의 명칭을 지칭할때 사용하는것
////    one::count = 10;
////    std::cout << "namespace variable = " << one::count << std::endl;
////    one::printOut(); // namespace 내부의 method
////
////    cout << "namespace 간소화 사용" << endl;
//
//
//    return 0;
//}



