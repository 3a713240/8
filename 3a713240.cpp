#include "stdio.h"
#include "stdlib.h"
int main()
{
	int n ,k ;
	printf("sjdjgdkjkjedrkj:"); 
	scanf("%d",&k);
	   for(int q=2;q<=k;q++)
{
	 n = 0;
    for(int w=1;w<=k;w++) 
        if(q%w==0)
            n++;
            if(n==2)
		        printf("%d\t",q);
}
    printf("\n");
    system("pause");
    return 0;
}
