#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> tripletsol(vector<int> v,int target){

vector <vector<int>> res;
int n=v.size();
int start,end;
int sum=0;
// sort is a function not a property
sort(v.begin(),v.end());

// using two pointer approch
for(int i=0;i<=n-3;i++){
    start=i+1;
    end=n-1;

    while(end>start){

        sum=v[start]+v[end]+v[i];

        if(sum==target){
            res.push_back({v[start],v[end],v[i]});
            end--;
            start++;
        }
        else if(sum>target){
            end-=1;
        }
        else{
            start+=1;
        }
    }

}


return res;
}



int main(){

    vector<int> v= {1,2,3,4,5,6,7,8,9,15};

    int target=18;

    vector<vector<int>> vec;

    vec=tripletsol(v,target);

    // sort(vec.begin(),vec.end());

    for(auto i: vec){
        for(auto j:i){
            cout<<j<<",";
        }
        cout<<endl;
    }


return 0;

}