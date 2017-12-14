// C to Assembly 3

#include<stdio.h>

int function3(){
	return 0x33333333;
}

int function2(){
	function3();
	return 0x22222222;
}

int function1(){
	function2();
	return 0x11111111;
}

int main(){
	function1();
	return 0xAAAAAAAA;
}