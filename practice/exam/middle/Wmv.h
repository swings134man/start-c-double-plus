
#ifndef WMN_PROGRAM_H
#define WMN_PROGRAM_H


class WeightedMovingAverage {
private:
    double* values;   // 데이터 저장 배열
    double* weights; // 가중치 저장 배열
    int dataSize;    // 데이터 크기
    int index;       // 현재 인덱스(위치)

public:
    WeightedMovingAverage(int n, double* w); // 생성자
    ~WeightedMovingAverage();                // 소멸자
    void reset(int n, double* w);            // 초기화
    void transValue(double val);             // 값 전달
    double calcWma();                        // 계산
    WeightedMovingAverage(const WeightedMovingAverage& object); //복사
    WeightedMovingAverage(WeightedMovingAverage&& object) noexcept; //이동
};


#endif //WMN_PROGRAM_H
