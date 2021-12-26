// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int k1=0;
        int k2=0;
        int k3=0;
        int i;
        
        for(i=0;i<n;i++){
            if(a[i]==0){
                k1++;
            }
            if(a[i]==1){
                k2++;
            }
            if(a[i]==2){
                k3++;
            }
        }
        for(i=0;i<k1;i++){
            a[i]=0;
        }
        for(i=k1;i<k2+k1;i++){
            a[i]=1;
        }
        for(i=k1+k2;i<k1+k2+k3;i++){
            a[i]=2;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends