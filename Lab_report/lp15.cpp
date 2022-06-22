#include<stdio.h>
int main()
{
	int n;
    printf("How many numbers:");
    scanf("%d",&n);

	int a[n];
	int i,j,temp;
	
	printf("Enter numbers: ");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}

    for(i=0;i<n;i++){

		for(j=i+1;j<n;j++){
		
		if(a[i]>a[j]){

			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    }	
	    }	
    }

    printf("Second Smallest Element = %d\n",a[1]);

    return 0;
}    
