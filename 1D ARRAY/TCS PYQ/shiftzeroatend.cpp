#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n; int arr[n]; 
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    // finding finrst netgative element
    int j  = -1; 
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i ; break;
        }
    }


    if(j== -1) {
        cout<<"no need to swap zeros";
        return 0;
    }

    for(int i = j+1 ; i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}

