#include <iostream>

using namespace std;

int main()
{
   int number1, number2;
   int sum,subtraction,muliplication,divitoin,modulus;
   //sumation
   cout<<"Sum Of Two Numbers \n";
   cout <<"Enter First Namber: " ;
   cin>>number1;
   cout <<"Enter 2nd Number: ";
   cin>>number2;
   sum = number1+number2;
   cout<<"Sum of this number is:" << sum <<endl;
   //Subtraction 
   cout<<"Subtraction of Two numbers \n";
   cout<<"Enter 1st number: ";
   cin>> number1;
   cout<<"Enter 2nd number: ";
   cin>>number2;
   subtraction = number1 - number2;
   cout<<"Subtraction of this Number is: "<<subtraction <<endl;
   //Muliplication
   cout<<"Muliplication of two Numbers \n";
   cout << "Enter 1st Number: ";
   cin>>number1;
   cout<<"Enter 2nd Number: ";
   cin>>number2;
   muliplication = number1 * number2;
   cout <<"Muliplication of two Numbers is:" <<muliplication <<endl; 
   //Divition
   cout<<"Divition of two Numbers \n";
   cout << "Enter 1st Number: ";
   cin>>number1;
   cout<<"Enter 2nd Number: ";
   cin>>number2;
   divitoin = number1 / number2;
   modulus = number1 % number2;
   cout <<"Divition of two Numbers is:" <<divitoin <<endl;
   cout <<"And Modulus is:" <<modulus;
  
    return 0;
}
