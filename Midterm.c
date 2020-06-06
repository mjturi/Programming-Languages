#include <stdio.h>
#include <stdlib.h>

int* get_spaces(char str[]){
    int* hold;
    int count = 1;
    for (int i = 0; str[i] != 0; i++){
        if (str[i] == ' '){
            count++;
        }
    }
    hold = (int*)malloc(count*sizeof(int));
    count = 0;
    for (int i = 0; str[i] != 0; i++){
        if (str[i] == ' '){
            hold[count] = i;
            count++;
        }
    }
    hold[count] = -1;
    return hold;
}

char* starfire(char str[]){
    int size = 0;
    int count= 0;
    for (int i = 0; str[i] != 0; i++){
        size++;
        if (str[i] == ' ')
            count++;
    }
    int *index = get_spaces(str);
    char* newStr;
   newStr = malloc(size + (count*4) + 1);
    int j = 0;
    char temp[] = " the ";
    int k = 0;
    for(int i = 0; str[i] != 0; i++){      
        if (i == index[k] && k < count){
            for (int x = 0; x < 5; x++){
                newStr[j] = temp[x];
                j++;
            }
            k++;
        }
        else {
            newStr[j] = str[i];
            j++;
        }       
    }
    newStr[j] = '\0';
    return newStr;
}

int func (void* n){
    return 5;
}
void garnet (char c, void *ptr(int)){
    printf("%c %d", c, ptr);
}

int main(){
    unsigned int *data;
    data = malloc(sizeof(int) * 320);
    if (data != NULL){
        memset(data, 0, 320 * sizeof(int));
    }
    for (int i = 0; i < 320; i++){
        printf("%d ", data[i]);
    }
    

    // int test = func(4);
    // garnet('a', func(45));




    // char stringy[] = "This is a test";
    // int* hold = get_spaces(stringy);
    // char* stringy2 = starfire(stringy);
    // for (int i = 0; stringy2[i] != 0; i++){
    //     printf("%c", stringy2[i]);
    // }
    

}
//Problem 1: (WORKS)
// int data[5][5][5] = {1,1,1,1,1,20,1,1,1,1,1,1,1,1,1};
// int n = 5;
// int found = 0;
//     for (int row = 0; row<n && found == 0; row++){
//         for (int col = 0; col < n && found == 0; col++){
//             for (int layer = 0; layer < n && found == 0; layer++){
//                 if (data[row][col][layer] == 320)
//                     found = 1;
//             }
//         }
//     }
// if (found == 1)
//     printf("Found it!\n");

//Problem 2:
//(a) *racer = 22; is the same as racer[0] = 22;
//(b) *(*(img)+1)) = 89; is the same as img[0][1] = 89;
//(c) *(*(img+15)+2)) = 64; is the same as img[15][2] = 64;
//(d) *(**(rgb_img+5)+1) = 320; is the same as rgb_img[5][0][1] = 320;

//Problem 3:
// const char* myFun(char str[], char key){
//     for (int i = 0; str[i] != 0; i++){
//         if (str[i] == key){
//             if (str[i] >= 'A' && str[i] <= 'Z'){
//                 str[i] += 32;
//             }
//             else 
//                 str[i] -= 32;
//         }
//     }
//     return str;
// }

//Problem 4: (Super shitty but it works as of now)
// int* get_spaces(char str[]){
//     int* hold;
//     int count = 1;
//     for (int i = 0; str[i] != 0; i++){
//         if (str[i] == ' '){
//             count++;
//         }
//     }
//     hold = (int*)malloc(count*sizeof(int));
//     count = 0;
//     for (int i = 0; str[i] != 0; i++){
//         if (str[i] == ' '){
//             hold[count] = i;
//             count++;
//         }
//     }
//     hold[count] = -1;
//     return hold;
// }

//Problem 5:
// char* starfire(char str[]){
//     int size = 0;
//     int count= 0;
//     for (int i = 0; str[i] != 0; i++){
//         size++;
//         if (str[i] == ' ')
//             count++;
//     }
//     int *index = get_spaces(str);
//     char* newStr;
//    newStr = malloc(size + (count*4) + 1);
//     int j = 0;
//     char temp[] = " the ";
//     int k = 0;
//     for(int i = 0; str[i] != 0; i++){      
//         if (i == index[k] && k < count){
//             for (int x = 0; x < 5; x++){
//                 newStr[j] = temp[x];
//                 j++;
//             }
//             k++;
//         }
//         else {
//             newStr[j] = str[i];
//             j++;
//         }       
//     }
//     newStr[j] = '\0';
//     return newStr;
// }

// Problem 6: (Only need garnet declaration)
// int func (void* n){
//     return 5;
// }
// void garnet (char c, void *ptr(int)){
//     printf("%c %d", c, ptr);
// }

// Problem 7:
// unsigned int *data;
// data = malloc(sizeof(int) * 320);
// if (data != NULL){
//     memset(data, 0, 320 * sizeof(int));
// }

// Problem 8:
// free(data);

// Problem 9:
// argv[4]

// Problem 10:
// B

// Problem 11:
// D

// Problem 12:
// C
