#include<bits/stdc++.h>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
	int temp;
	int max = 6000;
	int store;
	
	for(int i=0; i<n; i++){
		cin >> temp;
		if(abs(temp) < max){
			max = abs(temp);
			store = temp;
		} else if(abs(temp) == max){
			if(store < abs(temp) and store != temp)
				store = abs(temp);
		}
	}	

    cout << store << endl;
	return 0;
}
