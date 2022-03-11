#include <stdio.h>

int main()
{
    int marks[3][2];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter The marks of student %d in subject %d ;  ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("{\n");
    for (int i = 0; i < 3; i++)
    {
        printf(" {");
        for (int j = 0; j < 2; j++)
        {
            printf(" %d ", marks[i][j]);
        }
        printf("}\n");
    }
    printf("}\n");

    return 0;
}