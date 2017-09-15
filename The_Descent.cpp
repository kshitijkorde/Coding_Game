#include<bits/stdc++.h>

using namespace std;
typedef pair<int,int> PII;
typedef priority_queue<PII> PQPII;
/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/
int main()
{
    // game loop
    while (1) {
		PQPII pq;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
			pq.push(PII(mountainH, i));
        }
		cout << pq.top()->second << endl;
    }
	return 0;
}
