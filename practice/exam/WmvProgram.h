
#ifndef WMN_PROGRAM_H
#define WMN_PROGRAM_H


class WeightedMovingAverage {
private:
    double* values;   // 데이터 저장 배열
    double* weights; // 가중치 저장 배열
    int dataSize;    // 데이터 크기
    int index;       // 현재 인덱스(위치)

public:
    WeightedMovingAverage(int n, double* w);
    ~WeightedMovingAverage();
    void reset();
    void transValue();
    double calcWma();
    WeightedMovingAverage(const WeightedMovingAverage& object);
    WeightedMovingAverage(WeightedMovingAverage&& object);
};


#endif //WMN_PROGRAM_H
