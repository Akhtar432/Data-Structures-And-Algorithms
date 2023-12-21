#include<iostream>
#include<limits.h>
using namespace std;
int reverse (int x){
     int ans = 0, rem=0;
        bool isNeg = false;
        if(x <= INT_MIN){
            return 0;
        }
        //ignore negative sign
        if(x < 0){
            isNeg = true;
            x = -x;
        }
        while(x > 0){
            if(ans > INT_MAX / 10){
                return 0;
            }
            int digit = x % 10;
            ans = ans * 10 + digit;
            x = x / 10;
        }
        return isNeg ? -ans : ans;
    };
int main(){
    int n;
    cin>>n;
     int ans = reverse(n);
     cout<<n<<" is reverse "<<ans<<endl;

    // bool Neg = false;
    // if(n<0){
    //   bool neg = true;
    //   n = -n;
    // }
    // cout<<n;
}