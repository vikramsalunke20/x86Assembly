// C to Assembly - Arguments Passing

#include<stdio.h>

int function(int arg1, int arg2){
	return 0xBBBBBBBB;
}

int main(){
	function(1,2);
	return 0xAAAAAAAA;
}