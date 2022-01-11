#include <stdio.h>
#include <stdlib.h>

struct Array{
    int size;
    int *A;
    int length;
};

void optionSelect(struct Array *array){
    int n;
    int inx,val;
    printf("1. Display Array \n2. Insert value at Index \n3. Delete Element at Index \n4. Linear Search \n5. Binary Search \n6. Recursive Binary Search \n7. Exit \n");
    scanf("%d",&n);
    if(n==2){
        printf("Enter Value and Index \n");
        scanf("%d %d",&val,&inx);
    }
    else if(n==3){
        printf("Enter Index to be deleted \n");
        scanf("%d",&inx);
    }
    else if(n==4){
        printf("Enter the value to be searched \n");
        scanf("%d",&val);
    }
    else if(n==5 || n==6){
        printf("Enter the Value to be searched, it'll work properly if the array is sorted otherwise use linear Search\n");
        scanf("%d",&val);
    }
    switch (n)
    {
    case (1):
        displayArray(array);
        break;
    case (2):
        insertAt(array,inx,val);
        break;
    case (3):
        deleteAt(array,inx);
        break;
    case (4):
        linearSearch(array,val);
        break;
    case (5):
        binarySearch(array,val);
        break;
    case (6):
        printf("Value is %d\n",recursiveBinarySeach(array,val,0,array->length-1));
        optionSelect(array);
        break;
    case (7)://break out
        break;
    }
}

int displayArray(struct Array *array){
    for(int i=0;i<array->length;i++){
        printf("Element %d\n",array->A[i]);
    }
    optionSelect(array);
};

int insertAt(struct Array *array,int index,int value){
    if(array->length<array->size){
        for(int i=array->length;i>=index;i--){
            array->A[i]=array->A[i-1];
        }
        array->A[index] = value;
        array->length++;
    }
    optionSelect(array);
};

int deleteAt(struct Array *array,int index){
    for(int i=index;i<array->length;i++){
        array->A[i]=array->A[i+1];
    }
    array->length--;
    optionSelect(array);
};

int swap(struct Array *array,int current,int previous){
    if(current!=0){
        printf("Using Transposition shifting element to left by one index \n");
        int temp = array->A[previous];
        array->A[previous] = array->A[current];
        array->A[current] = temp;
    }
    optionSelect(array); 
}

int linearSearch(struct Array *array,int value){
    for(int i=0;i<array->length;i++){
        if(array->A[i]==value){   
            printf("%d is at index: %d\n",value,i);        
            swap(array,i,i-1);
            break;
        }
    }
    return -1;
}

int binarySearch(struct Array *array,int value){
    int l,h,mid;
    l=0;
    h=array->length-1;
    while(l<=h){
        mid=l+h/2;
        if(array->A[mid]==value){
            printf("Element is at Index :%d\n",mid);
            break;
        }
        else if(array->A[mid]>value)
        h = mid-1;
        else if(array->A[mid]<value)
        l = mid+1;
    }
    optionSelect(array);
}

int recursiveBinarySearch(struct Array *array,int value,int l,int h){
    int mid;
    mid=l+h/2;
        if(array->A[mid]==value){
            printf("Element is at Index :%d\n",mid);
            return mid;
        }
        else if(array->A[mid]>value){
            recursiveBinarySeach(array,value,l,mid-1);
        }
        else if(array->A[mid]<value){
            recursiveBinarySeach(array,value,mid+1,h);
        }
    return -1;
}

int main(){
    struct Array arr;
    printf("Enter the size of array \n");
    scanf("%d",&arr.size);
    printf("Enter the length of array \n");
    scanf("%d",&arr.length);
    while(arr.length>arr.size){
        printf("Length can't be greater than size, length is set to %d \n",arr.size-1);
        arr.length = arr.size-1;
    }
    arr.A = (int *)malloc(arr.length);
    printf("Enter elements in sorted manner (Binary Search) \n");
    for(int i=0;i<arr.length;i++){
        scanf("%d",&arr.A[i]);
    }
    optionSelect(&arr);
}
