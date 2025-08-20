
// ================================================
//               * Language: C
//               * Topic: Array
// ===============================================

// example 1️⃣

// #include <stdio.h>
// int main(){
//     int marks [3];
//     printf("Phy : ");
//     scanf("%d" , &marks[0]);

//     printf("Chemy : ");
//     scanf("%d" , &marks[1]);

//     printf("Bio : ");
//     scanf("%d" , &marks[2]);
//     printf(" Phy = %d  Chemy = %d  bio  = %d\n",  marks[0], marks[1], marks[2]);
//     return 0;
// }

//  ==================  Traverse an array ========

// #include <stdio.h>
// int main()
// {
//     int NID[5];
//     // input
//     int *ptr = &NID[0];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index = ", i);
//         // scanf("%d", (ptr + i));
//         scanf("%d", &NID[i]);

//     }

//     // output
//     for (int i = 0; i < 5; i++)
//     {
//         // printf("%d index =  %d\n", i, *(ptr + i));
//         printf("%d  index = %d\n" ,i, NID[i] );
//     }

//     return 0;
// }

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

// #include <stdio.h>
// int main(){

// return 0;
// }
//

// #include <stdio.h>
// int main(){
// return 0;
// }

// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟