#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

vector<int> pairs(vector<int> v,int sum){

    unordered_set<int> s;
    int second_pair;

    vector<int> vec;

    for(int i=0;i<v.size();i++){

        second_pair = sum-v[i];

        // if second element is present in the set then return vector
        if(s.find(second_pair)!=s.end()){
                vec.push_back(v[i]);
                vec.push_back(second_pair);
                return vec;
        }

        // insert current element if second element is not present in the set
        s.insert(v[i]);
    }


return vec;

}

// unordered_set has - > s.insert(x), s.find(x), s.end()

int main(){

    // define set like a vector
    unordered_set<int> s;

    vector<int> v={-6,2,3,5,9,10,11};
    vector<int> res;

    res=pairs(v,4);
    for(int i=0;i<res.size();i++){

            cout<<res[i]<<endl;

    }

return 0;
}