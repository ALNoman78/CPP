#include <iostream>
using namespace std;

int main()
{
    int choice;

    double amount1 = 0;
    double amount2 = 0;
    double amount3 = 0;

    string category1;
    string category2;
    string category3;

    do
    {
        cout << "\n==============================\n";
        cout << "   PERSONAL EXPENSE TRACKER\n";
        cout << "==============================\n";

        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Show Total Expense\n";
        cout << "0. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;


        // Add Expense
        if (choice == 1)
        {
            cout << "\nEnter expense amount: ";
            cin >> amount1;

            cout << "Enter category: ";
            cin >> category1;

            cout << "\nExpense added successfully!\n";
        }


        // View Expenses
        else if (choice == 2)
        {
            cout << "\n========== EXPENSE ==========\n";

            cout << "Amount: " << amount1 << " Tk\n";
            cout << "Category: " << category1 << endl;
        }


        // Total Expense
        else if (choice == 3)
        {
            double total;

            total = amount1 + amount2 + amount3;

            cout << "\nTotal Expense: "
                 << total << " Tk\n";
        }


        // Exit
        else if (choice == 0)
        {
            cout << "\nProgram ended.\n";
        }


        // Invalid choice
        else
        {
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 0);


    return 0;
}