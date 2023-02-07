#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

//Write definition of shuffle() using pointer here 
void shuffle(int *a,int *b,int *c,int *d){
	int t = rand()%3+1;
	int w,x,y,z;
	w=*a;
	x=*b;
	y=*c;
	z=*d;
	switch (t)
	{
	case 1:
		*a=x;
		*b=y;
		*c=z;
		*d=w;
		break;
	case 2:
		*a=y;
		*b=z;
		*c=w;
		*d=x;
		break;
	case 3:
		*a=z;
		*b=w;
		*c=x;
		*d=y;
		break;
	default:
		break;
	}
}