#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> arr, int requiredCals);
int main(){

    vector <int> arr {2, 9, 5, 1, 6};
    int requiredCal = 12;

    cout << isPossible(arr, requiredCal);

}

bool isPossible(vector<int> arr, int requiredCals, int index = 0, bool a = false, bool b = false ){
    if(requiredCals == 0) return true;
    if(index < arr.size()){
        b = isPossible(arr, requiredCals - arr[i], a);
        a = isPossible(arr, requiredCals), a;
    if (a || b) return true;
    return false;
    }
}