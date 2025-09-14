#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the no of element of first array";
    cin>>n;
    vector<int>a(n);
    cout<<"enter the element of first array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the element of array is";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}