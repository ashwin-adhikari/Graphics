#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<cmath>
using namespace std;
int main(){
	float x1,x2,y1,y2,dx,dy,xinc,yinc,x,y,p0;
	int k=0;
	initwindow(400,400, "DDA alogrithm");
	cout<<"Enter x1 & y1 ";
	cin>>x1>>y1;
	cout<<"Enter x2 & y2 ";
	cin>>x2>>y2;
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	x=x1;
	y=y1;
	xinc=1,yinc=1;
	if(x2<x1){
		xinc=-1;
	}
	
	if(y2<y1){
		yinc=-1;
	}
    if(dx>dy){
    	p0=2*dy-dx;
    	do{
    		if(p0>0){
    			x=x+xinc;
    			y=y+yinc;
    			p0=p0+2*dy-2*dx;
    			putpixel(x1,y1,4);
			}
			else{
				putpixel(x1,y1,4);
				x+=xinc;
				y=y;
				p0=p0+2*dy;
				
			}
		}
	
		while(k!=dx);
	}
	else{
		p0=2*dx-dy;
		do{
			if(p0>0){
				putpixel(x1,y1,4);
				x+=xinc;
				y+=yinc;
				p0=p0+2*dx-2*dy;
				
			}
			else{
				putpixel(x1,y1,4);
				x=x;
				y+=yinc;
				p0=p0+2*dx;
				
			}
		}
		
		while(k!=dy);
	}
	delay(100);
	getch();
    closegraph();	
}
