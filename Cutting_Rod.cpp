#include<bits/stdc++.h>
#include<sys/types.h>
#include<unistd.h>
#define FOR(i,x,y) for(int i = (x) ; i <= (y) ; ++i)
#define speed ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
#define endl "\n"
#define vlong long long int 
#define input 8
#define mod 1000000007

int cut_rod ( int p[] , int n ,int length) {
	
	int look_up[length+1]={0}, temp;
	//max_price[0]=0;

    if(n == 0)
    	return 0;

    FOR(i,1,n) {

          temp =INT_MIN;

	          FOR(j,0,i-1) 
		  temp = max(temp, p[j] + look_up[i-j-1]); 

          look_up[i] = temp;

}

       return look_up[n];

}
int main() {

	//speed 

	int p[]={1,5,8,9,10,17,17,20,24,30};
	cout<< cut_rod(p,input,sizeof(p)/sizeof(int))<<endl; 
         		// cout<<sizeof(p)<<endl;
}
