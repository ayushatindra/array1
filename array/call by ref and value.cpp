#include <iostream>
using namespace std;
// Example of call by value
void IncreaseByOne(int &k){
  k++;
  cout<<k<<endl;
  
}

int main() {

  int n;
  cin>>n;
  IncreaseByOne(n);
  cout<<n<<endl;
 // // Function call by value and reference 
 //  int n=5;
 //  // creating reference valiabe
 //  int &ref=n;
 //  cout<<ref<<endl;
 //  int &p=n;
 //  int &q =n;
 //  int &ayush =n;
 //  cout<<n<<endl;
 //  cout<<p<<endl;
 //  cout<<q<<endl;
 //  cout<<ayush<<endl;
 //  p++;
 //  cout<<n;
 //  // int &p=8; error

  
  
  
}