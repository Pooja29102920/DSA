//rearranging the elements in an array by sending 0's to the end of the array
#include <stdio.h>
void main(){
      int j=0;
      int n,i;
      scanf("%d",&n);
      int ans[n];
      int arr[n];
      for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
      }
      for(i=0;i<=n-1;i++){
            if(arr[i]!=0){
                  ans[j]=arr[i];
                  j++;
            }
      }
      while(j<=n-1){
            ans[j]=0;
            j++;
      }
      for(i=0;i<n;i++){
            printf("%d",ans[i]);
      }
}
