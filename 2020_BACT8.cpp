S3
3.#include <iostream>

using namespace std;
struct def{
    int f, poz;
}v[10];
int main() {
    int x, k = 0, maxx = -1;
    while(cin >> x){
        k ++;
        v[x%10].f ++;
        v[x%10].poz = k;
        
    }
    
    for(int i = 0; i <= 9; i++){
        if(v[i].f > maxx) maxx = v[i].f;
    }
      for(int i = 0; i <= 9; i++){
        if(v[i].f == maxx) cout << v[i].poz<< " ";
    }
    return 0;
}
