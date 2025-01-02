#include <iostream>
using namespace std;
#include <vector>
#include <climits>  // Include this for INT_MIN

int main()
{
    vector<int> arr = {0, 0, 1, 1, 0, 1, 0, 0,-1};
   int min=INT_MAX;
//    cout<<arr.size();
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]<min)
    {
        min=arr[i];
    }
  }
  cout<<"minium number is "<<min;
}