//question number1

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; 
	cin>>n;
	if(n%5==0){
	    cout<<"No"<<endl;
	}
	else{
	    cout<<"Yes"<<endl;
	}
	
	return 0;

}




















//Question number2


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string str;
	    cin>>str;
	    string str1;
	    cin>>str1;
	    string str2;
	    
	   // sort(str.begin(), str.end());
	   // sort(str1.begin(), str1.end());
	    for(int i=0; i<str.size(); i++){
	        if(str[i]==str1[i]){
	            str2.push_back(str[i]);
	        }
	    }
	    
	    cout<<str2<<endl;
	}
	return 0;

}


// Question 3...



