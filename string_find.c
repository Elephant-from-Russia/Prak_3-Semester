#include <stdio.h>
#include <stdbool.h>
#define MAX_STR 255

int main(void)
{
	int i = 0;
	char c;
	char sbuffer[MAX_STR];
	// while(i != 8){
	// 	scanf("%c", &sbuffer[i]);
	// 	i++;
	// }
	// for(i = 0; i < 8; i++) {
	// 	printf("%c", sbuffer[i]);
	// }
	do {
		c = getchar();
		sbuffer[i] = c;
		i++;
	}
	while(c != '\n');

	bool Swap;
	for (int k = i; k >= 0; k--)
    {
        Swap = 1;
        for (int j = 0; j < k; j++)
        {
            if (sbuffer[j] > sbuffer[j + 1])
            {
                c = sbuffer[j];
                sbuffer[j] = sbuffer[j + 1];
                sbuffer[j + 1] = c;
                Swap = 0;
            }
        }
        if (Swap == 1)
            break;
    }
	// char l;
	// if ('a' < 'b') {l = 'a'; printf("%c", l);}
	int l = 0;
    for(int k = 2; k < i - 1; k++) {
    	if(sbuffer[k] == sbuffer[k+1]) {
    		l++;
    	}
    	else {
    		printf("%c - %d\n", sbuffer[k], l+1);
    		l = 0;
    	}
	}

	return 0;
}