S1.
1d;
2b;
3a;
4c;
5c;

S2;
1;
2.
  struct proiect{
    char tema[21];
    int nrSurse;
    char denAdrSursa[101];
}p;

3. nnforrmmtii;
S3;

1.
  void paritate(int n, int &nr){
    int p = n % 2;
    for(int i = 1; i <= n; i ++){
        if(i % 2 == p && n % i == 0) nr ++;
    }
};

2. //ceva nu i bine
#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int a[21][21], m, n, k, ok = 1;
    cin >> m >> n >> k;
    for(int i = 1; i <= m; i ++){
        for(int j = 1; j <= n; j ++){
            cin >> a[i][j];
        }
    } 
    for(int i = 1; i <= m; i ++){
        ok = 1;
            if(i == k) i ++;
            if(i != k){
                for(int j = 1 ; j <= n; j ++){
                    if(a[i][j] == a[k][j]) ok = 0; break;
            }
            if(ok == 1) cout << "DA"; break;
        }
    }
    
    return 0;
}

3. // do it b ro
