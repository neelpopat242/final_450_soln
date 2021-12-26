#include<iostream>
using namespace std;
#include<bits/stdc++.h>



int main()
{
    int a[9]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    sort(a,a+9);
    for(int i=0;i<9;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}