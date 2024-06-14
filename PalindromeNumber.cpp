#include  <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int y = x;
        long rev = 0;
        while(y>0)
        {
            rev = rev*10+y%10;
            y/=10;
        }
        return rev == x;
    }
};
int main(){
    while(1){
        cout<<"\nEnter a number to check it is palindrome or not: ";
        int x;
        cin>>x;
        Solution ob;
        if (ob.isPalindrome(x)) cout<<"Yes. It is a Palindrome Number!"<<endl;
        else cout << "No. It is not a Palindrome Number!"<<endl;
    }
    return 0;
}