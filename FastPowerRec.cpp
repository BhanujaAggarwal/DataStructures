#include <bits/stdc++.h>
using namespace std;

int fast_power(int a,int b){
    if(b==0) return 1;
    int small_power = fast_power(a,b/2);
    small_power *= small_power;
    if(b&1) return a*small_power;
    return small_power;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fast_power(a,b);
    return 0;
}
