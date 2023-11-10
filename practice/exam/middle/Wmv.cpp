#include "iostream"
#include "Wmv.h"
using namespace std;

// 생성자
WeightedMovingAverage::WeightedMovingAverage(int n, double* w)  : dataSize(n), index(0){
    values = new double[n]();
    weights = new double[n]();

    // 가중치
    for(int i=0; i<n; i++){
        weights[i] = w[i];
    }
}

// 소멸자
WeightedMovingAverage::~WeightedMovingAverage() {
    delete[] values;
    delete[] weights;
    cout << "delete" << endl;
}

// Reset
void WeightedMovingAverage::reset(int n, double* w) {
    // n < 1 -> 유지(reset X)
    if (n < 1) return;

    delete[] values;
    delete[] weights;

    // reset
    dataSize = n;
    values = new double[n]();
    weights = new double[n]();

    // 가중치
    for(int i=0; i<n; i++){
        weights[i] = w[i];
    }
    cout << "Reset Completed" << endl;
}

// 값 전달
void WeightedMovingAverage::transValue(double val) {
    // index 순환 -> value 크기만큼 값 init
    // 배열의 길이는 최대값을 넘어가지 않음.
    values[index % dataSize] = val;
    index++;
}

// 계산
double WeightedMovingAverage::calcWma() {
    int effSize;
    double valueSum;
    double weightSum;

    if(dataSize > index){
        effSize = index;
    }else {
        effSize = dataSize;
    }

    // value * weight
    for(int i=0; i < effSize; i++){
        valueSum += values[(index - 1 - i) % dataSize] * weights[i];
        weightSum += weights[i];
    }

    return valueSum / weightSum;
}

// 복사
WeightedMovingAverage::WeightedMovingAverage(const WeightedMovingAverage& object){
    dataSize = object.dataSize;
    index = object.index;
    values = new double[dataSize];
    weights = new double[dataSize];
    std::copy(object.values, object.values + dataSize, values);
    std::copy(object.weights, object.weights + dataSize, weights);
}

// 이동
WeightedMovingAverage::WeightedMovingAverage(WeightedMovingAverage&& object) noexcept{
    values = object.values;
    weights = object.weights;
    dataSize = object.dataSize;
    index = object.index;

    // 원본 객체를 초기화
    object.values = nullptr;
    object.weights = nullptr;
    object.dataSize = 0;
    object.index = 0;
}

