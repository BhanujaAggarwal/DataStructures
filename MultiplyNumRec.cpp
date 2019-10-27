#include <bits/stdc++.h>
using namespace std;

int multiply_nums(int a,int b){
    if(a<b)
    return multiply_nums(b,a);
    else if(b!=0)
    return a+multiply_nums(a,b-1);
    else return 0;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<multiply_nums(a,b);
    return 0;
}


 
