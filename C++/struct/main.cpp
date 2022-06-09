// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   struct{
       string brand;
       string name;
   }car1,car2;
   
   car1.brand = "Japan";
   car1.name= "Hunda";
   
   car2.brand = "USA";
   car2.name= "BMW";
   
   cout<< "Brand: " << car2.brand <<"\n";
   cout<< "Car Name: " << car2.name <<"\n\n";
   
   cout<< "Brand: " << car1.brand <<"\n";
   cout<< "Car Name: " << car1.name <<"\n";

    return 0;
}