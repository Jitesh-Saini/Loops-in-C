#include<stdio.h>
int main() {
	int n,k,power=1,digit=0,temp,i=1,rem;
	printf("Enter a number : ");
	scanf("%d",&n);
	printf("Enter rotation : ");
	scanf("%d",&k);
	temp=n;

	while(temp>0) {
		digit++;
		temp/=10;
	}

	while(digit-1>0) {
		power=power*10;
		digit--;
	}

	if(k>0) {
		while(i<=k) {
			rem=n%10;
			n=n/10;
			n=(rem*power)+n;
			i++;
		}
	}
	
	else if(k<0)  {
	    i=-1;
		while(i>=k) {
			rem=n%power;
			n/=power;
			n=(rem*10)+n;
			i--;
		}
	}

	else {
		printf("%d",n);
		return 0;
	}



	printf("%d",n);

}