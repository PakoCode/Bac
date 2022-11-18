S1
1.a;
2.c;
  f(2020,20) = -1899;
3.b;
  casca, costum de inot, cleme, dopuri de urechi, pluta, masca de snorkeling, ochelari, snorkel
  1       2               3       4                 5         6                 7         8
  40      400             30      30               10         400             70          60
  
  1234
  128
  1346
  168
  2358 doable;

4.c;
5.a;

S2;
1. 
 a)1862; 
 b)290 489 689;
 d)cat timp n != 0 executa;

2.
  struct rasa{
    int cod, nrExemplare, varsta[10];
  }r;

3.
#include <iostream>

using namespace std;
int main() {
    int a[5][7] ={};
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 7; j ++){
      a[0][j] = 1;
      a[i][6] = 1;
        }
    }
    for(int i = 1; i < 5; i ++){
        for(int j = 5; j >= 0; j --){
            a[i][j] = (a[i-1][j] + a[i][j+1]) % 10;
        }
    }
     for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 7; j ++){
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}

S3.
  
  2.
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s[101];
    cin.getline(s, 101);
    for(int i = 0; i < strlen(s); i ++){
        if(s[i] == '-') strcpy(s + i , s + i + 1);
    }
    cout << s;
    return 0;
};

3.
    
       
      
   

  

  
