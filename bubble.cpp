#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the value array size : " << endl;
    cin >> n;

    vector<int> numbers(n);

    cout << "Elements value: " << endl;

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (numbers[j] > numbers[j + 1]) {
                swap(numbers[j], numbers[j + 1]);
            }
        }
    }

    for (int number : numbers) {
        cout << number << ' ';
    }
    cout << '\n';

    return 0;
}