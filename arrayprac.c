#include <stdio.h>
#include <stdlib.h>

struct Array{
    int size;
    int *A;
    int length;
};

void displayArray(struct Array array){
    for(int i=0;i<array.length;i++ ){
        printf("Element %d\n",array.A[i]);
    };
};
void append(struct Array *array,int value){
    array->A[array->length]=value;
    array->length++;
};
void insertAtIndex(struct Array *array, int index, int value){
    for(int i=array->length;i>=index;i--){
        array->A[i]=array->A[i-1];
};
    array->A[index]=value;
    array->length++;
};
void deleteElement(struct Array *array,int index){
    for(int i=index;i<array->length;i++)
        array->A[i]=array->A[i+1];
    array->length--;
};

void swap(struct Array *arr,int *x,int *y){         //transpostition 'Improving Linear Search'
        int temp = *x;
        *x = *y;
        *y = temp;
};

int binarySearch(struct Array array,int key){ // array should be sorted when using binary
    int l,h,m;
    l=0;
    h=array.length-1;
    while(l<=h){
        m=(l+h)/2;
        if(array.A[m]==key)
            return m;
        else if(key<array.A[m])
            h=m-1;
        else 
            l=m+1;
    }
    return -1;
};

int recursiveBinarySearch(struct Array array,int l,int h,int key){
    int m=0;
    if(l<=h){
        m=(h+l)/2;
        if(key==array.A[m])
            return m;
        else if(key<array.A[m])
            return recursiveBinarySearch(array,l,m-1,key);
        else
            return recursiveBinarySearch(array,m+1,h,key);
    }
    return -1;
}

int linearSearch(struct Array *array,int key){
    for(int i=0;i<array->length;i++){
        if(array->A[i]==key){
            swap(array,&array->A[i],&array->A[i-1]);
            return i;
        }
    }
    return -1;
};

int main(){
    struct Array arr;
    int n,val;
    printf("Enter the Size of Array");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size);
    printf("Enter No. of Elements");
    scanf("%d",&arr.length);
    for(int i=0; i<arr.length;i++){
        scanf("%d",&arr.A[i]);
    }
    append(&arr, 10);
    printf("Enter value to be Inserted and index");
    scanf("%d %d",&val,&n);
    insertAtIndex(&arr,n,val);
    displayArray(arr);
    printf("Enter the index which should be deleted.");
    scanf("%d",&n);
    deleteElement(&arr,n);
    displayArray(arr);
    printf("Enter key to find in array using recursive binary search");
    scanf("%d",&n);
    printf("%d",recursiveBinarySearch(arr,0,arr.length-1,n));
    // printf("Enter element to search");
    // scanf("%d",&n);
    // printf("The element is at index %d\n",linearSearch(&arr,n));
    // displayArray(arr);
    // printf("Enter key to find in array using binary search");
    // scanf("%d",&n);
    // printf("%d",binarySearch(arr,n));
    return 0;
}
