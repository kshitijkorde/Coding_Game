#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N; cin.ignore();
	int arr[N];

    for (int i = 0; i < N; i++) {
		cin >> arr[i];
    }

	sort(arr, arr+N);
	int diff = arr[N-1]-arr[0];
    for (int i = 0; i < N-1; i++) {
		 diff = min(diff, arr[i+1]-arr[i]);
	}

    cout << diff << endl;
	return 0;
}
