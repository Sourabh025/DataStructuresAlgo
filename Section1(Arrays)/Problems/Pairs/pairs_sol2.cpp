#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binary_search(vector<int> v,int s,int e,int x);

void pairs(vector<int> v,int K){

	// sort the array
	sort(v.begin(),v.end());
	int res;

	for(int i=0;i<v.size();i++){

		res=binary_search(v,i,v.size(),K-v[i]);

		if(res!=-1 && v[res]!=v[i]){

			// to remove duplicates check values should not be the same.
		cout<<"Pair found as "<<v[res]<<" "<<v[i]<<endl;

		}
	}

}

int binary_search(vector<int> v,int s,int e,int x){

	int mid;

	while(s<=e){

		mid=s+(e-s)/2;

		if(v[mid]==x){

			return mid;

		}
		if(v[mid]>x){

			e=mid-1;
		}
		if(v[mid]<x){

			s=mid+1;
		}
	}
	return -1;
}


int main(){

	vector<int> v={10,5,2,3,-6,9,11};

	int k=4;

	pairs(v,k);

return 0;

}