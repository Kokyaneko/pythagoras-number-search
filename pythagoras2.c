#include <stdio.h>
#include <stdlib.h>

int main (int argc,char *argv[]){
	if(argc!=2){
		puts("Usage:pythagoras <limit nunber>");
		return 1;
	}

	long long x,y,z;
	int ln = atoi(argv[1]);

	puts("x y z : x^2 + y^2 = z^2");

	for(x=1;x<=ln;x++){
		for(y=x;y<=ln;y++){
			for(z=x;z<=ln;z++){
				if(x*x+y*y==z*z)printf("%lld %lld %lld\n",x,y,z);
			}
		}
	}
	return 0;
}
