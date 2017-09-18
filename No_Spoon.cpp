#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> PII;
int width, height; 
char arr[40][40];

PII getRight(int x, int y){
	PII mypair;
	for(int pos=x+1; pos<width; pos++){
		if(arr[pos][y] == '0'){
			mypair.first = pos;
			mypair.second = y;	
			return mypair;
		}
	}
	mypair.first = -1;
	mypair.second = -1;
	return mypair;
}

PII getBottom(int x, int y){
	PII mypair;
	for(int pos=y+1; pos<height; pos++){
		if(arr[x][pos] == '0'){
			mypair.first = x;
			mypair.second = pos;	
			return mypair;
		}
	}
	mypair.first = -1;
	mypair.second = -1;
	return mypair;
}

int main()
{
    cin >> width; cin.ignore();
    cin >> height; cin.ignore();

	for(int i=0; i<height; i++){
		string line;
		getline(cin,line);
    	for(int x = 0; x < width; x++) {
			 arr[x][i] = line.at(x);
		}
	}

	for(int y = 0; y < height; y++) {
    	for (int x = 0; x < width; x++) {
			 if(arr[x][y] == '0'){
				PII mp_r = getRight(x,y);
				PII mp_b = getBottom(x,y);
				cout << x << " " << y << " " << mp_r.first << " " << mp_r.second << " " << mp_b.first << " " << mp_b.second << endl;
			 }
		}
	}
	return 0;
}
