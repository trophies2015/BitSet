#include <bits/stdc++.h>
using namespace std;
template <class T>
struct BitSet
{
	vector <T> se; 
	BitSet (vector <T> in){
		for (int g=0; g<in.size(); g+=64){
			T msk = 0; 
			int M = min (g + 64, (int)in.size()); 
			for (int y=g; y<M; y++){
				if (in[y]) msk|=(1LL<<(y-g));
			}
			se.push_back(msk); 
		}
	}
	BitSet operator* (const BitSet & other) const{
		const vector <T> & ot = other.se;
		vector <T> ans; 
		for (int g=0; g<ot.size(); g++) ans.push_back(ot[g]&se[g]); 
		return BitSet (ans);  
	}
};
int main(){
	
}
