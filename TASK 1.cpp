#include <iostream>
using namespace std;
int main(){
int x;
    cout << "Enter a number: ";
    cin>>x;
     cout<<"The factors of the given number are : " ;
   for (int i = 1; i <= x; i++) {
        if (x%i==0) {
            cout<<i<<endl;
         }
    }
    return 0;
}