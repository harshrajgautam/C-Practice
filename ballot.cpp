#include<iostream>
using namespace std;
int main(){
	int votecount;
	int ballot[6] = {0};
	cout<<"enter the votecount:"<<endl;
	cin>>votecount;
	while(votecount>0){
		int vote;
		cout<<"enter the vote:"<<endl;
		cin>>vote;
		switch(vote>=1 && vote<=5){
			case 1:
				ballot[vote]++;
				break;
			case 0:
			ballot[0]++;
		
	}
	votecount--;
}
for(int i=1;i<=5;i++){
	cout<<"the vote for the candidates are :"<<ballot[i]<<endl;
}
cout<<"invalid vote: "<<ballot[0];
return 0;
}

