#include <iostream>


int main() {

    int arr[] = {3, 7, 2, 9, 5};
    int max1 = arr[0];
    int max2 = arr[0];

    for ( const int x : arr) {
        if (x > max1) {
            max2 = max1;
            max1 = x;
        } else if (x > max2) {
            max2 = x;
        }
    }
    std::cout << "Максимум: " << max1 << "\n" << "второй максимум: " << max2 << "\n";
    return 0;
}