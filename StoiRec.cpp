#include <bits/stdc++.h>
using namespace std;

int string_to_integer(string str){
    if(str.length() == 1)
    return str[0]-'0';
    double y = string_to_integer(str.substr(1));
    double x = str[0] - '0';
    x = x*pow(10,str.length()-1)+y;
    return int(x);
}

int main()
{
    string a;
    cin>>a;
    cout<<string_to_integer(a);
    return 0;
}


 
