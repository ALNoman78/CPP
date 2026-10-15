#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> numbers(size);

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; ++i) {
        cin >> numbers[i];
    }

    int target;
    cout << "Enter the value to search for: ";
    cin >> target;

    int position = -1;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == target) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << target << " found at position " << position + 1 << '\n';
    } else {
        cout << target << " was not found\n";
    }

    return 0;
}