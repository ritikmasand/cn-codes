#include<iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int sume=0;
    int sumo=0;
  
    int i=0;
    while(n!=0){
        int rem =n%10;
        if(rem%2==0){
            sume=sume+rem;
        }
        else{
            sumo+= rem;
        }
        n=n/10;
    }
    cout<<sume<<" "<<sumo;
	
}
