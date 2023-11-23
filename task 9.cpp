#include <iostream>
using namespace std;

int main()
{
    int  array[5], X, ans , x, y, z;

    bool result = false;
    cout<<"Enter a value of integer X: ";
    cin>>X;
    
    cout<<"Enter integers for array: "<<endl;
    for (int x = 0; x<5; x++) {
        cin>>array[x];
    }

    cout<<"Triplets that sum up to the given number are = ";
    for ( x = 0; x<5; x++) {
        for ( y = 0; y<5; y++) {
            if (x == y)
                continue;

            for ( z = 0; z<5; z++) {
                if (z == x || z == y)
                    continue;

                ans = array[x] + array[y] + array[z];
                if (ans == X) {
                    cout<<" ("<<array[x]<<", "<<array[y]<<", "<<array[z]<<")";
                    result = true; }
            }
        }}
    if (result == false) {
        cout<<" 0";
    }
    return 0;
}