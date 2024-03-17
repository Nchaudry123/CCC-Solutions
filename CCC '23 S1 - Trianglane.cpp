#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int c, cheese = 0;
    cin>>c;

    vector<vector<bool>> triangle(3, vector<bool>(c+1, false));

    for(int i = 1; i<3; i++){
        for(int j = 1; j<=c; j++){
            int input;
            cin>>input;
            triangle[i][j] = (input==1);
        }
    }

    for(int i = 1; i<3; i++){
        for(int j = 1; j<=c; j++){
            if(j%2 != 0){
                if(triangle[i][j]){
                    cheese+=3;
                    
                    if(triangle[i-1][j]){
                        cheese-=2;
                    }
                    if(triangle[i][j-1]){
                        cheese-=2;
                    }
                }
            }
            else{
                if(triangle[i][j]){
                    cheese+=3;
                    
                    if(triangle[i][j-1]){
                        cheese-=2;
                }
                }
            }
        }
    }
    cout<<cheese;
}