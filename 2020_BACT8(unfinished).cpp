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

//Programul este eficient din punct de vedere al timpului de executie deoarece are o complexitate O(n) :)
//Parcurgem fiecare element al sirului si contorizam frecventa ultimei sale cifre plus pozitia pe care apare ultima aparitie. Dupa asta, vom afla 
//care este frecventa maxima a unei cifre si vom afisa pozitiile pe care se afla numerele precedate de un numar maxim de aparitii a ultimei sale cifre.
