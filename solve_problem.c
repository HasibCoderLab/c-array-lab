// ================================================
//               * Language: C
//               * Topic: Pointer
//               *  solve practice Problem
// =================================================

//  // 👉👉  🔹🔹  Question 1️⃣ -  write a program to enter price of 3 times &
//  print their  final cost with  gst

// #include <stdio.h>
// int main()
// {
//     float price[3];

//     printf("Enter3 price : ");

//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     printf("Total price 1 = %f\n", price[0] + (0.18 * price[0]));
//     printf("Total price 2 = %f\n", price[1] + (0.18 * price[1]));
//     printf("Total  price 3 = %f\n", price[2] + (0.18 * price[2]));

//     return 0;
// }

// 👉👉  🔹🔹  Question 1️⃣ -  write a program to enter price of 3 times &
//  print their  final cost with  gst
// ==========================  versoin 2.0 =======================

#include <stdio.h>
int main()
{
    float price[3];
    printf("Enter 1st price  :");
    scanf("%f", &price[0]);

    printf("Enter 2nd price  :");
    scanf("%f", &price[1]);

    printf("Enter 3rd price :");
    scanf("%f", &price[2]);

    printf("Total price 1 = %f\n", price[0] + (0.18 * price[0]));
    printf("Total price 2 = %f\n", price[1] + (0.18 * price[1]));
    printf("Total price 3 = %f\n", price[2] + (0.18 * price[2]));

    return 0;
}
// #include <stdio.h>
// int main(){

// return 0;
// }

// 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟