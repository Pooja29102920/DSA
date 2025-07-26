//Capitalizing the elements in a string if it is present in the other string
#include <stdio.h>
int main(){
      char s1[100],s2[100];
      int i,j;
      printf("Enter the first string: ");
      scanf("%s",&s1);
      printf("Enter the second string: ");
      scanf("%s",&s2);
      for(i=0;i<sizeof(s1);i++){
            for(j=0;j<sizeof(s2);j++){
                  if(s1[i]<=122&& s1[i]>96){
                        if(s1[i]==s2[j]){
                            s1[i]=s1[i]-32;
                        }
                  }
            }
      }
      printf("%s",s1);
      return 0;
}
