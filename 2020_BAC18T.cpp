S1;
1d;
2c;
3a;
4d;
5b; 
  
S2;
1.
  a)3 2 1 1 2 3 2 1 1 2;
  b)(10,29), (50, 69) ??? nush
2. 3;
3. 4, 2;

S3;
1.
#include <iostream>

using namespace std;
void suma(int n, int &s){
    int c = 0, lcp = 0;
    int v[10]= {};
    while(n != 0){
        c = n % 10;
        if(c % 2 == 0) v[c] = 1;
        n = n / 10;
    }
    for(int i = 0; i <= 8; i += 2){
        if(v[i] == 1){
            s = s + i;
        }
    }
}
int main() {
    int n, s = 0;
    cin >> n;
    suma(n, s);
    cout << s;
    return 0;
};

2.
  #include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s[21][21];
    int n, k, lungk = 0, lungS = 0, x = 0, ok = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i ++){
        cin >> s[i];
    }
    lungk = strlen(s[k]);
    for(int i = 1; i <= n; i ++){
        if(i != k){
            lungS = strlen(s[i]);
            x = lungS - lungk;
            if(strcmp(s[k], s[i] + x) == 0){
                ok = 1;
                cout << s[i] << " ";
            }
        }
    }
  if(ok == 0) cout << "Nu exista";
    return 0;
};

3.
  #include <iostream>
#include <string.h>
using namespace std;
int main() {
   int x, lungmax = -1, lung = 0, k = 0;
   while(cin >> x){
       if(x % 10 == 0){
           lung ++;
           if(lung > lungmax) lungmax = lung, k = 0;
       }
   if(x % 10 != 0){ 
       if(lung == lungmax) k ++;
       lung = 0;
   }
   }
   cout << lungmax << " " << k;
    return 0;
}
