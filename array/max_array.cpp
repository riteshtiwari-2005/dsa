#include <iostream>
using namespace std;
#include <vector>
#include <climits>  // Include this for INT_MIN

int main()
{
    int one = 0, zero = 0;
    vector<int> arr = {0, 0, 1, 1, 0, 1, 0, 0, 6};
   int max=INT_MIN;
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i]>max)
    {
        max=arr[i];
    }
  }
  cout<<"maxium number is "<<max;
}