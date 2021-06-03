#include <iostream>
#include <vector>

using namespace std;


vector<string> fizzbizz(int n){
    vector <string> s;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            s.push_back("Fizz");
        }
        else if(i%5==0){
            s.push_back("Buzz");
        }
        else if(i%3==0 && i%5==0){
            s.push_back("FizzBuzz");
        }
        else{

            s.push_back(to_string(i));
        }
    }


return s;
}


int main(){
    vector<string> sv;
    sv=fizzbizz(17);

    for(int i=0;i<sv.size();i++){
        cout<<sv[i]<<endl;
    }
}