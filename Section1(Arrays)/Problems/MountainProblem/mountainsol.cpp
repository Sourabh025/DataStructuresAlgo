#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Mountainsol(vector<int> v){
    int count_back=0;
    int count_front=0;
    int max_width=0;

	if(v.size()<3){
		return 0;
	}

    for(int i=1;i<=v.size()-2;i++){

        // find the peakB
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            int j=i;

            while(j>0 && v[j]>v[j-1]){

                count_back+=1;
                j-=1;
            }
            int k=i;
            while(k<v.size()-1 && v[k]>v[k+1]){
                k++;
                count_front+=1;
            }
            i=k;

			if(max_width<count_front+count_back)
            {
                max_width=count_front+count_back;

			}

        }
		count_back=0;
		count_front=0;

    }

// add 1 because of peak point
return max_width+1;
}

int main(){

    vector<int> vec={2,1,4,7,3,2,5};
    int res=Mountainsol(vec);
    cout<<res;
    return 0;
}
