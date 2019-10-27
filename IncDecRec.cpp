#include <bits/stdc++.h>
using namespace std;

void print_dec(int n){
    if(n==0) return;
    cout<<n<<" ";
    print_dec(n-1);
}

void print_inc(int n){
    if(n==0) return;
    print_inc(n-1);
    cout<<n<<" ";
}

int main()
{
    int a,b;
    cin>>a>>b;
    print_dec(a);
    cout<<endl;
    print_inc(b);
    return 0;
}


 
