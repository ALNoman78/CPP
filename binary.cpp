#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> numbers(size);

    cout << "Enter " << size << " numbers in ascending order: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    int target;
    cout << "Enter the value to search for: ";
    cin >> target;

    int left = 0;
    int right = size - 1;
    int position = -1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (numbers[middle] == target) {
            position = middle;
            break;
        } else if (numbers[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    if (position != -1) {
        cout << target << " found at position " << position + 1 << '\n';
    } else {
        cout << target << " was not found\n";
    }

    return 0;
}