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
