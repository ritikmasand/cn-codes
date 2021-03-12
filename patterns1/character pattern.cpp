#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        
        while(j<=i){
            char ch='A'+i-2+j;
            cout<<ch;
            j++;
        }
    cout <<endl;
        i++;}

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
