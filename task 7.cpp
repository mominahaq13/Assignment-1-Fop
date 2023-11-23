#include <iostream>
#include <string>
using namespace std;

int main()
{
    string string, ans;
    bool letter;

    cout<<"Enter a String: ";
    cin>>string;
    ans = "";

    for (int i = 0; i < string.length(); i++) {
        letter = false;
        for (int j = 0; j < ans.length(); j++) {
            if ( string[i] == ans[j] ) {
                letter = true;
            }
        }

        if (letter == false) {
            ans += string[i];
        }
    }

    cout<<"Changed String: "<<ans;
    return 0;
}