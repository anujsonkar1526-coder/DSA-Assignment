#include<iostream>
#include<vector>
#include<stack>
using namespace std;

    int main(){

        int n;
        cin>>n;
        vector<int> prices(n);
        for(int i=0; i<n; i++){
            cin>>prices[i];
        }

        // declared stack to share indices

        stack<int> s;

        
            

        for(int i = 0; i < n; i++) {
            // jabtk stack ke top pe chota element h abhi se tab tk nikalo

        while(!s.empty() && prices[s.top()] <= prices[i]) {
            s.pop();
        }

        if(s.empty())
            prices[i] = i + 1;
        else
            prices[i] = i - s.top();

        s.push(i);
    }

    cout << "prices";

    for(int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }

    return 0;
    

    }
