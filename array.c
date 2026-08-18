#include<stdio.h>
int main() {
    int marks[3];
    printf("enter the marks phy: ");
    scanf("%d\n",&marks[0]);

     printf("enter the marks che: ");
    scanf("%d\n",&marks[1]);

     printf("enter the marks eng: ");
    scanf("%d\n",&marks[2]);

    printf(" phy = %d , che = %d , eng = %d\n",marks[0],marks[1],marks[2]);

    return 0;
}