#include <iostream>
#include <vector>
// #include <algorithm>
// #include <unordered_set>

using namespace std;

// int bandsol(vector<int> v){

//     unordered_set<int> s;
//     int count=0;
//     int largest_band=0;
//     // add into set
//     for(int i=0;i<v.size();i++){

//         s.insert(v[i]);

//     }

//     for(int i=0;i<v.size();){
//         int prev_value=v[i]-1;
//         if(s.find(prev_value)==s.end()){
//                 int j=i;
//                 int start_value=v[i]+1;

//                 while(s.find(start_value)!=s.end()){
//                     start_value++;
//                     count++;
//                 }

//         largest_band=max(count,largest_band);
//         }
//         else{
//             i++;
//         }



//     }
// return largest_band;

// }


int main(){

    vector<int> v={1,9,3,0,18,5,2,4,10,7,12,6};
    // int res=bandsol(v);

return 0;
}
