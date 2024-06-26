/  #include<iostream>
using namespace std;
int main(){
	int a=10;
	float b= 1.5;
	int *z;
	float *p;
	p= &b;
	z= &a;
	cout<<"address of value a: "<<z<<" Value of z+1 : "<<z+1<<" Value of z+2 : "<<z+2 <<endl;
	cout<<p <<" "<< p+1;
	return 0;
}



	
// z contains address of variable a..
// as we increase the value of pointer z , address is increase by 4 numbers in the last.. as we know address is 
//stored in hexadecimal form... if we add integer value, hexadecimal value will increase by 4 bcoz size of integer
// is 4 bytes....







// getting an address of each element in array using pointer method...


#include<iostream>
using namespace std;
int main(){
	int a[5];
	int *p;
	p= &a[0];
	cout<<"Address of element at 0th ndex in array: "<<p<<endl;
	return 0;
}







// giving elements inside the array and then printing the value and address of each index of an array.... 




#include<iostream>
using namespace std;
int main(){
	int Array[5];
	int *p;
	int i;
	for(i=0;i<=5;i++){
		cin>>Array[i];
		cout<<"Value of "<<i<<" position in array : "<<Array[i]<<endl;
		cout<<"Address of "<<i<<" position in array : "<<&Array[i]<<endl;
		
		
	}
	return 0;
}
