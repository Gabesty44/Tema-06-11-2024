#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("pic.in");
    ofstream fout("pic.out");
    int v[10001],V,n,i,m,suma,maxim,j,randmaxim;
    fin>>V;
    fin>>n;
    m=(n*(n+1))/2;
    for(i=1;i<=m;i++)
        fin>>v[i];
    if(V==1)
    {
        maxim=0;
        randmaxim=0;
        for(i=1;i<=n;i++)
        {
            suma=0;
            for(j=(i*(i-1)/2)+1;j<=i*(i+1)/2;j++)
                suma+=v[j];
            if(suma>maxim)
            {
                maxim=suma;
                randmaxim=i;
            }
        }
        fout<<randmaxim;
    }
    return 0;
}
