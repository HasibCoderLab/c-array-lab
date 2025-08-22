
// ================================================
//               * Language: C
//               * Topic: Array
// ===============================================

// example 1️⃣

#include <stdio.h>
int main(){
    int marks [3];
    printf("Phy : ");
    scanf("%d" , &marks[0]);

    printf("Chemy : ");
    scanf("%d" , &marks[1]);

    printf("Bio : ");
    scanf("%d" , &marks[2]);
    printf(" Phy = %d  Chemy = %d  bio  = %d\n",  marks[0], marks[1], marks[2]);
    return 0;
}

//  ==================  Traverse an array ========

#include <stdio.h>
int main()
{
    int NID[5];
    // input
    int *ptr = &NID[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = ", i);
        // scanf("%d", (ptr + i));
        scanf("%d", &NID[i]);

    }

    // output
    for (int i = 0; i < 5; i++)
    {
        // printf("%d index =  %d\n", i, *(ptr + i));
        printf("%d  index = %d\n" ,i, NID[i] );
    }

    return 0;
}

//  ==================  Traverse an array   0.2 Version  ========
#include <stdio.h>
int main(){
    int NID[5];
    // input 
    int *ptr = &NID[0];
    for(int i =0 ; i<5; i++){
        printf(" %d index =  " ,i );
        scanf("%d" , &NID[i]);
    }
    for(int i =0 ; i<5 ; i++){
        printf("%d index =  %d\n" , i , NID[i]);
    }
}

#include <stdio.h>
int main(){

return 0;
}



// ==========  function array ===================


#include <stdio.h>
void printNumbers(int arr[] , int n);
int main(){
     int arr[] = {1,2,3,4,5,6,7};
     printNumbers(arr , 7);// function call
return 0;
}
// function Definition
void printNumbers(int arr[] , int n){
    for(int i =0; i<n ; i++){
        printf(" %d\t",arr[i]) ;
    }
    printf("\n");

}

// ==========  function array 2.0 ===================


#include <stdio.h>
void printN(int *arr, int n);
int main(){
    int arr[] = {12,13,14,15,16,17, 1 ,7};
printN(arr , 8);
return 0;
}
void printN(int *arr , int n){
    for(int i = 0; i<n ; i++){
        printf("%d\t" , arr[i] );
    }
    printf("\n") ;
}

// 2D  array 


#include <stdio.h>
int main(){
    int marks[2][3];
    marks[0][0] = 98;
    marks[0][1] = 99;
    marks[0][3] = 100;


    marks[1][0] = 95;
    marks[1][1] = 96;
    marks[1][3] = 10;
return 0;
}



// #include <stdio.h>
// int main(){
// return 0;
// }

// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟