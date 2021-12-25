#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int max(int arr[], int n){
    int k = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>k){
            k=arr[i];
        }
    }
    return k;
}

int min(int arr[], int n){
    int k = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]<k){
            k=arr[i];
        }
    }
    return k;
}
int main()
{   
    
    srand(time(0));
    int n=rand()%10; 
   
    int a[n] ;
    
    
    for(int i=0;i<n;i++){
        a[i]=rand()%100;
    }
    
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }  
    int max_num = max(a,n);
    int min_num = min(a,n);
    cout<<"Max "<<max_num<<" Min "<<min_num;
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i]<<" "<<i<<"  ";
    } 

    return 0;
}