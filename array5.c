#include <stdio.h>
#include <stdlib.h>

int main()
{
 int l,n;
 int *ptr=NULL;
 scanf("%d",&n);
 for(int i;i<n;i++){
   scanf("%d",&l);
    ptr = (int*) malloc(l * sizeof(int));
   for(int j=0;j<l;j++){
     scanf("%d",&ptr[i]);
   }
   for(int k=0;k<l;k++){
     printf("%d",ptr[k]);
   }
   free(ptr);
 }
  return 0;
}
