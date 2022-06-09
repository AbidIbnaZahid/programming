#include <iostream>

using namespace std;

int main()
{
    int time;
	cout<<"Enter a Time: ";
	cin>>time;
    string result = (time < 20) ? "Good AfterNoon":"Good Night"; 
    cout<<result;
    return 0;
}
