#include <iostream>
using namespace std;


int main() {
#define size 6	
int array[size], x,y,a;
   for(x=0;x<size;x++)
   {
   	cout<<"Enter the values of array: "<<endl;
   	cin>>array[x];   }
      
      for(x = 0; x < size-1; x++) { 
      
     
      for(y = 0; y < size-1-x; y++) {

         if(array[y] > array[y+1]) {
            a = array[y];
            array[y] = array[y+1];
            array[y+1] = a;}

}  }
   cout<<"After sorting , the array becomes :"<<endl;
 
   for(x = 0; x < size; x++) {
      cout << array[x] << " ";
   }


	return 0;
}