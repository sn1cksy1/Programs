#include <iostream>

using namespace std;

public class Rectangle1 {

	private int width, height, area;
	

	public Rectangle1() {

		width = 10;
		height = 5;
		area = (width * height);}

	


	public static String getName() {
		return NAME;
	}

	public void setHeight(int h) {
		height = h;
	}

	public void setWidth(int w) {
		width = w;
	}

	public void setArea(int s) {
		area = s;
	}

	public int getWidth() {
		return width;
	}

	public int getHeight() {
		return height;
	}

	public int getArea() {
		return (width * height);
	}

	public void combine(Rectangle1 r) {
		width += r.width;
		height += r.height;
		area += r.area;
	}

}

int main()
{

int heigh, width;
		
		cout<<"VVedit shyrynu prjamokutnyka"<<endl;
		cin>>hight;
		cout<<"VVedit dovzhynu prjamokutnyka"<<endl;
		cin>>width;

		Rectangle1 r1 = new Rectangle1(hight, width, 0);

		cout<<"Rectangle1.getName()"<<endl;

		cout<<"R1 : " + r1.getWidth() + " x " + r1.getHeight()+ " sm"<<endl;

	cout<<"S :" + r1.getArea() + " sm ";

	}
}
}
