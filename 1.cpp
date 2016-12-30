#include <stdio.h>
#include <math.h>
 int isJully(int n){
	 int *Elem=new int[n],//array for all inserted element
	     *Diff=new int[n-1]; //array for the ablulote diffrense

	 bool*flag=new bool[n-1]; // array to chek the value of the diffrence
	 
	 for( int i = 0 ;i <n;i++){
		 scanf("%d",Elem+i); //insert the elemnts
	 }

	 for(int i = 0 ; i <n;i++){
		 Diff[i]=abs((int)(Elem[i]-Elem[i+1])); //find the diffrence
		 
	 }
	for(int i = 1;i<n;i++){
		for(int j =0;j<n-1;j++){
				if(Diff[j]==i) flag[i-1]=1;	 //chek if the diffrence is between 1&n-1
		}
	}
	for(int i = 0;i<n-1;i++){
		if(flag[i]==0)return 0;
	}
	return 1;
	
 }
void main(){
	int	 n;//numper of elements
 	scanf("%d",&n);
	printf("result:-%d",isJully(n));
}
