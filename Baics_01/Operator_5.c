#include <stdio.h>

int main(){
    // Arithmetic operators: +, -, *, /, %
    int ananya = 50;
    printf("Previous Marks: %d\n", ananya);

    ananya = ananya + 5;
    printf("Current Marks: %d\n", ananya);

    //Subtract>> -

    ananya = ananya - 50;

    printf("Marks after deduction: %d\n", ananya);

    //Multiplication >> *
    int shreya = 5;
    ananya = ananya * shreya;

    //Division >> /
    int bananas = 24;
    int children = 12; 
    int bananasPerStudent = bananas/children;

    // printf("Bananas distributed to each child is : %d", bananasPerStudent); 
    // printf("Marks in all 4 subjects: %d", ananya);

    // Modulus Operator => %
    int a = 24;
    int b = 12;

    //Incrementation ++
    a--;
    printf("%d\n", a);

    //Assignment Operator
        //Addition assignment
        int x = 3;
        x += 3;
        printf("%d\n", x);

        //Subtraction
        int y = 70;
        y -= x;
        printf("%d\n", y);

        //Multiplication
        int z = 5;
        z *= 3;
        printf("%d\n", z);

        //Division
        int g = 7;
        g /= 7;
        printf("%d\n", g);

        //Comparison Operator
            //Equal to comprison

            int prachi = 1;
            int anuradha = 100; 
            printf("%d\n", prachi == anuradha);
        
            //Greater than
            int salim = 20;
            int saurabh = 19;

            printf("%d\n", salim > saurabh);

            //Less than
            printf("%d\n", salim < saurabh);

        //Logical Operator
            //And
            char ArchanaFirst = 'A';
            char ArchanaLast = 'A';
            if((ArchanaFirst == ArchanaLast && ArchanaLast == ArchanaFirst)){
                printf("True\n");
            } 
            //Or
            int five = 5;
            int three = 3;
            
            // Returns 1 (true) because one of the conditions are true (5 is greater than 3, but 5 is not less than 4)
            printf("%d", five > 3 || five < 4);
            //Not           //true     //false
    return 0;
}