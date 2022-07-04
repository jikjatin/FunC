#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int main(){
    int no,guess,nguesses=1;
    srand(time(0));
    no=rand()%100 +1;
    while (guess!=no)
    {
        printf("Enter no:");
        scanf("%d",&guess);
        if(guess!=no)
        (guess>no)?printf("lower value please:"):printf("higher value please:");
    }
    return 0;
}