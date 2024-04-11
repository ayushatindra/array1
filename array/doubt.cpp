#include <iostream>
using namespace std;
int fun(int a) {
  cout << a << endl;
  return a + 1;
}
int countBit(int n) {
  int count = 0;
  while (n) {
    int bit = (n & 1);
    if (bit == 1) {
      count++;
      n >>= 1;
    }
  }
  return count;
}
int countBit2(int n) {
  int count = 0;
  while (n) {
    n &= (n - 1);
    count++;
  }
  return count;
}
void sort(int arr[], int n) {
  int i = 0;
  int j = n - 1;
  while (i < j) {
    if (arr[i] == 0) {
      i++;
    }
    if (arr[j] == 1) {
      j--;
    }
    if (arr[i] == 1 && arr[j] == 0) {
      swap(arr[i], arr[j]);
    }
  }
  // printing the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
int main() {

  int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0,
               0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int size = sizeof(arr) / sizeof(arr[0]);
  sort(arr, size);

  // int n;
  // cin >>n;
  // cout<<countBit(n)<<endl;
  // cout<<countBit2(n)<<endl;

  // cout<<a<<endl;geting lsb

  // int arr[]={1,2,3,4,5};
  // cout<<sizeof(arr)<<endl;
  // cout<<sizeof(arr)/sizeof(int)<<endl;

  // char arr[]={'1','2','3','4','5'};
  // cout<<sizeof(arr)<<endl;
  // cout<<sizeof(arr)/sizeof(char)<<endl;
  // float x =5.0;
  // cout<<x<<endl;  why 5 not 5.0
  // int a =3.2;
  // cout<<a<<endl;

  // int a =  fun(5);
}