#include <stdio.h>

int main()
{
    int x, y;
    printf("\nNhap vao so nguyen duong x: ");
    scanf("%d", &x);

    printf("\nTat ca uoc cua so nguyen duong %d la: ", x);
    for(y = 1; y <= x; y++)
    {
        if(x % y == 0)
        {           
            printf("%d ", y);
        }
    }
    
    return 0;
}