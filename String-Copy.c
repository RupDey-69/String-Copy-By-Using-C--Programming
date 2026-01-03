// String Copy
#include <stdio.h>
#include <string.h>

int main()
{

    char str1[100];
    char str2[200];

    printf("Enter the  String:");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    strcpy(str2, str1);

    printf("After Copy String :%s", str2);

    return 0;
}