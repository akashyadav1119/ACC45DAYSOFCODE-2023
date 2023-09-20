#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;  
    std::cin >> t;
    while(t--){
        int n,h,f=1;
        cin>>n>>h;
        int arr[n];
        for(int i =0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int i=n-1;
        for(;i>=0;i--){
            
            if(h-arr[i]>0){
                h-=arr[i];
            }
            else{
                f=0;
                break;
            }
        }
        if(f==1)
            cout<<0<<endl;
        else
            cout<<arr[i]<<endl;
    }
	return 0;
}
