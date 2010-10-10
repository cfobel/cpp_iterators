#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main() {
    const int num_elements = 10;
    vector<int> v = vector<int>(num_elements);

    for(int i = 0; i < num_elements; i++) {
        v[i] = i;
    }

    cout << *(v.end() - 1) << endl;

    return 0;
}
