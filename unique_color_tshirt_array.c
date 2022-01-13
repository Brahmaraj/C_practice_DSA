// Prepbuddy is very tasteful of clothes.He has N numbers of shirts hanging in the hanger in his wardrobe.
//Prepbuddy likes to wear different colored clothes. So, whenever he see there are two or more shirts with the same color, 
//he removes all the shirt of that color from his wardrobe. Now, he wants to know how many M unique color shirts are left in the wardrobe. 
//Prepbuddy wants you to find M .
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int *array;
    int count;
    int unique_elements=0;
    scanf("%d",&n);
    array = (int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(array[i]==array[j])
                    count++;
            }
        }
        if(count==0)
            unique_elements++;
    }
    printf("%d",unique_elements);
}