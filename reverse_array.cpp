// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int  main() {
   int arr[]={10,20,30,40,50,60};
   int i=0,j=5;
   while(i<j)
   {
     int temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
     i++;
     j--;
   }
   for(int k=0;k<6;k++)
   {
       cout<<arr[k]<<endl;
   }
    return 0;
}
