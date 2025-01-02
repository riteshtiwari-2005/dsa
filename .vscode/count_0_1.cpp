#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int one=0,zero=0;
    vector<int> arr={0,0,1,1,0,1,0,0,1};
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==0)
        {
            zero++;
        }
        else
        {
            one++;
        }

    }

    cout<<"number of zero is "<<zero<<endl<<"number of One is "<<one;
}