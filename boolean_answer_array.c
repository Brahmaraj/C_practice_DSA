//The principal never does any mercy for renegades. Whether you are a school student or a teacher, the principal always needs an answer in the Boolean form (Task completed - 1, not completed - 0).There are N number of rows with M number of students in the class. Principal asked the teacher to teach only i th row which has the maximum number of students with their task completed and if all the students have not completed the task, then let everyone out of the class.
// Now help the teacher to know, which is the row in which most of the students have completed the task.
#include <stdio.h>
#include <stdlib.h>

int studentRow(int **arr,int row,int col){
    int i,compare=0,row_count,max=0;
    for(i=0;i<row;i++){
            for(int j=0;j<col;j++){
                max += arr[i][j];
            }
            if(compare<max){
                compare = max;
                row_count = i;
            }
            max = 0;
        }
        if(compare==0)
            return -1;
        return row_count;
}
int main(){
    int n;
    int row,col;
    int **array;
    int ele;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&row,&col);
        array = (int **)malloc(row*sizeof(int));
        for(int i=0;i<row;i++){
            array[i] = (int *)malloc(col*sizeof(int));
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                scanf("%d",&ele);
                array[i][j] = ele;
            }
        }
        printf("%d\n",studentRow(array,row,col));
    }
}