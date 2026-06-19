// Question 1..

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	int ans=y-x;
	if(ans<0){
	    ans=ans*-1;
	}
	if(ans<=2){
	    cout<<"Interesting"<<endl;
	}
	else{
	    cout<<"Boring"<<endl;
	}
	
	return 0;

}


// Question 2....


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int m,n;
	    cin>>m>>n;
	    
	  if (n<= m)
            cout << m-n <<endl;
        else
            cout << (n-m) % 2 <<endl;
    }

     
	    
	
	
   return 0;
}


// Question 4..


#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    sort(v.begin(),v.end());
	    int ans=v[n-1]-v[n-2];
	    cout<<ans<<endl;
	}
	return 0;
}
