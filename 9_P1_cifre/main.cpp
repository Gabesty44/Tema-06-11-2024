#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("cifre12.in");
    ofstream fout("cifre12.out");
    int V,suma=0,produs;
    long long n;
    int v[]={6,2,5,5,4,5,6,3,7,6};
    int p[]={2,7,2,3,3,4,2,5,1,2};
    fin>>V;
    if(V==1)
    {
        fin>>n;
        while(n!=0)
        {
            suma+=v[n%10];
            n/=10;
        }
         fout<<suma;
    }
    else
    {
        produs=1;
        fin>>n;
        while(n!=0)
        {
            produs*=p[n%10];
            n/=10;
        }
        fout<<produs-1;
    }

    fin.close();
    fout.close();
    return 0;
}
