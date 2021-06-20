#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solve(vector<int> v){
    
    int n= v.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    vector<int> result;

    left[0]=v[0];
    right[n-1]=v[n-1];
    
    for(int i=1;i<v.size();i++){
        left[i]=max(left[i-1],v[i]);
        right[n-i-1]=max(right[i+1],v[i]);
    }

        int res;
        int l;
        int r;
    

    for(int i=0;i<v.size();i++){

        res;
        l=left[i];
        r=right[i];
        res =min(l,r)-v[i];
        result.push_back(res);

    }

return result;
}

int main(){
 
    vector<int> v={0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> result;
 
    result=solve(v);
 
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
 
    return 0;
}