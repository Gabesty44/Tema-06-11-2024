#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("roboti2.in");
    ofstream fout("roboti2.out");
    long p[100000],v,x,ok;
    long n,i,max=1,ls=1;
    fin>>v>>n;
    for(i=0;i<n;i++)
        fin>>p[i];
    if(v==1)
    {
        i=1;
        x=p[0];
        ok=0;
        while(i<n && ok<2)
        {
            if(p[i]>p[i-1])
                ls++;
            else
            {
                if(ls>max)
                    max=ls;
                ls=1;
            }
            i++;
            if(i==n)
            {
                if(x>p[i-1])
                {
                    ls++;
                    i=1;
                }
                ok++;
            }
        }
        fout<<max;
    }
    else
    {

    }
    fin.close();
    fout.close();
    return 0;
}
