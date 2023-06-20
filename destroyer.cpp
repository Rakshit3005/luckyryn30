#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int l[n];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        sort(l, l + n);
        int a[l[n - 1] + 1];
        for (int i = 0; i <= l[n - 1]; i++)
        {
            a[i] = 0;
        }
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            if (l[i] == p)
            {
                a[p]++;
            }
            else if (p < l[n - 1])
            {
                p++;
                i--;
            }
            else
            {
                break;
            }
        }
        /*for (int i = 0; i <= l[n - 1]; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;*/
        bool ans=true;
        for(int i=0;i<l[n-1];i++)
        {
            if(a[i]<a[i+1])
            {
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}