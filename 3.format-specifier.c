#include <stdio.h> 


// format specifier % = defines and formats a type of data to be displayed

//%.1 = decimal precision
//%1 = minimum field width
// %- = left align

int main() {

    float item1 =5.75;
    float item2 = 3.5;
    float item3 = 100.9;
    printf("Item 1: $%.2f\n", item1); // . after % specifues how many decimals we want
    printf("Item 1: $%8.2f\n", item2); // poitivie number after . specifies how many characters we want alighned right
    printf("Item 1: $%-8.2f\n", item3); // negative number after . specifies how many characters we want alighned left
    
 
    return 0; 
}