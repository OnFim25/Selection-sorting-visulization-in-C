#include <stdio.h>
#include <time.h>
#define size 25
#define range 100

int arr[size];

void sorting(){
    int min, pos, temp;



    for(int i = 0; i < size; i++){
        system("cls");
        for(int i = 0; i < size; i++){
            printf("%d, ", arr[i]);
        }
        printf("\n");
        min = arr[i];
        for(int j = i; j < size; j++){
            if(min >= arr[j]){
                min = arr[j];
                pos = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;

        display(i);
        for(int k = 0; k < 100000000; k++);
    }


    printf("\n");
    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
    }
}

void display(int posi){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < arr[i]; j++){
            if(i == posi){
                printf("|");
            }else{
                printf("o");
            }
        }
        printf("\n");
    }
}

int main(){



    srand(time(NULL));

    for(int i = 0; i < size; i++){
        arr[i] = rand() % range;
    }

    sorting();

    return 0;
}
