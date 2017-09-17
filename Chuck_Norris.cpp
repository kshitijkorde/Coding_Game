#include <bits/stdc++.h>

using namespace std;

int getCount(string bin, int pos, int len, char c){
	int p = pos+1;
	int cnt = 1;
	while(p < len) {
		if(bin[p] == c){
			cnt++;
			p++;
		} else {
			break;
		}
	}
	return cnt;
}

int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);
	int i, len;
	string bin(""), disp("");

	for(size_t p = 0; p < MESSAGE.size(); p++){
		string str("");
		i = MESSAGE.at(p);
		while(i){
			if(i%2)
				str ="1"+str;
			else
				str ="0"+str;
			i/=2;
		}
		if(str.size() < 7){
			for(int i=0; i < 7-str.size(); i++){
				str = "0"+str;
			}
		}
		bin = bin+str;
		//cout << "Bin:" << bin << endl;
	}	


	len = bin.size();
	int pos=0;
	int cnt;
	while(pos < len){
		if(bin[pos] == '1'){
			disp += "0 ";
			cnt = getCount(bin, pos, len, '1');
		} else {
			disp += "00 ";
			cnt = getCount(bin, pos, len, '0');
		}
		for(int i=0; i<cnt; i++){
			disp += "0";
		}
		disp += " ";
		pos += cnt;
	}

	if(disp.at(disp.size()-1) == ' ')
		disp = disp.erase(disp.size()-1,1);
	cout << disp << endl;
	return 0;
}
