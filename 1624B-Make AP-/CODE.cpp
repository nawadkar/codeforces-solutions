#include<bits/stdc++.h>
using namespace std;

bool ans(int a1,int a2,int a3){
	
		int d;
		

		for(int i = 1;i<=3;i++){
			if(i == 1){
				d = a3-a2;
				if((a2-d)%a1 == 0){
					if((a2-d) > 0){
						return true;
					}
				}
			}

			else if(i == 2 && (a3-a1)%2 == 0){
				d = (a3-a1)/2;
				if((a1+d)%a2 == 0){
					if((a1+d) > 0){
						return true;
					}
				}	
			}

			else if(i == 3){
				d = a2-a1;
				if((a2+d)%a3 == 0){
					if((a2+d) > 0){
						return true;
					}	
				}
			}
			
		}
		return false;
}

int main(){

	int t;
	cin>>t;

	while(t--){

		int a1,a2,a3;
		cin>>a1>>a2>>a3;

		if(ans(a1,a2,a3) == 0){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
}
