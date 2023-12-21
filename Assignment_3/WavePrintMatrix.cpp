#include<iostream>
#include<vector>
using namespace std;
void WavePrintMatrix(vector<vector<int>>&v){
    int m = v.size();
    int n = v[0].size();
    for(int j=0; j<n; j++){
        //for even col
        if((j&1)==0){
          for(int i=0; i<m; i++){
            cout<<v[i][j]<<" ";
          }
          cout<<endl;
        }
        //for odd col
        else{
            for(int i=m-1; i>=0; i--){
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    vector<vector<int>>v{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    WavePrintMatrix(v);

}