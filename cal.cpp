#include<iostream>
using namespace std;
class Cal{
	private:
		int x,y;
	public:
		Cal(){
			x=0;
			y=0;
		}
		int add(int ,int);
		int sub(int ,int);
		int mul(int ,int);
		int div(int, int);
};
int Cal::add(int x,int y){
	return x+y;
}
int Cal::sub(int x, int y){
	return x-y;
}
int Cal::mul(int x, int y){
	return x*y;
}
int Cal::div(int x, int y){
	return x/y;
}
int main(){
	Cal obj;
	cout<<"add is " <<obj.add(4,6)<<endl;
	cout<<"sub is "<<obj.sub(6,5)<<endl;
	cout<<"mul is "<<obj.mul(6,3)<<endl;
	cout<<"Div is "<<obj.div(10,2)<<endl;
	return 0;
}
