#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 8, 6, 4, 5};
    int N = 6;

    int i = 0;
    int j = N - 1;
    int maxArea = 0;
    int currentArea = 0;
    int height = 0;

    while (i < j)
    {

        height = (arr[i] < arr[j]) ? arr[i] : arr[j];

        currentArea = height * (j - i);

        if (currentArea > maxArea)
        {
            maxArea = currentArea;
        }

        if (arr[i] < arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    printf("Heights: {1, 2, 8, 6, 4, 5}\n");
    printf("Calculated Max Area: %d\n", maxArea);

    return 0;
}