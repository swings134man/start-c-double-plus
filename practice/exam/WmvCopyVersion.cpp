//
// Created by 강석준 on 11/11/23.
//
#include <iostream>
using namespace std;

class WeightedMovingAverage {
private:
    double* values;      // 데이터를 저장할 배열
    double* weights;     // 가중치를 저장할 배열
    int size;            // 데이터의 크기
    int currentIndex;    // 현재 데이터의 위치

public:
    // 생성자
    WeightedMovingAverage(int n, double* w) : size(n), currentIndex(0) {
        values = new double[n]();
        weights = new double[n]();

        for (int i = 0; i < n; i++) {
            weights[i] = w[i];
        }
    }

    // 소멸자
    ~WeightedMovingAverage() {
        delete[] values;
        delete[] weights;
    }

    // 가중이동평균 재설정 함수
    void reset(int n, double* w) {
        if (n < 1) return;

        delete[] values;
        delete[] weights;

        size = n;
        values = new double[n]();
        weights = new double[n]();

        for (int i = 0; i < n; i++) {
            weights[i] = w[i];
        }
    }

    // 값 전달 함수
    void addValue(double value) {
        values[currentIndex % size] = value;
        currentIndex++;
    }

    // 가중이동평균 계산 함수
    double getWMA() {
        double sum = 0;
        double weightSum = 0;

        int dataSize = (currentIndex < size) ? currentIndex : size;

        for (int i = 0; i < dataSize; i++) {
            sum += values[(currentIndex - 1 - i) % size] * weights[i];
            weightSum += weights[i];
        }

        return sum / weightSum;
    }
};

//int main() {
//    double weights[] = {0.5, 0.3, 0.15, 0.05};
//    WeightedMovingAverage wma(4, weights);
//
//    wma.addValue(10);
//    wma.addValue(5);
//    wma.addValue(8);
//    wma.addValue(12);
//    wma.addValue(10);
//    wma.addValue(14);
//
//    cout << "가중이동평균: " << wma.getWMA() << endl;
//
//    return 0;
//}