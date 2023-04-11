S1.
1.b;
2.a;
578 {5,7,8}
5
55
555
557
558
57
575
577
585
7


3.c;

4.d;

5.b;

S2.

1.

a) 202888
201920 20

c = 2
y = 202

c = 9
y = 2029

c = 1
y = 20290 - 1 = 20289

c = 0

c = 2

y = 202890 - 2 = 202888


b)900, 101
 
y = 9


d)cat timp x /= 0 executa

2. 12456
1 2 6 3 5 6 1

3.
s = stilou + 4 = ou
ou 
s = stil

s[0] = s[0] + 0 -1 = s - 1 = r
s[1] = s[0] + 3 * (2/2) = s[0] +  3 * (2/2) = s[0] - 3 = o
s[2] = s[0] + 2 - 1 = s
s[3] = s[0] + 3*(6/3 - 1) = s[0] + 3 * 1 = u

ou rosu ;)


S3.

1.
#include <iostream>

using namespace std;
bool prim(int n){
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3; i * i <= n; i ++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int suma (int n ){
    int s = 0;
    for(int d = 2; d <= n; d ++){
        if(n % d == 0 && prim(d) == 1){
            s = s  + d;
        }
    }
    return s;
}
int main() {
    int a[21][21], n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cin >> a[i][j];
        }
    }
    int aux = a[k][1];
    for(int i = 1; i < k - 1; i ++){
        a[k][i] = a[k][i + 1];
        
    }
    a[k][k - 1] = aux;
    for(int i = 1; i <= n; i ++){
        for(int j = 1; j <= n; j ++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


3.

#include <iostream>

using namespace std;
int main() {
    int v[10][3] = {}, mmax = - 1, x , i = 0;
    while(cin >> x){
        i ++;
        v[x % 10][1] ++;
        v[x % 10][2] = i;
        if(v[x % 10][1] > mmax )mmax = v[x%10][1];

    }
    for(int i = 0 ; i <= 9; i ++){
        if(v[i][1] == mmax) cout << v[i][2] << " ";
    }
    return 0;
}


