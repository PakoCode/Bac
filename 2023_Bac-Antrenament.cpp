S1
1.b;
2.d;
  f(21,27) = 
  24 f(22, 25) =
  23 f(23, 23) = 
  23 bun ii

3.a;
4.c;
5.d;

S2
1.90;
a) 4 3 11 25
b) 10 15 2 {70, 74}
d) 
  x <- p;
  cat timp x < q executa
  blah blah
  x <- x + 1;
}
scrie s

2.

3.
s1 = plantau fistic
p = 8;


S3
3.
#include <iostream>

using namespace std;

int main() {
    int n, x, min_par = 1000001, min_imp = 1000001, max_par = -1, max_imp = -1;
    cin >> n;
    for(int i = 1; i <= n; i ++){
        cin >> x;
        if(x % 2 == 0 && x < min_par) min_par = x;
        else if (x % 2 != 0 && x < min_imp) min_imp = x;
    }
      for(int i = 1; i <= n; i ++){
        cin >> x;
        if(x % 2 == 0 && x > max_par) max_par = x;
        else if (x % 2 != 0 && x > max_imp) max_imp = x;
    }
      if(min_par > max_imp && min_imp > max_par) cout << "da";
      else cout << "nu";
    return 0;
};

