#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];

    int sum = 0, start = 0;
    for(int end = 0; end < n; end++){
        sum += arr[end];

        while(sum > target && start <= end){
            sum -= arr[start];
            start++;
        }

        if(sum == target){
            cout << "Subarray found from index " << start << " to " << end << endl;
        }
    }
    return 0;
}
