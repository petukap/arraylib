#include <cstddef> 
using namespace std;
 // сумма
int arr_sum(const int* arr, std::size_t n){   
    int s = 0; 
    for (std::size_t i = 0; i < n; ++i) { 
    s += arr[i]; 
    } 
    return s;
}
// максимум
int arr_max(const int* arr, std::size_t n){
    int max=arr[0];
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]>max){
            max = arr[i];
        }}
        return max;
    }
    // min
int arr_min(const int* arr, std::size_t n){
    int min=arr[0];
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]<min){
            min = arr[i];
        }}
        return min;
    }
    // среднее
double arr_average(const int* arr, std::size_t n){   
    double s = 0; 
for (std::size_t i = 0; i < n; ++i) { 
s += arr[i]; 
} 
s = s/n;
return  s;}
  // >0
 int arr_count_positive(const int* arr, std::size_t n){
    int positive=0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]>0){
            positive++;
        }}
        return positive;
    }   
 // <0
int arr_count_negative(const int* arr, std::size_t n){
    int negative=0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]<0){
            negative++;
        }}
        return negative;
    }
 //=0
int arr_count_zero(const int* arr, std::size_t n){
    int zero=0;
    for (std::size_t i = 0; i < n; ++i) {
        if (arr[i]==0){
            zero++;
        }}
        return zero;
    }
    // произведение всех
int arr_product(const int* arr, std::size_t n){
    int pr = 1; 
    for (std::size_t i = 0; i < n; ++i) { 
    pr *= arr[i]; 
    } 
    return pr;
}
    // медиана
double arr_median(const int* arr, std::size_t n){
    // сортируем
    int sort_arr[n];
    for (std::size_t i = 0; i < n; ++i){
        sort_arr[i]=arr[i];}
    for (std::size_t i = 0; i < n; ++i){
                bool swapped = false;
        for (std::size_t j = 0; j < n - i - 1; j++) {
            if (sort_arr[j] > sort_arr[j + 1]) {
                int temp = sort_arr[j];
                sort_arr[j] = sort_arr[j + 1];
                sort_arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped){ break;}
    }
    // ищем медиану
    std::size_t mid = n / 2;
    double med;
    if (n % 2 == 1) {
        med = static_cast<double>(sort_arr[mid]);
    } else {
        med = (static_cast<double>(sort_arr[mid - 1]) + sort_arr[mid]) / 2.0;
    }
    return med;
}