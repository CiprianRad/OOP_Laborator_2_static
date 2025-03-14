//
// Created by Ciprian on 3/13/2025.
//
#include "service.h"
#include <iostream>
#include <set>
#include <vector>
using namespace std;

void get_data(int &n, int v[]) {
    cout << "Enter the number of elements: " << " " << endl;;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter the value of element " << i+1 << ": "<< " " << endl;
        cin >> v[i];
    }
}

void show_data(int n, int v[]) {
    if (n == 0) {
        cout << "The list is empty" << endl;
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
}

void functionality_1(int n, int v[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1 ; j++) {
            if (v[j+1]<v[j]) {
                swap(v[j], v[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " "<< endl;
    }
}

void converter_static_version(int x) {
    int length = to_string(x).length();
    int digits[length];
    while (x > 0) {
        for (int & digit : digits) {
            digit = x % 10;
            x /= 10;
        }
    }
}

void converter(int x) {
    vector<int> digits;

    while (x > 0)
    {
        digits.push_back(x % 10);
        x /= 10;
    }
}

set<int> set_converter(int x) {
    set<int> digits;
    while (x > 0) {
        digits.insert(x % 10);
        x /= 10;
    }
    return digits;
}

void functionality_10(int n, int v[]) {
    for (int i = 1; i < n; i++) {
        int frequency = 0;
        set<int> digits1 = set_converter(v[i-1]);
        set<int> digits2 = set_converter(v[i]);
        for(auto it = digits1.begin(); it != digits1.end(); it++) {
            for(auto it2 = digits2.begin(); it2 != digits2.end(); it2++) {
                if (*it == *it2) {
                    frequency++;
                }
            }
        }
        if (frequency >= 2) {
            cout << v[i-1] << " " << v[i] << " " << endl; ;
        }
    }
}
