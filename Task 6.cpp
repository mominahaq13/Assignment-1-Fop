#include <iostream>
using namespace std;

int main()
{
    int dvd, dvs, rem, quo;
     cout<<"Enter the value of divisor: ";
    cin>>dvs;
    cout<<"Enter the value of dividend: ";
    cin>>dvd;
    
    rem = dvd;

    for (int i = 1; i <= dvd; i++) {
        rem -= dvs;

        if (rem < dvs) {
            quo = i;
            break;
        }
    }

    cout<<dvd<<" / "<<dvs<<" = "<<quo;
    return 0;
}