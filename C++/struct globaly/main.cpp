// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


struct myinfo{
    string name;
    int age;
    string address;
};



int main() {
  
  myinfo abid;
  myinfo robin;
  
  abid.name="Abid Ibna Zahid";
  abid.age=24;
  abid.address="Kaichara";  
  
  robin.name="Robin";
  robin.age=24;
  robin.address="Sonatola";
   
   cout<< "My Name is: " << abid.name <<". My Age is: " << abid.age <<". My Address is: " << abid.address <<"\n";
   cout<< "My Name is: " << robin.name <<". My Age is: " << robin.age <<". My Address is: " << robin.address ;
   

    return 0;
}