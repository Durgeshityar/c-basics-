#include <stdio.h> 


int main() {

    int x = 5;
    int y =2;

// while dividing when dealing with integers -> cast division to float
//augmented assigment operator = += -= *= /=   -> x+=10 euqals x=x+10


    float z= x/ (float)y;
    printf("%f",z);

    

    return 0; 
}