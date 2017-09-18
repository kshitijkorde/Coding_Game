#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; // Number of elements which make up the association table.
    cin >> N; cin.ignore();
    int Q; // Number Q of file names to be analyzed.
    cin >> Q; cin.ignore();

	map<string, string> mymap;
	int SZ;

    for (int i = 0; i < N; i++) {
        string EXT; // file extension
        string MT; // MIME type.
        cin >> EXT >> MT; cin.ignore();
		SZ = EXT.size();	
		for(int i=0; i<SZ; i++){
			if(EXT.at(i) >= 'a' and EXT.at(i) <= 'z')
				EXT.at(i) -= 32;
		}
		mymap[EXT] = MT;
    }

    for (int i = 0; i < Q; i++) {
        string FNAME; // One file name per line.
        getline(cin, FNAME);
		int pos = -1;
		SZ = FNAME.size()-1;
		for(int s=SZ; s>=0; s--){
			if(FNAME.at(s) == '.'){
				pos = s;
				break;
			}
		}

		if(pos == -1){
    		cout << "UNKNOWN" << endl;
		} else {
			string token = FNAME.substr(pos+1, FNAME.size());
			SZ = token.size();
			
			for(int i=0; i<SZ; i++){
				if(token.at(i) >= 'a' and token.at(i) <= 'z')
					token.at(i) -= 32;
			}
			if(mymap.find(token) == mymap.end()){
    			cout << "UNKNOWN" << endl;
			} else {
				cout << mymap[token] << endl;
			}
		}
    }
	return 0;
}
