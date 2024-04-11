#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// wrong appraoch

void setNegativePositive(int arr[], int n) {
  int start = 0;
  int end = n - 1;

  while (start < end) {
    if (arr[start] < 0) {
      start++;
    } else if (arr[end] > 0) {
      end--;
    }
    if (arr[start] > 0 && arr[end] < 0) {
      swap(arr[start], arr[end]);
    }
  }
  // print that array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void setNegativePositive2(int arr[], int n) {

  int j = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] < 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void sortColor(int arr[], int n) {
  int zero = 0;
  int one = 0;
  int two = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      zero++;
    }
    if (arr[i] == 1) {
      one++;
    }
    if (arr[i] == 2) {
      two++;
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
  while (two--) {
    arr[i] = 2;
    i++;
  }
  // printing the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
void sortcolor2(int arr[], int n) {
  int left = 0;
  int right = 0;
  for (int i = 0; i < n; i++) {
    if (arr[left] == 0) {
      left++;
    }
    if (arr[right] == 2) {
      right--;
    }
    if (arr[left] == 2 && arr[right] == 0) {
      swap(arr[left], arr[right]);
    }
  }
  // printing the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}
void sortColor3(int arr[], int n) {
  int index = 0;
  int left = 0;
  int right = n - 1;
  while (index <= right) {
    if (arr[index] == 0) {
      swap(arr[index], arr[left]);
      left++;
      index++;
    } else if (arr[index] == 2) {
      swap(arr[index], arr[right]);
      right--;
      // index--; nahi karna hai kyunki index ko increment karne ke baad bhi 2
      // hai toh index-- karne
    } else {
      index++;
    }
  }
  // printing the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void rotate(int arr[], int n, int k) {
  int temp[n];
  for (int i = 0; i < n; i++) {
    temp[(i + k) % n] = arr[i];
  }
  for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }
}
void rotate2(int arr[], int n, int k) {}
void missingNumber(int arr[], int n) {
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    if (arr[i] != i + 1) {
      cout << i + 1;
    }
  }
}
// Doubt--
void missingNumber2(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + arr[i];
  }
  // int total= (n+1)*(n+2)/2;
  int total = ((n) * (n + 1)) / 2;
  cout << total - sum;
}
void maximumOneRow(int arr[3][4], int row, int col) {
  int oneCount = 0;
  int maxRow = -1;
  for (int i = 0; i < row; i++) {
    int count = 0;
    for (int j = 0; j < col; j++) {
      if (arr[i][j] == 1) {
        count++;
      }
    }
    if (count > oneCount) {
      oneCount = count;
      maxRow = i;
    }
  }
  cout << maxRow;
  cout << endl;
  cout << oneCount;
  cout << endl;
}
// very very very very very important
void rotate(int arr[3][3], int row, int col){
  // yee tho rotate karne ke liye transpose karke uske baad reverse karke
  // before taking transpose
  // for(int i=0;i<row;i++){
  //   for(int j=0;j<col;j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
    
  // }

  // cout<<endl;
  // transpose
  // lo
  for(int i=0;i<row;i++){
    for(int j=i;j<col;j++){
      swap(arr[i][j],arr[j][i]);
    }
    
  }
  cout<<endl;
  // reverse the transposed matrix row wise
  
  for(int i=0;i<row;i++){
    reverse(arr,arr+row  );
  }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
}

int main() {

  // rotate image
  int arr[3][3]={
  {1,2,3},
  {4,5,6},
  {7,8,9}
  };
  int row=3;
  int col =3;
  rotate(arr,row,col);

  // // row with maximum once
  // int arr[3][4] = {{0, 0, 1, 1}, {0, 1, 1, 1}, {1, 1, 1, 0}};
  // int row = 3;
  // int col = 4;

  // maximumOneRow(arr, row, col);

  // rearrangement of array in alternate positive and negative--h/w

  // missing the number in an array
  // int arr[]={1,7,3,2,5,6,8};
  // int size = 7;
  // // missingNumber(arr,size);
  // missingNumber2(arr,size);

  // // rotating the array
  // int arr[]={10,20,30,40,50,60};
  // int size=6;
  // int k=2;

  // rotate(arr,size,k);
  // cout<<endl;
  // rotate2(arr,size,k);

  // // leetcode sort color
  // int arr[]={2,0,2,1,1,1,0,2,0};
  // int size = 9;
  // sortColor(arr,size);
  // cout<<endl;
  // sortcolor2(arr,size);
  // cout<<endl;
  // sortColor3(arr,size);

  // int arr[8] = {0,-23,-7,12,-10,-11,-40,-60};
  // int size = 8;
  // // setNegativePositive(arr,size);
  // setNegativePositive2(arr,size);
}