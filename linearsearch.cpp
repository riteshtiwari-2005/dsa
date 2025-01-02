#include <iostream>
using namespace std;
#include <vector>

int  swap(vector<int> &arr,int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int main() {
    vector<int> arr = {0,1,0,1,0,1,0,1,0,1};
    int i=0,j=arr.size()-1;
    while(i<j)
    {
        if(arr[i]==1)
        {
swap(arr,i,j);
i++;
        }

    }
    return 0;
}


