#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int cost1,cost2,cost3;
    int q1,q2,q3, budget;
    
    scanf("%d %d",&cost1,&q1);
    scanf("%d %d",&cost2,&q2);
    scanf("%d %d",&cost3,&q3);
    scanf("%d",&budget);
    float total,tax;
    total = cost1*q1+ cost2*q2+ cost3*q3;
    tax = total/10 +total;
    printf("Total (Before Tax): %.2f\n",total);
    printf("Total (After Tax): %.2f\n",tax);
    if(budget>=tax){
        printf("Within Budget");
    }
    else{
        printf("Over Budget");
    }
    return 0;
}
