//
//#include "iostream"
//using namespace std;
//
//class WeightedMovingAverage {
//private:
//    double* values;   // 데이터 저장 배열
//    double* weights; // 가중치 저장 배열
//    int dataSize;    // 데이터 크기
//    int index;       // 현재 인덱스(위치)
//
//public:
//    // Constructor
//    WeightedMovingAverage(int n, double* w) : dataSize(n), index(0){
//        values = new double[n]();
//        weights = new double[n]();
//
//        // 가중치
//        for(int i=0; i<n; i++){
//            weights[i] = w[i];
//        }
//    }
//
//    //Destructor
//    ~WeightedMovingAverage() {
//        delete[] values;
//        delete[] weights;
//        cout << "delete" << endl;
//    }
//
//    // WMA Reset
//    void reset(int n, double* w) {
//        // n < 1 -> 유지(reset X)
//        if (n < 1) return;
//
//        delete[] values;
//        delete[] weights;
//
//        // reset
//        dataSize = n;
//        values = new double[n]();
//        weights = new double[n]();
//
//        // 가중치
//        for(int i=0; i<n; i++){
//            weights[i] = w[i];
//        }
//        cout << "Reset Completed" << endl;
//    }
//
//    // 값 전달
//    void transValue(double val) {
//        // index 순환 -> value 크기만큼 값 init
//        // 배열의 길이는 최대값을 넘어가지 않음.
//        values[index % dataSize] = val;
//        index++;
//    }
//
//    double calcWma() {
//        int effSize;
//        double valueSum;
//        double weightSum;
//
//        if(dataSize > index){
//            effSize = index;
//        }else {
//            effSize = dataSize;
//        }
//
//        // value * weight
//        for(int i=0; i < effSize; i++){
//            valueSum += values[(index - 1 - i) % dataSize] * weights[i];
//            weightSum += weights[i];
//        }
//
//        return valueSum / weightSum;
//    }
//
//    // 복사
//    WeightedMovingAverage(const WeightedMovingAverage& object) {
//        dataSize = object.dataSize;
//        index = object.index;
//        values = new double[dataSize];
//        weights = new double[dataSize];
//        std::copy(object.values, object.values + dataSize, values);
//        std::copy(object.weights, object.weights + dataSize, weights);
//    }
//
//    // 이동
//    WeightedMovingAverage(WeightedMovingAverage&& object) noexcept {
//        values = object.values;
//        weights = object.weights;
//        dataSize = object.dataSize;
//        index = object.index;
//
//        // 원본 객체를 초기화
//        object.values = nullptr;
//        object.weights = nullptr;
//        object.dataSize = 0;
//        object.index = 0;
//    }
//};
//
////int main () {
////    double weights[] = {0.5, 0.3, 0.15, 0.05};
////    WeightedMovingAverage wma(4, weights);
////
////    wma.transValue(10);
////    wma.transValue(5);
////    wma.transValue(8);
////    wma.transValue(12);
////    wma.transValue(10);
////    wma.transValue(14);
////    cout << "가중이동평균 결과 : " << wma.calcWma() << endl;
////
////    // 복사
////    WeightedMovingAverage copy = wma;
////    cout << "가중이동평균 복사 : " << copy.calcWma() << endl;
////
////    // 이동
////    WeightedMovingAverage move = std::move(wma);
////    cout << "가중이동평균 이동 : " << move.calcWma() << endl;
////
////    return 0;
////}
