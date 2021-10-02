#include <iostream>
using namespace std;
int main(){
  cout<<"Enter the number of values: ";
  double n; cin>>n;
  cout<<endl;
  double sum=0;
  cout<<"Enter the values: ";
  int a;
  for(int i=0; i<n; i++){
    cin>>a;
    sum+=a;
  }
  cout<<endl<<sum/n<<endl;
}
