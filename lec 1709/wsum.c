#include <stdio.h>
void main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 7};
    int n = sizeof(arr) / sizeof(int);
    int k, current = 0, max;
    printf("Enter a no.:");
    scanf("%d", &k);
    // if (k > n || k <= 0) {
    //     printf("Invalid window size\n");
    // }
    for (int i = 0; i < k; i++)
    {
        current += arr[i];
    }
    max = current;
    for (int i = k; i < n; i++)
    {
        current = current + arr[i] - arr[i - k];
        if (current > max)
        {
            max = current;
        }
    }
    printf("%d", max);
}