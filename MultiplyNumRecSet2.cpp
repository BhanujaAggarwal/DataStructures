#include <bits/stdc++.h>
using namespace std;

int multiply(int a,int b){
    if(a<0 && b<0)
    return multiply((-1*a), (-1*b));
    else if(a>0 && b<0)
    return multiply(b,a);
    else if(a>b) return multiply(b,a);
    if(b!=0)
    return a + multiply(a,b-1);
    else
    return 0;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiply(a,b);
    return 0;
}


 
