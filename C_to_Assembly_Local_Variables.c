// C to Assembly - Local Variables

#include<stdio.h>

int function(){
	int x = 3;
	int y = 4;
	return 0xBBBBBBBB;
}

int main(){
	int a = 1;
	int b = 2;
	function();
	return 0xAAAAAAAA;
}