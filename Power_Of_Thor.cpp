#include<bits/stdc++.h>

using namespace std;

int main()
{
    int LX; // the X position of the light of power
    int LY; // the Y position of the light of power
    int TX; // Thor's starting X position
    int TY; // Thor's starting Y position
    cin >> LX >> LY >> TX >> TY; cin.ignore();

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

		while(TX != LX or TY != LY){
			//N NE E SE S SW W or NW
			if(TX < LX and TY < LY){
				cout << "SE" << endl;
				TX += 1, TY += 1;
			} else if(TX > LX and TY < LY){
				cout << "SW" << endl;
				TX -= 1, TY += 1;
			} else if(TX > LX and TY > LY){
				cout << "NW" << endl;
				TX -= 1, TY -= 1;
			} else if(TX < LX and TY > LY){
				cout << "NE" << endl;
				TX += 1, TY -= 1;
			} else if(TX == LX and TY > LY){
				cout << "N" << endl;
				TY -= 1;
			} else if(TX == LX and TY < LY){
				cout << "S" << endl;
				TY += 1;
			} else if(TY == LY and TX < LX){
				cout << "E" << endl;
				TX += 1;
			} else if(TY == LY and TX > LX){
				cout << "W" << endl;
				TX -= 1;
			}
		}
    }
	return 0;
}
