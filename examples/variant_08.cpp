#include "arraylib.h"
#include <iostream>

using namespace std;

int main() {
    int brightness[] = {
        34, 128, 255, 76, 192,
        18, 144, 220, 96, 61,
        173, 245
    };
    const size_t n = sizeof(brightness) / sizeof(brightness[0]);
    cout << "Количество пикселей: " << n << "\n";
    cout << "Минимальная яркость: " << arr_min(brightness, n) << "\n";
    cout << "Максимальная яркость: " << arr_max(brightness, n) << "\n";
    cout << "Средняя яркость: " << arr_average(brightness, n) << "\n";
    cout << "Медиана яркости: " << arr_median(brightness, n) << "\n";
    int dark_pixels = 0;
    for (size_t i = 0; i < n; ++i) {
        brightness[i] = brightness[i]-80;
    }
    cout << "Количество темных пикселей (< 80): " <<arr_count_negative(brightness,n) << "\n";

    return 0;
}   