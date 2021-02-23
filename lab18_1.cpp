#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect X,Rect Y){
	double O;
	O = (max(X.x,Y.x)-min((X.x+X.w),(Y.x+Y.w))) * (max((X.y-X.h),(Y.y-Y.h))-min(X.y,Y.y));
	if(O>0){
		return O;
	}else{
		return 0;
	}
}
