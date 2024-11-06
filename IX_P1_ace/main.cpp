#include <bits/stdc++.h>

using namespace std;

int main()
{
    ifstream fin("ace.in");
    ofstream fout("ace.out");
    int i,j,r;
    int P,N,M,a[1002][1002];
    fin>>P>>N>>M;
    for(i=N;i>=1;i--){
        for(j=M;j>=1;j--){
            fin>>a[i][j];
        }
    }
    if(P==1){
        r=1;i=2;
        for(j=i+1;j<=M;j++){
            if(a[1][j]*(i-1)>a[1][i]*(j-1)){
                r++;
                i=j;
            }
        }
        r++;j=2;
        for(i=j+1;i<=N;i++){
            if(a[i][1]*(j-1)>a[j][1]*(i-1)){
                r++;
                j=i;
            }
        }
        fout<<r;
    }
    fout.close();
    return 0;
}
