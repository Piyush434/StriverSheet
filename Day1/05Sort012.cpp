#include <bits/stdc++.h> 
using namespace std;
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
void sort012(int *arr, int n)
{
   //   Write your code here
    int zi = 0;
    int ti = n-1;
    for(int i=0;i<n;) {
        if(arr[i] == 0 && i>zi) {
            swap(arr[zi],arr[i]);
            zi++;
        }
        else if(arr[i] == 2 && i<ti) {
            swap(arr[ti],arr[i]);
            ti--;
        }
        else i++;
    }
}

// 0 1 2 2 1 0
/*
zi 0 
ti 5  
0 1 2 2 1 0
0 1 0 2 1 2
*/
