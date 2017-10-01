# Nick Weber - Bubble Sort
# Sorts an array/vector using an elementary bubble sort
# O(nlog(n)) time, O(1) memory

#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &v);
void print(vector<int> &v);

int main(int argc, const char * argv[]) {
    vector<int> v = {4,2,5,1,3};
    bubble_sort(v);
    cout << endl << "FINAL SORTED ARRAY: "; print(v); cout << endl;
    return 0;
}

void bubble_sort(vector<int> &v) {
    int end = int(v.size()) - 1;
    for (int i = 0; i < end; ++i) {
        bool swapped = false;
        for (int j = end; j > i; --j) {
            if (v[j] < v[j-1]) {
                int temp = v[j];
                v[j] = v[j-1];
                v[j-1] = temp;
                swapped = true;
            }
        }
        if (swapped == false) {break;}
        cout << "After iteration #" << i+1 << ": "; print(v);
    }
}

void print(vector<int> &v) {
    for (int k = 0; k < int(v.size()); ++k) {
        cout << v[k] << " ";
    }
    cout << endl;
}
