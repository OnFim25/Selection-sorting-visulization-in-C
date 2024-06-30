#include <stdio.h>
#include <time.h>
#define size 40 //the number of array elements
#define range 150 //max possible value of array elements. minimum is 0

int arr[size];

void sorting(){ //selection sorting
    int min, pos, temp, temp_arr[size];

    for(int i = 0; i < size; i++){  //temp_arr[] is used only for displaying
        temp_arr[i] = arr[i];       // unsorted array
    }

    for(int i = 0; i < size; i++){
        system("cls");

        printf("UNSORTED ARRAY :\n");
        for(int i = 0; i < size; i++){//display unsorted array values
            printf("%d, ", temp_arr[i]);
        }
        printf("\n\n");

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

        display(i); //sorted position is shown diffrently
                    //refer display()


        for(int k = 0; k < 100000000; k++); //delay to show sorting

    }
    printf("\n");



}

//display as graph
void display(int posi){ //posi is the position of the current sorted locatoin
    for(int i = 0; i < size; i++){
            printf("%d\t", arr[i]); //display sorting process on the left side
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

    srand(time(NULL)); //taking time as seed for random values

    for(int i = 0; i < size; i++){//array of random values are selected
        arr[i] = rand() % range;
    }
    printf("UNSORTED ARRAY :\n");
    for(int i = 0; i < size; i++){//display array
        printf("%d, ", arr[i]);
    }
    printf("\n\n");
    display(size);

    printf("PRESS ENTER KEY TO START SORTING PROCESS");
    getchar(); // waits for an enter key press
    sorting();

    printf("SORTED ARRAY :\n");
    for(int i = 0; i < size; i++){//display array
        printf("%d, ", arr[i]);
    }
    printf("\n\n");
    return 0;
}
