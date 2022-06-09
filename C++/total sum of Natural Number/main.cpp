#include <iostream>

using namespace std;

int main()
{
   int number, sum=0;
   cout<<"Enter a Natural number: ";
   cin>> number;
   for(int i = 0; i <= number ; i++){
       sum+=i;
   }
   cout<<"Total Sum of this Natural Numbewr is: "<<sum;
   
   return 0;
}
