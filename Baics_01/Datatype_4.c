#include <stdio.h>

int main(){
    //Data Type
    //Integer

    int number = 9;
    printf("This is the number: %d\n", number);

    float decimal = 1.2345689; //7 digits after the decimal value 
    printf("This is the Decimal value of float: %f\n", decimal);

    double longdecm = 1.123456789101; //15 digits after the decimal value
    printf("This is the long decimal value: %lf\n", longdecm);

    char devansh = 'd'; //This is used for the character
    printf("This is the character value of Devansh is: %c\n", devansh);


    char name1 = 'S';
    char name2 = 'H';
    char name3 = 'R';
    char name4 = 'E';
    char name5 = 'Y';
    char name6 = 'A';

    printf("Formatted in Chars: %c%c%c%c%c%c\n", name1, name2, name3, name4, name5, name6 );

    char name[] = "Shreya";
    printf("Formatted in Strings: %s", name);

    return 0;
}