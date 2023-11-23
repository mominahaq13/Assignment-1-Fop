#include <iostream>
#include <string>
using namespace std;
int main()
{
    string stg1,stg2,rotate;
    rotate="";
    cout<<"Enter the first string:";
    cin>>stg1;
    cout<<"Enter the second string:";
    cin>>stg2;
    if (stg1 == stg2){
        for (int x=0;x<stg1.length();x++){
            rotate=stg1[x]+rotate;
        }
        cout<<"Strings are unequal. Rotated string is : ";
        cout<<rotate;
        }
        else {
            cout<<"Strings are unequal";
        
        }
    return 0;
}