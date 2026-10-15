#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;

    cout << "Enter number of students and courses: ";
    cin >> n >> m;

    int marks[n][m];
    int totals[n];

    cout << "Enter marks for each student:\n";
    for (int i = 0; i < n; i++) {
        totals[i] = 0;
        for (int j = 0; j < m; j++) {
            cin >> marks[i][j];
            totals[i] += marks[i][j];
        }
    }

    cout << "\nMarks matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << marks[i][j];
        }
        cout << '\n';
    }

    cout << "\nTotal marks of each student:\n";
    int highestStudent = 0;

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << totals[i] << '\n';

        if (totals[i] > totals[highestStudent]) {
            highestStudent = i;
        }
    }

    cout << "\nStudent with the highest total: Student "
        << highestStudent + 1 << " (" << totals[highestStudent]
        << " marks)\n";

    cout << "\nAverage marks of each course:\n";
    for (int j = 0; j < m; j++) {
        int courseTotal = 0;

        for (int i = 0; i < n; i++) {
            courseTotal += marks[i][j];
        }

        double average = static_cast<double>(courseTotal) / n;
        cout << "Course " << j + 1 << ": "
            << fixed << setprecision(2) << average << '\n';
    }

    return 0;
}
