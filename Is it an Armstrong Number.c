#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, count=0,original, rem;
    int temp,sum = 0;
    scanf("%d",&num);
    original=num;
    while(num!=0){
        num/=10;
        count++;
    }
    temp = original;
    while(temp!=0){
        rem = temp%10;
        sum= sum+pow(rem,count);
        temp/=10;
    }
    
    if(sum==original){
        printf("true");
    }
    else{
        printf("false");
    }
    
    
    return 0;
}
