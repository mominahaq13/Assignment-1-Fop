#include <iostream>
using namespace std;

int main()
{
    int  array[5] = {1,2,3,4,5},newArray[10];
    cout<<"Previously existing array: {";
    for (int i = 0; i<5; i++) {
        cout<<array[i];
        if (i==4)
            continue;
        cout<<", ";
    }
    cout<<"}"<<endl;

    for (int i = 0; i<5; i++) {
        newArray[i] = array[i];
    }

    cout<<"Enter 5 digits to add to previously existing array: "<<endl;
    for (int i = 5; i<10; i++)
        cin>>newArray[i];

    cout<<"New array will be : "<<endl;
    for (int i = 0; i<10; i++) {
        cout<<newArray[i]<<" ";
    }
    return 0;
}