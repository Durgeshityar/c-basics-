#include <stdio.h> 
#include<string.h>


int main() {

char name[25]; //bytes
int age;

printf("What is your name?\n");
fgets(name, 25, stdin); // accepts whitespaces
name[strlen(name)-1]='\0'; // gets rid of new line which comes by default from fgets


printf("How old are you?\n");
scanf("%d", &age); // does not accept whitespaces

printf("Hello %s, How are you\n", name);
printf("You are %d years old\n", age);

 
 return 0; 
}