s3 1 // unfinished;
#include <iostream>
#include <cmath>
using namespace std;
void patrate(int x, int y)
    int i = ceil(sqrt(x));
    for(i; i < sqrt(y) - 1; i ++){
        cout << i*i << '+';
        s = s + i*i;
    }
    s = s + i * i;
    cout << i * i << '=' << s;
}
int main() {
    int x, y;
    cin >> x >> y;
    patrate(x, y);
    return 0;
}

2.
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s[101], *p, aux[101];
    cin.getline(s,101);
    p = strtok(s, " ");
    while(p != NULL){
        char c[101];
        strcpy(c, p);
        for(int i = 0; i < strlen(c); i ++){
            if(c[0] >'a' && c[0] < 'z') c[0] -= 32;
            else if((i != 0) && (c[i] >'A' && c[i] < 'Z')){
                c[i] += 32;
            }
        }
        strcat(aux, c);
        strcat(aux, " ");
        p = strtok(NULL, " ");
    }
    strcpy(s, aux);
    cout << s;
    return 0;
}
