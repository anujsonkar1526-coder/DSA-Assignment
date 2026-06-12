//question number1

#include <iostream>
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


#include <iostream>
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


#include <iostream>
#include<vector>

using namespace std;

int main() {

   int t;
   cin >> t;
   while (t--) {
      int n, k;
      cin >> n >> k;

      vector<int> v(n, 0);
      int i = 0;

      while (k) {
         v[i] += k;
         k--, i++;
         if (i == n) {
            i = 0;
            reverse(v.begin(), v.end());
         }
      }

      cout << *max_element(v.begin(), v.end()) << endl;
   }

   return 0;
}


//Question 4..


#include <bits/stdc++.h>

using namespace std;

int main() {

   int t;
   cin >> t;
   while (t--) {
      int a, b, c;
      cin >> a >> b >> c;
      if (a == b) cout << 0 << endl;
      else if (__gcd(a, c) == __gcd(b, c)) cout << 1 << endl;
      else if (__gcd(a, c + 1) == __gcd(b, c + 1)) cout << 2 << endl;
      else cout << 3 << endl;
   }

   return 0;
}



