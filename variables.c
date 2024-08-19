#include <stdio.h> 
#include<stdbool.h>

//variable = allocated space in memory to store a value we prefer to variables 
//   name to access the stored value -> need to declare type of data 


int x; // declaration
 // x =123;// initialization
int y =321; // declaration + initialization 


// if number overflows than we get minimum of range of data type


int age = 21; //integer -> 4 bytes (-2,14,147,483,648 to 2,14,147,483,647) -> %d
unsigned int id = 1000; //unsigned integer -> 4 bytes (0 to 4,294,967,295) -> %u

long long int l = 1000000000000000000; // 8 bytes (64 bits) -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 -> %lld
unsigned long long int k = 1000000000000000000; // 8 bytes (64 bits) 0 to 18,446,744,073,709,551,615 -> %llu

float gpa =2.05; //floating point number -> 4 bytes (32 bits) 6-7 digits precision -> %f
double d= 3.14545455455555666644; // 8 bytes (64 bits) 15-16 digits precision -> %lf

char f = 100; // 1 byte (8 bits) -128 to 127 -> %d or  %c  number or character
unsigned char g = 255; // 1 byte (8 bits) 0 to 255 -> %d or %c number or character

short int h = 1000; // 2 bytes (16 bits) -32,768 to 32,767 -> %d
unsigned short int i = 65535; // 2 bytes (16 bits) 0 to 65,535 -> %d

bool e= true; // 1 byte (8 bits) 0 or 1 -> %d

char grade = 'c'; //single character
char name[] ="Bro"; // array of characters



int main() {


 printf("Hello %s\n", name);
 printf("You are %d yaers old\n",age);
 printf("Your average grade is %c\n",grade);
 printf("Your gpa is %f\n",gpa);
 return 0;

}