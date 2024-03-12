#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int len;
        cin>>len;
        string str;
        cin>>str;
        int count=0;
        for(int i=0;i<len-2;){
            if(str[i]=='m' && str[i+1]=='a' && str[i+2]=='p'){
                count++;
                i+=3;
            }
            else if(str[i]=='p' && str[i+1]=='i' && str[i+2]=='e'){
                count++;
                i+=3;
            }
            else {
                i++;
            }
        }
        cout<<count<<endl;

    }
    return 0;
}