#include "iostream"
#include "Wmv.h"
using namespace std;

int main () {
    double weights[] = {0.5, 0.3, 0.15, 0.05};
    WeightedMovingAverage wma(4, weights);

    wma.transValue(10);
    wma.transValue(5);
    wma.transValue(8);
    wma.transValue(12);
    wma.transValue(10);
    wma.transValue(14);
    cout << "가중이동평균 결과 : " << wma.calcWma() << endl;

    // 복사
    WeightedMovingAverage copy = wma;
    cout << "가중이동평균 복사 : " << copy.calcWma() << endl;

    // 이동
    WeightedMovingAverage move = std::move(wma);
    cout << "가중이동평균 이동 : " << move.calcWma() << endl;

    return 0;
}