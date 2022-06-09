#include <iostream>

using namespace std;

int main()
{
   int day;
   cout <<"Enter a Day: ";
   cin>>day;
   
   switch(day){
       case 1:
           cout<<"Today is SaturDay";
           break;
        case 2:
            cout<<"Today is Sunday";
            break;
        case 3:
            cout <<"Today is MonDay";
            break;
        case 4:
            cout<<"Today is TuesDay";
            break;
        case 5:
            cout<<"Today is WednesDay";
            break;
        case 6:
            cout<<"Today is ThusDay";
            break;
        default:
            cout<<"Today is FriDay";
   }
}
