#include <iostream>

using namespace std;

int main()
{
    int time;
	cout<<"Enter a Time: ";
	cin>>time;
	if(time < 10){
		cout<<"Good Morning";
	}else if(time < 15){
   		 cout<<"Good AfterNoon";
    }else{
    	cout<<"Good Night";
    }
    return 0;
}
