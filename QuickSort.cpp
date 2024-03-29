#include <bits/stdc++.h>
using namespace std;

int partition(int *a,int s,int e){
    int i = s-1;
    int j = s;
    for(;j<e;j++){
        if(a[j]<=a[e]){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[e],a[i+1]);
    return i+1;
}

void quicksort(int *a, int s, int e){
    if(s>=e) return;
    int p = partition(a,s,e);
    quicksort(a,s,p-1);
    quicksort(a,p+1,e);
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
