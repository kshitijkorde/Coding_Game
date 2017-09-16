#include<bits/stdc++.h>
using namespace std;

int main()
{
    int L;
    cin >> L; cin.ignore();
    int H;
    cin >> H; cin.ignore();
    string T;
	vector<string> vec;
    getline(cin, T);
    for (int i = 0; i<H; i++){
        string ROW;
        getline(cin, ROW);
		vec.push_back(ROW);
    }
	
	vector<int> vpos;
	for(size_t i=0; i<T.size(); i++){
		if(T.at(i) >= 'a' and T.at(i) <= 'z'){
			vpos.push_back(T.at(i)-'a');
		} else if(T.at(i) >= 'A' and T.at(i) <= 'Z'){
			vpos.push_back(T.at(i)-'A');
		}  else {
			vpos.push_back(26);
		}
	}
	
	for(int h=0; h<H; h++){
		for(auto i : vpos){
			int startpos = i*L;
			int endpos = startpos+L;
			for(int i=startpos; i<endpos; i++){
				cout << vec[h][i];
			}
		}
		cout << endl;
	}
	return 0;	
}
