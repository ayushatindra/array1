#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

bool linearSearch(int arr[], int size, int key) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == key) {
      return true;
    }
  }
  return false;
}

void counter(int arr[], int size) {
  int count_One = 0;
  int count_Zero = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 1) {
      count_One++;
    }
    if (arr[i] == 0) {
      count_Zero++;
    }
    // else{
    //   count_Zero++;
    // }
  }
  cout << "No of zero in that given array is " << count_Zero << endl;
  cout << "No of one in that given array is " << count_One << endl;
}
void mini(int arr[], int size) {
  int mini = INT8_MAX;
  for (int i = 0; i < size; i++) {
    // if(arr[i]<mini){
    //   mini = arr[i];
    // }
    mini = min(mini, arr[i]);
  }
  cout << "Minimum number in the given array is " << mini << endl;
}
void maxi(int arr[], int size) {
  int maxi = INT8_MIN;
  for (int i = 0; i < size; i++) {
    // if(arr[i]<mini){
    //   mini = arr[i];
    // }
    maxi = max(maxi, arr[i]);
  }
  cout << "Maximum number in the given array is " << maxi << endl;
}
void reverseArray(int arr[], int size) {
  // int start = 0;
  // int end = size - 1;
  // while (start <= end) {
  //   swap(arr[start], arr[end]);
  //   start++;
  //   end--;
  // }
  // for (int start = 0, end = size - 1; start <= end; start++, end--) {
  //   swap(arr[start], arr[end]);
  // }
  // // printing the reverse array
  // for (int i = 0; i < size; i++) {
  //   cout << arr[i] << " ";
  // }
}
void printExtream(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  while (start <= end) {
    if (start == end) {
      cout << arr[start] << " ";
    } else {
      cout << arr[start] << " ";
      cout << arr[end] << " ";
    }
    start++;
    end--;
  }
}
int main() {
  // h/w ->write the implementatin of swap function,min,max

  // extream print in an array
  // int arr[5] = {10, 20, 30, 40, 50};
  // int size = 5;
  // printExtream(arr, size);

  // // reverse an array
  // int arr[6] = {1, 2, 3, 3, 4, 5};
  // int size = 6;
  // reverseArray(arr, size);
  // // cout<<INT_MAX;
  // // minimum number in the array
  // int arr[6] = {1,-8, 2, 3, 4, 5};
  // int size = 5;
  // mini(arr, size);
  // maxi(arr, size);

  // // count 0s,1s,in an array
  // int arr[] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0};
  // int size = 10;
  // counter(arr, size);

  // // liner search using function
  // int arr[5]={1,2,3,4,5};
  // int size=5;
  // int key = 2;
  // bool ans = linearSearch(arr,size,key);
  // if(ans ==true){
  //   cout<<"found"<<endl;
  // }
  // else{
  //   cout<<"not found"<<endl;
  // }

  // // using function printing the array
  // int arr[5]={1,2,3,4,5};
  // int size=5;
  // // function call
  // printArray(arr,size);
  // Array
  // creation of array
  //     int arr[101];
  //   cout<<"successful"<<endl;
  //     char ch[10];
  //     cout<<"successful"<<endl;
  //     bool flag[56];
  //     cout<<"successful"<<endl;
  //     long lg[78];
  //     cout<<"successful"<<endl;
  //     short st[67];
  //     cout<<"successful"<<endl;
  // int a = 5;
  // cout << "address of a " << &a << endl;
  // cout << sizeof(a) << endl;

  // int arr[10];
  // cout << "Address of arr" << &arr << endl;
  // cout << "Address of arr" << arr << endl;
  // cout << sizeof(arr) << endl;
  // int arr[]={2,3,4,5};
  // int arr1[5]= {2,3,4,5,6};
  // int arr2[2]= {2,3,4,5,6};-->error
  // dynamic array baaaad practice
  // int n;
  // cin>>n;
  // int arr[n];
  // for(int i=0;i<n;i++){
  //   cout<<arr[i]<<endl;
  // }
  // index of array starts from 0
  // int arr[5]= {1,2,3,4,5};
  // // cout<<arr[0]<<endl;
  // // cout<<arr[1]<<endl;
  // // cout<<arr[2]<<endl;
  // // cout<<arr[3]<<endl;
  // // cout<<arr[4]<<endl;
  // for(int i=0;i<5;i++){
  //   cout<<arr[i]<<endl;
  // }
  // int arr[5];
  // // cin>>arr[0];
  // // cin>>arr[1];
  // // cin>>arr[2];
  // // cin>>arr[3];
  // // cin>>arr[4];
  // // method 2->best
  // for(int i=0;i<5;i++){
  // cout<<"enter the value for index";
  //   cin>>arr[i];
  // }

  // // printing the array
  // for(int i=0;i<5;i++){
  //   cout<<arr[i]<<endl;
  // }

  // // problem-->double the value of array
  // int arr[10];
  // for (int i = 0; i < 10; i++) {
  //   cin >> arr[i];
  // }
  // // double
  // for (int i = 0; i < 10; i++) {
  //   arr[i] = 2 * arr[i];
  // }
  // // printing the array
  // for (int i = 0; i < 10; i++) {
  //   cout << arr[i] << endl;
  // }
  // printing the sum of array
  // int arr[5];
  // for(int i=0;i<5;i++){

  //   cin>>arr[i];
  // }
  //  int sum=0;
  // for(int i=0;i<5;i++){
  //   sum = sum + arr[i];
  // }
  // cout<<"printing the array"<<endl;
  // cout<<sum<<endl;
  // liner search in array
  // int arr[5] = {1, 2, 3, 4, 5};
  // int target = 3;
  // bool flag = 0;
  // for (int i = 0; i < 5; i++) {
  //   if (arr[i] == target) {
  //     flag = 1;
  //     break;
  //   }
  // }
  // if (flag == 1) {
  //   cout << "found" << endl;
  // } else {
  //   cout << "not found" << endl;
  // }

  // 
  // 1.function call
  // 2.arr,size
  // uses 
  // singke time code likho
  // reuseability
  // easy


}