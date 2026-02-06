#include <stdio.h>

int main() {
	int num,m,sum=0;
	scanf("%d",&num);
	
	while(num!=0){
	    m = num%10;
	    sum=sum*10+m;
	    num/=10;
	}
    printf("%d",sum);
    
    return 0;
}

