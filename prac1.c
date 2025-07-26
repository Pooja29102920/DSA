#include <stdio.h>
void main(){
	int n,i,j,max=0;
	printf("Enter the value of n: \n");
	scanf("%d",&n);
	int nums[n];
	for(i=0;i<n;i++){
		printf("Enter the integer: \n");
		scanf("%d",&nums[n]);
	}
	for(j=0;j<n;j++){
		max=nums[0];
		if(max<nums[j]){
			max=nums[j];
		}
	}
	printf("%d\n",max);
	int arr[sizeof(max)];
	for(i=0;i<n;i++){
		arr[sizeof(max)]=nums[i];
		if(arr[i]==NULL){
			arr[i]=0;
		}
		printf("%d\n",arr[sizeof(max)]);
	}
}

