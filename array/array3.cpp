// #include <iostream>
// #include<vector>
// using namespace std;

// void printArray(int arr[3][3], int row, int col) {
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       cout << arr[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// void printColArray(int arr[3][3], int row, int col) {
//   for (int i = 0; i < col; i++) {
//     for (int j = 0; j < row; j++) {
//       cout << arr[j][i] << " ";
//     }
//     cout << endl;
//   }
// }
// bool searching2dArray(int arr[3][3], int row, int col, int key) {
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       if (arr[i][j] == key) {
//         return true;
//       }
//     }
//   }
//   return false;
// }
// void maxi(int arr[3][3], int row, int col) {
//   int maxi = INT8_MIN;
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       maxi = max(maxi, arr[i][j]);
//     }
//   }
//   cout << "The maximum number of the 2 - D array is " << maxi << endl;
// }
// void mini(int arr[3][3], int row, int col) {
//   int mini = INT8_MAX;
//   for (int i = 0; i < row; i++) {
//     for (int j = 0; j < col; j++) {
//       mini = min(mini, arr[i][j]);
//     }
//   }
//   cout << "The minimum number of the 2 - D array is " << mini << endl;
// }
// void printRowSum(int arr[3][3], int row, int col) {

//   for (int i = 0; i < row; i++) {
//     int sum = 0; // yaad rakhana varna testcases phas gjayega

//     for (int j = 0; j < col; j++) {
//       sum = sum + arr[i][j];
//     }
//     cout << endl;
//     cout << sum;
//   }
// }
// void printColSum(int arr[3][3], int row, int col) {

//   for (int i = 0; i < col; i++) {
//     int sum = 0; // yaad rakhana varna testcases phas gjayega

//     for (int j = 0; j < row; j++) {
//       sum = sum + arr[j][i];
//     }
//     cout << endl;
//     cout << sum;
//   }
// //   void printDiagonalSum(int arr[3][3], int row, int col) {
// //     int sum = 0;
// //     for (int i = 0; i < row; i++) {
// //       for (int j = 0; j < col; j++) {
// //         if (i == j) {
// //           sum = sum + arr[i][j];
// //         }
// //       }

// //       cout << "The sum of diagonal is " << sum << endl;
// //     }
// //   }
// //   void printDiagonalSum(int arr[3][3], int row, int col) {
// //   int sum = 0;
// //   for (int i = 0; i < row; i++) {
// //     for (int j = 0; j < col; j++) {
// //       if (i == j) {
// //         sum = sum + arr[i][j];
// //       }
// //     }
// //   }
// //   cout << "The sum of diagonal is " << sum << endl;
// // }

// // method no 2
// // void printDiagonalSum2(int arr[3][3], int row, int col) {
// //   int sum = 0;
// //   for (int i = 0; i < row; i++) {
// //     sum = sum + arr[i][i];
// //   }
// //   cout << "The sum of diagonal is " << sum << endl;
// // }

// // printing the diagonla
// // void printDiagonal(int arr[3][3], int row, int col) {

// //   for (int i = 0; i < row; i++) {
// //     cout << arr[i][i] << " ";
// //   }
// // }
// // print reverse diagonl

// // transpose of matrix
// // void transpose(int arr[3][3], int row, int col) {
// //   for (int i = 0; i < row; i++) {
// //     for (int j = i; j < row; j++) {
// //       // why here we have started with j=i
// //       swap(arr[i][j], arr[j][i]);
// //     }
// //   }
// //   // printig the matrix
// //   for (int i = 0; i < row; i++) {
// //     for (int j = 0; j < col; j++) {
// //       cout << arr[i][j];
// //     }
// //     cout << endl;
// //   }
// // }
//   int main() {

// //     // printing the sum of diagoal elements
// //     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// //     int row = 3;
// //     int col = 3;

// //     printDiagonalSum(arr, 3 = row, col);

// //     // // printing the the row sum
// //     // int arr[3][3] ={
// //     //   {1,2,3},
// //     //   {4,5,6},
// //     //   {7,8,9}
// //     // };
// //     // int row=3;
// //     // int col = 3;
// //     // printArray(arr,row,col);
// //     // cout<<endl;
// //     // printRowSum(arr,row,col);
// //     // // cout<<endl;
// //     // printColSum(arr, row, col);
// //     //   // Finding the maximum and min number in the 2 d array
// //     //   int arr[3][3]= {{1,2,3},
// //     //   {4,5,6},
// //     //   {7,8,9}
// //     // };
// //     //   maxi(arr,3,3);
// //     //   mini(arr,3,3);

// //     // // searching in 2 d array
// //     // int arr[3][3]={
// //     // {10,20,30},
// //     // {40,50,60},
// //     // {70,80,90}
// //     // };
// //     // int row =3;
// //     // int col =3;
// //     // int key =70;
// //     // int ans =searching2dArray(arr,row,col,key);
// //     // if(ans == true){
// //     //   cout<<"Present hai ";
// //     // }
// //     // else
// //     // {
// //     //   cout<<"Absent hai";
// //     // }

// //     // // input
// //     //   int arr[3][3];
// //     //   for(int i=0;i<3;i++){
// //     //     for(int j=0;j<3;j++){
// //     //       cout<<"Enter row:- "<<i<<"Enter col:-"<<j<<endl;
// //     //       cin>>arr[i][j];
// //     //     }

// //     //   }
// //     //   // output
// //     //   for(int i=0;i<3;i++){
// //     //     for(int j=0;j<3;j++){

// //     //       cout<<arr[i][j];
// //     //     }
// //     //     cout<<endl;
// //     //   }

// //     //   int arr[3][3] ={
// //     //   {1,2,3},
// //     //    {4,5,6},
// //     //   {7,8,9}
// //     //   };
// //     // int row =3;
// //     // int col =3;
// //     //   printArray(arr, row, col);
// //     //   cout<<endl;
// //     //   printColArray(arr, row, col);

// //     // // 2 d
// //     // int arr[3][3] ={
// //     // {1,2,3},
// //     // {4,5,6},
// //     // {7,8,9}
// //     // };

// //     // cout<<arr[0][0];

// //     // 1d access
// //     // int arr[5]= {1,2,3,4,5};
// //     // cout<<arr[3];

// //     // int arr[4][3];

// //     // int row = 2;
// //     // int col = 4;

// //     // int arr[2][4] = {
// //     //   {1, 2, 3, 4},
// //     //   {2, 4, 6, 8}
// //     // };

// //     // printArray(arr, row, col);
// //     // array -jacked
// //   vector<vector<int>> arr;

// //   vector<int> v1(5, 1);
// //   vector<int> v2(6, 13);
// //   vector<int> v3(10, 14);
// //   vector<int> v4(11, 17);
// //   vector<int> v5(12, 101);

// //   arr.push_back(v1);
// //   arr.push_back(v2);
// //   arr.push_back(v3);
// //   arr.push_back(v4);
// //   arr.push_back(v5);

// //   // printing the jacked array
// //   for (int i = 0; i < arr.size(); i++) {
// //     for (int j = 0; j < arr[i].size(); j++) {
// //       cout << arr[i][j] << " ";
// //     }
// //     cout << endl;
// //   }

//   // // creating the 2 d vector
//   // // vector<vector<int>>arr;

//   // vector<vector<int>> arr(5,vector<int>(10,0));
//   // // printing the vecotor
//   // // int row =5;
//   // // int col =10;
//   // for(int i=0;i<arr.size();i++){
//   //   for(int j=0;j<arr[i].size();j++){
//   //     cout<<arr[i][j]<<" ";
//   //   }
//   //   cout<<endl;
//   // }

//   // vector<int> v;

//   // cout<<v.size()<<endl;

//   // // cretating the 1 d vector
//   // vector<int> v(5,-1);
//   // // cout<<sizeof(v)<<endl;
//   // // cout<<v.size()<<endl;
//   // // printig the vector
//   // for(int i=0;i<v.size();i++){
//   //   cout<<v[i]<<" ";
//   //   cout<<endl;
//   // }
//   // cout<<v.empty()<<endl;

//   // // // printing the right trange
//   // int n;
//   // cin >>n;
//   // for(int i=0;i<n;i++){
//   //   for(int j=i;j<n;j++){
//   //     cout<<"*";
//   //   }
//   //   cout<<endl;
//   // }

//   // // transposing a matrix
//   // int arr[3][3] ={
//   // {1,2,3},
//   // {4,5,6},
//   // {7,8,9}
//   // };

//   // int row =3;
//   // int col =3;
//   // transpose(arr,row,col);
//   // int arr[3][3]={
//   // {1,2,3},
//   // {4,5,6},
//   // {7,8,9}
//   // };

//   // int row =3;
//   // int col =3;
//   // printDiagonalSum(arr,row,col);
//   // printDiagonalSum2(arr,row,col);
//   // printDiagonal(arr,row,col);
//   }