S1
1.d;
2.a;
3.b;
  f(54321) = f(5432)
  f(5432) = f(543) 2
  f(543) = f(54)
  f(54) = f(5) 4
  f(5) = f(0);
4.b;
5.c;

S2
1.
a)2592
  952;
b)2000
  2002
  2022;
d)
  pentru c <- 9, 0, executa;
  
2.
  struct flori{
    int cod, nrVarietati, nrExemplare[10];
  }f[20];

3.
  abcde
  abcd6
  1245 6
  1345 6
  2345 6;

S3
1.
int powdoi(int i){
    int p = 1;
    while(i != 0){
        p = p * 2;
        i = i - 1;
    }
    return p;
}
int pDoi(int n){
    int i = 1;
    while(powdoi(i) < n){
        i ++;
    }
    return powdoi(i - 1);
}

2.
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int p = -1;
    char s[100];
    cin.getline(s,100);
    for(int i = 0; i < strlen(s); i ++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            p = i;
        }
    }
    strcpy(s + p, s + p + 1);
    cout << s;
    return 0;
}

3.
  #include <iostream>
#include <string.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    while(x > 1){
        cout << x << " ";
        if(x > 10){
            if(x % 2 == 0) x = x / 2;
            else x = x - 1;
        }
        else x = x - 1;
    }
    cout << x;
    return 0;
}
  //Programul este eficient dpdv al timpului de executie deoarece are o complexitate O(x), unde x reprezinta numarul de termeni construiti ai sirului
 //Programul este deasemenea eficient si dpdv al spatiului, folosind doar o singura variabila simpla.
//Pornim de la x-ul citit si il afisam, dupa care vom verifica ce numar este acesta. Daca este mai mare decat 10, vom verifica daca este par => numarul precedent este
// x-ul curent / 2. Daca este impar, numarul precedent este x-1;. Daca numarul nu este mai mare decat 10, atunci numarul precedent este tot x - 1.
