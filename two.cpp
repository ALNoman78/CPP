#include <stdio.h>

int main()
{
    int course[100];
    int n, search, newCourse, pos;
    int found = 0;

    printf("Enter number of courses: ");
    scanf("%d", &n);

    printf("Enter course IDs:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &course[i]);
    }

    printf("\nRegistered courses: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", course[i]);
    }

    printf("\n\nEnter course ID to search: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++)
    {
        if (course[i] == search)
        {
            found = 1;

            for (int j = i; j < n - 1; j++)
            {
                course[j] = course[j + 1];
            }

            n--;
            printf("Course %d deleted.\n", search);
            break;
        }
    }

    if (found == 0)
    {
        printf("Course not found.\n");
    }

    printf("\nEnter new course ID: ");
    scanf("%d", &newCourse);

    printf("Enter position: ");
    scanf("%d", &pos);

    for (int i = n; i > pos; i--)
    {
        course[i] = course[i - 1];
    }

    course[pos] = newCourse;
    n++;

    printf("\nFinal course list: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", course[i]);
    }

    return 0;
}
