#include <stdio.h>
#include <math.h>

int main ()
{
    int x;
    int count = 0;
    printf("\nNhap vao so nguyen duong x: ");
    scanf("%d", &x);

    if(x <= 1)
        {
            printf("%d khong phai la so nguyen to!\n", x);
            return 1;
        }

    for(int i = 2; i <= sqrt(x); i++)
        {
            if( x % i == 0)
                {
                    count++;
                    break;
                }    
        }

    if(count == 0)
        {
            printf("%d la so nguyen to!\n", x);
        }
            else
                {
                    printf("%d khong phai la so nguyen to!\n", x);
                }

    return 0;
}