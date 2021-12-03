#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=1;i<=t;i++){
	    int n;
	    cin>>n;
	    
	    string s=to_string(n);
	    
	    string a="";
	    for(int j=s.length()-1;j>=0;j--){
	        a=a+s[j];
	    }
	    int num=stoi(a);
	    cout<<num;
	    cout<<endl;
	}
	return 0;
}


/* 
   CODECHEF
   PROBLEM CODE _ FLOW007
   SOLUTION CODE _ 54633990
*/