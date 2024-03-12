#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n-2;i++){
            int temp = abs(arr[i]);
            arr[i] -= temp;
            arr[i+1] -= (2 * temp);
            arr[i+2] -= temp;
        }
        int checked = 1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)checked = 0;
        }
        if(checked)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}