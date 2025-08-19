//  increment
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

#include <stdio.h>
int main(){
int age = 12;
int *ptr = &age;
*ptr++;
printf("%u\n", ptr);
*ptr--;
printf("%u\n", ptr);

    return 0;
}