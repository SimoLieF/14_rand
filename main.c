#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[7];
    int seed,max,num;
    int x;
    
    while(fgets(str, sizeof(str), stdin)){
        for(int i=0;i<3;i++){
            if(i==0)
                seed=atoi(str);
            if(i==1)
                max=atoi(str);
            if(i==2)
                num=atoi(str);
        }
        printf("%s", str);
    }
    x=seed;
    for(int i=0;i<num;i++){
       x=(48271*x) mod (2147483647 - 1);
       x=x/((2147483647+max-1)/max)+1;
       printf("%d\n",x);
    }

    return 0;
}
