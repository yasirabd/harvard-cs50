#include <cs50.h>
#include <stdio.h>

// Project Mario More Comfortable

void make_ladder(int n);

int main(void)
{
    while(true)
    {
        printf("Height: ");
        int height = get_int();

        if(height >= 0 && height <= 23)
        {
            make_ladder(height);
            return false;
        }
    }

}

void make_ladder(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2*i; k++)
        {
            if(k == i+1)
            {
                printf("  ");
            }
            printf("#");
        }
        printf("\n");
    }
}
