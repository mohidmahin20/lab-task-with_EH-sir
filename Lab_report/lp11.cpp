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
	
	printf("Numbers: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
	for(i=0;i<n;i++){

		for(j=i+1;j<n;j++){
		
		if(a[i]<a[j]){

			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}	
	}	
}
	
	printf("Sorted Array in desceding order\n");
	
	for(i=0;i<n;i++){
	printf("%d\n",a[i]);	
	}
	
	return 0;
}
