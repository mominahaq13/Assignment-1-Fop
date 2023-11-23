#include <iostream>
using namespace std;

int main()
{
    int num, x,y,fact  ;
    cout<<"Enter a number: ";
    cin>>num;
    x = num;
    while (x >= 2) {
        fact = 0;
        y = 1;
        while (y <= x) {
            if (x%y==0) {
                fact++;  }
            y++;
        }
        if (fact==2) {
            cout<<"The highest prime number less than the given number is: "<<x;
            break;
            }
        x--;
    }
    return 0;
}