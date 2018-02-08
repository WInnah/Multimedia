#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int solve(int,char,double x,float,int,int);
int main()
{
    COLORREF color = RGB(0, 0, 255); // COLORREF to hold the color info
	int x1, x2;
	int y1, y2;
	int x, y;
	
	cout << "x1: ";
    cin >> x1;
    cout << "\ny1: ";
    cin >> y1;
    cout << "\nx2: ";
    cin >> x2;
    cout << "\ny2: ";
    cin >> y2;
    
    if (x1 >= x2){
    	x = x2;
	}else{
		x = x1;
	}
	
	if (y1 >= y2){
		y = y2;
	}else{
		y = y1;
	} 
	
	int width = abs(x1-x2);
	int height = abs(y1-y2);
	
	cout << x << endl;
	cout << y << endl;
	cout << height << endl;
	cout << width << endl;
    
	HWND hwnd;
	HDC hdc;
	
    while (true){
    	HWND hwnd = GetConsoleWindow(); // Get the HWND
		HDC hdc = GetDC(hwnd); // Get the DC from that HWND
	
	    for( int i = y ; i < y+height; i++ ){
	    	//for (int j = x; j < x+width; j++){
	    	//	if (j == x|| i == y|| i == y+height || j == x+width){
					SetPixel(hdc, x, i, color); // SetPixel(HDC hdc, int x, int y, COLORREF color)	
			//	}
			//}
	    }
	}

	ReleaseDC(hwnd, hdc); // Release the DC
    DeleteDC(hdc); // Delete the DC
    system("pause");
    
    return(0);
}
