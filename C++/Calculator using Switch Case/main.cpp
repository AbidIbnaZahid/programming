#include <iostream>

using namespace std;

int main()
{
    int number, num1,num2,sum,sub,mul,divition,mudulas;
   cout<<"Calculator \n";
   cout<<"Press 0 for sum. Press 1 for Subtraction. Press 2 for Multiplication. Press 3 for Divition. Press 4 devition with Remainder\n";
   cout<<"Press a Number: ";
   cin>>number;
   
   if(number < 5){
       cout<<"Enter 1st Number: ";
       cin>>num1;
       
       cout<<"Enter 2nd Number: ";
       cin>> num2;
   }
   

    switch(number){
       case 0:
            sum = num1 + num2;
            cout<<"The Sum Of this Two Number is: " <<sum;
             break;
        case 1:
            sub = num1 - num2;
            cout<<"The Subtraction Of this Two Number is: " <<sub;
             break;
        case 2:
            mul = num1 * num2;
            cout<<"The Multiplication Of this Two Number is: " <<mul;
             break;
        case 3:
            divition = num1 / num2;
            cout<<"The Divition Of this Two Number is: " <<divition;
             break;
        case 4:
            mudulas = num1 % num2;
             divition = num1 / num2;
            cout<<"The Divition Of this Two Number is: " <<divition <<endl;
            cout<<"And The Remainder Of this Divition is: " <<mudulas;
             break;
        default:
            cout<<"Please Press Correct Number";
       
   }

}
