#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b;
    int score=0;
    cin >> a >> b;
    int i=1;
    while(1){
        if(pow(i,6) > b){
            break;
        }
        if(pow(i,6) >= a && pow(i,6) <= b){
            score++;
        }

        i++;
    }
    cout<<score<<endl;
    return 0;
}