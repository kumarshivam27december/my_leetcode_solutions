/*
test case 1:-
/home/abcd/..//b/./cd/ab//.//


/home/b/cd/ab

test case2:-

/../

/

test case 3:-

/./././.././././../

/

*/

#include <bits/stdc++.h>
using namespace std;
string compress(string str){
    //write your code here
    string ans = "";
    vector<string> v;


    
}
int main(){
    string str = "/home/abcd/..//b/./cd/ab//.//";
    string newstr = compress(str);
    cout<<newstr<<endl;
    return 0;
}