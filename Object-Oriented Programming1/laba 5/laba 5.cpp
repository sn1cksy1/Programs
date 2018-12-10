#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>

class Geom{
	protected:
		double xc, yc;
		double angle;
		double scale;
	public:
		Geom() {
		xc=yc=angle=0.0; 
		scale=1.0; 
		angle=0;
		}
		
		void rotate(double r){
		angle=r/180*M_PI;
		}
		
		void move(double x, double y){
		xc+=x;
		yc-=y;
		}
};

class Triangle: public Geom{
	int n;
	public:
		Triangle():Geom() {n=3;}
		void show();
		void unshow();
};

void Triangle::show(){
	int i;
	i=getcolor();
	setcolor(2);
	line(0,240,639,240);
	line(320,0,320,479);
	setcolor(3);

	setcolor(i);
	double x1,y1,x2,y2;
	double dn=3; 
	double ugol=M_PI*2/dn;
	double k1=angle;
	double k2;
	for(i=1;i<=n;i++){
		k2=k1+ugol;
		x1=cos(k1); y1=sin(k1);
		x2=cos(k2); y2=sin(k2);
		line(x1*100+320+xc,240+y1*100-yc,x2*100+320+xc,240+y2*100-yc);
		k1+=ugol;
	}
    setcolor(15);
}

void Triangle::unshow(){
	setcolor(0);
	show();
}


int main(){
	double xc,yc,ug;
	
	printf("\nEnter axle shifts(x): ");
	scanf("%4f", &xc);
	printf("\nEnter axle shifts(y): ");
	scanf("%4f", &yc);
	printf("\nEnter rotate degrees: ");
	scanf("%4f", &ug);
	
	int gd=DETECT,gm,i;
	char p[120]="";
	initgraph(&gd, &gm, p);
	
	class Geom obj1;
	class Triangle obj;
	obj1.move(xc,yc);
	obj1.rotate(ug);
	
	setcolor(15);
	obj.show();
	
	int k;
	do{
		k=getch();
	if(k=49) obj.show();
	if (k=13) obj.unshow();
	}
	  while(k!=27 && k!=13);
closegraph();
}