#include <stdio.h>  
#include <math.h>  
#include <stdlib.h>  
      
// function declarations   
int addition();  
int subtraction();  
int multiplication();  
int division();  
int sq();  
int squareroot();  
void exit();  
  
int main()  
{  
    int opt;  
    do  
    {  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n");      
          
        scanf ("%d", &opt);
    // use switch statement to call the required function  
    switch (opt)  
    {  
        case 1:  
            addition(); /* It call the addition() function  to add the given numbers */  
            break;  
              
        case 2:  
            subtraction(); /* It call the subtract() function  to subtract the given numbers */  
            break;  
              
        case 3:  
            multiplication(); /* It call the multiply() function  to multiply the given numbers */  
            break; 
              
        case 4:  
            division(); // It call the divide() function  to divide the given numbers  
            break;  
              
        case 5:  
            sq(); // It call the sq() function  to get the square of given numbers  
            break; 
              
        case 6:  
            squareroot(); // It call the squareroot() function  to get the square root of given numbers //  
            break;  
              
        case 7:  
            exit(0); // It call the exit() function  to exit from the program  
            break; 
              
        default:  
            printf(" Please try again!! ");  
            break;                        
    }  
    printf (" \n \n --------------------- \n ");  
    } while (opt != 7);  
      
    return 0;        
}  
  
// function definition  
int addition()  
{  
    int num1, num2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    result = num1 + num2;    
    printf (" The addition of %d + %d is: %d", num1, num2, result);  
}  
  
// subtraction() function to subtract two numbers
int subtraction()  
{  
    int num1, num2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    result = num1 - num2;    
    printf (" The subtraction of %d - %d is: %d", num1, num2, result);  
}  
  
// multiplication() function to multiply two numbers  
int multiplication()  
{  
    int num1, num2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
    result = num1 * num2;    
    printf (" The multiply of %d * %d is: %d", num1, num2, result);  
}  
  
// division() function to divide two numbers  
int division()  
{  
    int num1, num2, result;  
    printf (" The first number is: ");  
    scanf ("  %d", &num1);  
    printf (" The second number is: ");  
    scanf ("  %d", &num2);  
      
    if (num2 == 0)  
    {  
        printf (" \n You cannot divide by zero. Please enter another value ");  
        scanf ("%d", &num2);        
    }  
    result = num1 / num2;    
    printf (" \n The division of %d / %d is: %d", num1, num2, result);  
}  
  
// sq() function to get the square of the given number  
int sq()  
{  
    int num1, result;  
    printf (" Enter a number to get the Square: ");  
    scanf ("  %d", &num1);  
      
    result = num1 * num1;    
    printf (" \n The Square of %d is: %d", num1, result);  
}  
  
// squareroot() function to get the square root of the given number   
int squareroot()  
{  
    float result;  
    int num1;  
    printf (" Enter a number to get the Square Root: ");  
    scanf ("  %d", &num1);  
  
    result = sqrt(num1);   
    printf (" \n The Square Root of %d is: %f", num1, result);  
}  
