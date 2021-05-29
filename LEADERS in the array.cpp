//LEADERS in the array
#include<bits/stdc++.h>
using namespace std; 
typedef long long int ll;
int main() 
{
    ll t;
    cin>>t;
    while(t--){
    ll size;
    cin>>size;
    ll arr[size];
    for(ll i=0;i<size;i++){
        cin>>arr[i];
    }
    ll arr1[size];
    ll k=0;
	ll max_from_right = arr[size-1]; 
	arr1[k++]=max_from_right;
	for (int i = size-2; i >= 0; i--) 
	{ 
		if (max_from_right <= arr[i]) 
		{		 
			max_from_right = arr[i]; 
			arr1[k++]=max_from_right;
		} 
		
	}
	for(ll i=k-1;i>=0;i--){
	    cout<<arr1[i]<<" ";
	}
	cout<<endl;
    }
	return 0; 
}	 
