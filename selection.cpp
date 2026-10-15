#include <iostream>
using namespace std;

int main() {
    int numbers[] = {64, 25, 12, 22, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size - 1; i++) {
        int smallestIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (numbers[j] < numbers[smallestIndex]) {
                smallestIndex = j;
            }
        }

        swap(numbers[i], numbers[smallestIndex]);
    }

    cout << "Sorted numbers: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}