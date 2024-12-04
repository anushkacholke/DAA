#include <iostream>
#include <vector>
using namespace std;
void generateSubsets(vector<int>& arr, vector<int>& current, int index) {
    // base case-print the curr subset
    if (index == arr.size()) {
        cout << "{ ";
        for (int num : current) {
            cout << num << " ";
        }
        cout << "}" << endl;
        return;
    }
    //include the cur ele in the subset
    current.push_back(arr[index]);
    generateSubsets(arr, current, index + 1);
    //exclude the curr ele from the subset
    current.pop_back();
    generateSubsets(arr, current, index + 1);
}
int main() {
    vector<int> arr = {1, 2, 3}; 
    vector<int> current;        //to store the curr subset

    cout << "All subsets of the given set are:\n";
    generateSubsets(arr, current, 0);
}
//time:O(2^n)
//space:O(n)