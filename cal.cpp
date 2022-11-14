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
};
int Cal::add(int x,int y){
	return x+y;
}
int Cal::sub(int x, int y){
	return x-y;
}
int main(){
	Cal obj;
	cout<<"add is " <<obj.add(4,6)<<endl;
	cout<<"sub is "<<obj.sub(6,5)<<endl;
	return 0;
}
