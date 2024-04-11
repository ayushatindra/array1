#include <iostream>
#include<vector>
using namespace std;
void printArray(int arr[], int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

void print(vector<int> v){
  int size =v.size();
  for(int i=0;i<size;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}


void print1(vector<char> v){
  int size =v.size();
  for(int i=0;i<size;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
}

void print2(vector<int> v){
  
  for(auto it:v){
    cout<<it<<" ";
  }
  cout<<endl;
}

int main() { 


  vector<int> v;
  v.push_back(10);
  v.push_back(20);
  v.push_back(30);
  v.push_back(40);
  v.push_back(50);
  print(v); 
    print2(v);
  
  
  // vector<char> ch;
  // ch.push_back('a');
  // ch.push_back('b');
  // ch.push_back('c');
  // ch.push_back('d');

    // print1(ch); 
  // cout<<ch[0]<<endl;
  // cout<<ch[ch.size()-1]<<endl;
  // method 2
  // cout<<ch.front()<<endl;
  // cout<<ch.back()<<endl; 
  
    
  
  


  
  // vector initialisation 
  // vector<int> arr;  //empty vector with size 0
  // vector<int> arr2(5,- 1);
  // arr2.push_back(50);
  // // print(arr2);
  // // method 3
  // vector<int> arr3={1,2,34,4,5};
  // print(arr3);
  // // method 4
  // vector<int> arr4{1,2,3,34,4};
  // print(arr4);
  // how to copy vector
  // vector<int> arr5={1,2,3,4,5,8};
  // vector<int> arr6(arr5);
  // print(arr6);



  
  // for clearing the vector
  // v.clear();
  // // vector
  // int n;
  // cin>>n;
  // vector<int> v;
  // // inserting
  // for(int i=0;i<n;i++){
  //   int x;
  //   cin>>x;
  //   v.push_back(x);
    
    
  // }
  // print(v);
  // for(int i=0;i<10;i++){
  //   v.push_back(7);
  // }
  // print(v);
  
  

  

  
  

  // vector<int> v;
  // while(1){
  //   int d;
  //   cin>>d;
  //   cout<<"Capacity"<<v.capacity()<< "Size"<<v.size();
  
  // }
  // // // inserting the element
  // v.push_back(1);
  // v.push_back(2);
  // v.push_back(3);
  // print(v);
  // v.pop_back();
  // print(v);

  // v.pop_back();
  // print(v);

  // v.pop_back();
  // print(v);

  // v.pop_back();
  // print(v);
  
  // in vector dont tell size of vector
  // just keep adding elements
  // vector will handle

  
  


  

  // // dynamic allocation 
  // int n;
  // cin >>n;
  // int* arr = new int[n];
  // for(int i=0;i<n;i++){
   
  //   cin>>arr[i];
  // }
  
  // printArray(arr, n);

  // // static memory allocaion
  // int arr[5]={1,2,3,4,5};
  // int size =5;
  // printArray(arr,size);
// vectors
  // int arr[5];
  // run time array 
  // int* arr=new int[5];
  // for(int i=0;i<5;i++){
  //   cout<<arr[i]<<" ";
  // }
  // method 2 ->wrong behaviours
  // int n;
  // cin >>n;
  // int arr[n];
  // for(int i=0;i<5;i++){
  //   cout<<arr[i]<<" ";
  // }
  // int n;
  // cin>>n;
  // int* arr=new int[n];
  
  
  
}