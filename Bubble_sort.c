#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int a[5];
	int c;
	bool Swap;
	for(int i = 0; i < 5;i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 4; i >= 0; i--)
    {
        Swap = 1;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1])
            {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
                Swap = 0;
            }
        }
        if (Swap == 1)
            break;
    }
	for(int i = 0; i < 5; i++) 
		printf("%d\n", a[i]); 
	return 0;
}

