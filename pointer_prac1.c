#include<stdio.h>
#include<stdlib.h>
struct Rectangle {
    int lenght;
    int breadth;
};
void changelenght(struct Rectangle *ptr1,int size){
    ptr1->lenght = size;
}
void initialize(struct Rectangle *ptr,int l,int b){
    ptr->lenght = l;
    ptr->breadth = b;
}
int area(struct Rectangle obj){
    return obj.lenght*obj.breadth;
}
int main(){
    int area_store;
    struct Rectangle r;
    initialize(&r,20,40);
    printf("%d\n%d\n",r.lenght,r.breadth);
    area_store = area(r);
    printf("Area before changing length %d\n",area_store);
    changelenght(&r,50);
    area_store = area(r);
    printf("Area after changing length %d\n",area_store);
    printf("%d\n%d",r.lenght,r.breadth);
}
