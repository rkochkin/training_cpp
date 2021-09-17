//
// Created by ksy on 17.09.2021.
//

#include "dequestl.h"
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;


void printKMax(int arr[], int n, int k){
    //Write your code here.
    deque<int> que;
    int max=arr[0];

    for (int i=0; i < k; ++i){
        que.push_back(arr[i]);
    }
    max = *max_element(que.begin(), que.end());
    cout << max  << " ";

    for (int i=k; i < n; ++i){
        que.push_back(arr[i]);
        if (que[0] == max){
            que.pop_front();
            max = *max_element(que.begin(), que.end());
        } else {
            que.pop_front();
            if (arr[i]>max){
                max = arr[i];
            }
        }
        cout << max << " ";
    }
    cout << endl;
}

std::string hackerrank::DequeStl::name() const {
    return "Deque-STL";
}

int hackerrank::DequeStl::run() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t>0) {
        int n,k;
        cin >> n >> k;
        int i;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}
