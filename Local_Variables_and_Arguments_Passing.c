// C to Assembly Conversion - Local Variables and Arguments 

#include<stdio.h>

int function(int arg1, int arg2){
	
	int x = arg1;
	int y = arg2;
	
	int var1 = 3;
	int var2 = 4;

	return var2;
}

int main(){

	int a = 1;
	int b = 2;
	
	int value = function(a,b);
	
	return 0x11111111;
}