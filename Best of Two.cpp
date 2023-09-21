#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int arr1[3];
	    int arr2[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>arr1[i];
	    }
	    for(int i=0;i<3;i++)
	    {
	        cin>>arr2[i];
	    }
	    sort(arr1,arr1+3);
	    sort(arr2,arr2+3);
	    if(arr1[2]+arr1[1]==arr2[2]+arr2[1])
	    {
	        cout<<"tie"<<endl;
	    }
	    else if(arr1[2]+arr1[1]<arr2[2]+arr2[1])
	    {
	        cout<< "bob"<<endl;
	    }
	    else
	    {
	        cout<< "alice"<<endl;
	    }
	}
	return 0;
}
