1.
#include <iostream>
int baza(int n){
    int c, mcif = -1;
    while(n != 0){
        c = n % 10;
        if(c > mcif) mcif = c;
        n = n / 10;
    }
    return mcif + 1;
}
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << baza(n);
}

2.
  #include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s[101], *p;
    int k = 0;
    cin.getline(s,101);
    p = strtok(s, " ");
    while(p != NULL){
        char c = p[0];
        if(c >= '0' && c <= '9') k ++;
        p = strtok(NULL, " ");
    }
    cout << k;
}
