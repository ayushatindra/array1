#include <iostream>
using namespace std;
int findUniqueElement(int arr[], int n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}
void pairOfElement(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "(" << arr[i] <<" " <<arr[j] << ")" << endl;
    }
  }
}

void printTriplet(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        cout << "(" << arr[i] << " " << arr[j] << " " << arr[k] << ")" << endl;
      }
    }
  }
}

void sortZeroOnce(int arr[], int n) {
  int zero = 0;
  int one = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      zero++;
    }
    if (arr[i] == 1) {
      one++;
    }
  }
  int i = 0;
  while (zero--) {
    arr[i] = 0;
    i++;
  }
  while (one--) {
    arr[i] = 1;
    i++;
  }
  // printing the sorted array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void shifter(int arr[], int n) {
  int temp = arr[n - 1];
  for (int i = n - 1; i >= 1; i--) {
    arr[i] = arr[i - 1];
  }

  arr[0] = temp;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  // shift array element by one
  int arr[] = {10, 20, 30, 40, 50, 60};
  int size = 6;
  shifter(arr, size);

  // // sort 0s and 1s
  // int arr[]={1,1,1,0,1,1,0,0,0,0,0};
  // int size=11;
  // sortZeroOnce(arr,size);

  // int arr[] = {1, 2, 3, 4,1,2,3};
  // int size=7;
  // int ans=findUniqueElement(arr,size);
  // cout<<ans<<endl;

  // printing the pairs in given array'; 
  // int arr[]={10,20,30};
  // int size=3;
  // pairOfElement(arr,size);

  // // printing the triplet
  // int arr[]={10,20,30,40,50,60};
  // int size=6;
  // printTriplet(arr,size);
}