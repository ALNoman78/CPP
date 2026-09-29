#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, choice, value, pos;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n1. Insert";
    cout << "\n2. Delete";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter value to insert: ";
        cin >> value;

        cout << "Enter index: ";
        cin >> pos;

        for (int i = n; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos] = value;

        n++;

        cout << "Updated array: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    else if (choice == 2)
    {
        cout << "Enter index to delete: ";
        cin >> pos;

        for (int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Updated array: ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}
