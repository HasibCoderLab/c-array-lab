//  ================ increment
// #include <stdio.h>
// int main(){
//  int age = 10;
//  int *ptr = &age;
// printf("%u\n" ,ptr);
// *ptr++ ;
// printf("%u\n" ,ptr);

//     return 0;
// }

// =============   . decrement

// #include <stdio.h>
// int main(){
// int age = 12;
// int *ptr = &age;
// *ptr++;
// printf("%u\n", ptr);
// *ptr--;
// printf("%u\n", ptr);

//     return 0;
// }


//  ============     float increment ============
// #include <stdio.h>
// int main(){
// float price  = 20.00;
//  float *ptr = &price;
//  printf("Orginal Byets = %u\n" , ptr );
// *ptr++;
//   printf("increment Byets = %u\n" , ptr );
// *ptr--;
//   printf("decrement  / orginal  Byets = %u\n" , ptr );

//     return 0;
// }

//  ============     char increment ============
#include <stdio.h>
int main(){
char star = '*';
char  *ptr = &star;
printf("Orginal Byets =  %u\n" , ptr );
*ptr++ ;
printf("increment  Byets = %u\n" , ptr);
*ptr--;
printf("dicrement / Orginal Byets %u\n" , ptr) ;

    return 0;
}