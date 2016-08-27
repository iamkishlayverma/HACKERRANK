#include <iostream>
#include <bits/stdc++.h>
using namespace std;
char a[100005];
int main()
{
    int n,i;
    cin >> n;
    while(n--)
    {
        cin >> a;
        string s=a;
        if(next_permutation(s.begin(),s.end())== 0)
            cout << "no answer" <<endl;
        else
            cout << s << endl;
    }
    return 0;
}
