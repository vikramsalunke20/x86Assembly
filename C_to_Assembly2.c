// C to Assembly 2

#include<stdio.h>

int function2(){
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