s3 1 // unfinished;
#include <iostream>

using namespace std;
void patrate(int x, int y){
    int s = 0, ok = 0;
    for(int i = 1; i * i <= y; i ++){
        
        if(i * i > x){
            if((i + 1) * (i + 1) <= y){
            cout << i * i << '+';
            ok = 1;
            s = s + i * i;
            }
            else{
            s = s + i * i;
            cout << '=' << s;
            
                }
        }
    }
}
int main() {
    int x, y;
    cin >> x >> y;
    patrate(x, y);
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char s[101], *p, cuv[101], aux[101];
    cin.getline(s, 101);
    p = strtok(s, " ");
    while(p != NULL){
        strcpy(cuv, p);
        for(int i = 0; i < strlen(cuv); i ++){
            if(cuv[0] >= "a" && cuv[0] <= "z"){
                cuv[0] += 32;
            }
            else if(i =! 0 && cuv[i] >="A" && cuv[i] <="Z"){
                cuv[i] -= 32;
            }
            strcat(cuv, aux);
            strcat(aux, " ");
            
        }
        cout << aux;
    }
    return 0;
}
