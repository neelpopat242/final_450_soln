#include<iostream>
using namespace std;

int main()
{
    using namespace std;
    int n;
    cin>>n;

    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int b[n];

    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];
    }
    
    cout<<"Reversed array is \n";
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }
    
    return 0;
}