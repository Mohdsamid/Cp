#include <stdio.h>
#include <conio.h>
// int main () {
//     int arr[5] = {10,20,30,40,50};
//     int first=arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i]=arr[i+1];
//     }
//     arr[4]=first;
//     for (int j= 0; j < 5; j++)
//     {
//         printf("%d",arr[j]);
//     }
int main()
{
    int arr[5];
    int check = 1;
    printf("enter the values of array:");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &arr[j]);
    }
    for (int i = 0; i < 5 / 2; i++)
    {
        if (arr[i] != arr[5 - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == 1)
    {
        printf("its a palindrome");
    }
    else
        printf("its not palindrome");
}
