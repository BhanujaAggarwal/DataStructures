#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[],int l, int r, int x){
    if(r>=l){
        int mid = l + (r-l)/2;
        if(a[mid] == x) return mid;
        if(a[mid]>x) return binary_search(a,l,mid-1,x);
        return binary_search(a,mid+1,r,x);
    }
    return -1;
}

int main()
{
    int n,x; 
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    cout<<binary_search(a,0,n,x) + 1;
    return 0;
}


 
