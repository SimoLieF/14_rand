#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) 
{
    char str[7];
    int cnt=0;
    unsigned int seed,max,num;
    long long x;
    
    while(fgets(str, sizeof(str), stdin)){
        if(cnt==0)
            seed=atoi(str);
        if(cnt==1)
            max=atoi(str);
        if(cnt==2)
            num=atoi(str);
        cnt++;
    }
        //printf("XXX_%d_XXX\n",max);
        //printf("SSS_%d_SSS\n",seed);
        //printf("%s", str);
    x=seed;
    /*for(int i=0;i<num;i++){
       x=(48271*x)%(2147483647 - 1);
       x=x/((2147483647+max-1)/max)+1;
       printf("%d\n",x);
    }*/
    x=(48271*1)%(2147483647 - 1);
       x=48271/((2147483647+2147483647-1)/2147483647)+1;
       printf("%ld\n",x);

    return 0;
}
