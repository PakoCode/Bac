S1
1.a;
2.d;
3.a;
4.c;
5.b;
S2
a)10375;
b)1000 1010 1000;
d) in loc de al doilea while o sa pui x/p;

2.
  struct cerc{
    double raza;
    struct {
      double x, y;
    }centru;
  }c;

3.
  ou
  rosu;

S3
1.
void putere(int n, int d, int p){
    int d1 = 2, minp = 1000000;
    while(n != 1){
        int p1 = 0;
        while(n % d1 == 0){
            n = n / d1;
            p1 ++;
        }
        if(p1 < minp && p1 != 0) minp = p1, d = d1;
        d1 ++;
    }
    p = minp;
    cout << d << " " << p;
}
    
2.
  #include <iostream>

using namespace std;
int main() {
    int a[400][20], n, k, p = 1;
    cin >> n >> k;
    for(int i = 1; i <= n *k; i ++){
        for(int j = 1; j <= n; j ++){
            a[i][j] = p + j - 1;
        }
            if(i % k == 0) p ++;
    }
     for(int i = 1; i <= n *k; i ++){
        for(int j = 1; j <= n; j ++){
            cout << a[i][j];
        }
        cout << '\n';
    }
    return 0;
};
3.cam ez, citesti x si afisezi x/2 cat timp x != 0 ;)
    
