#include <stdio.h>
#include <graphics.h>

void main()
{
    int pts[] = {320, 150, 400, 213, 250, 250, 350, 320, 150, 111}; //Points for drawpoly

    int gd = DETECT, gmode, color, maxx, maxy;

    initgraph(&gd, &gmode, "C:\\TURBOC3\\BGI");

    maxx = getmaxx();
    maxy = getmaxy();

    circle(100, 130, 50);
    putpixel(100, 130, GREEN);

    color = getpixel(100, 130);

    line(0, 220, maxx, 220);


    line(30, 280, 220, 380);
    gotoxy(42, 4);
    moveto(540, 85);         //Moving to the location

    lineto(350, 180);            //Drawing a line fron cursor location to (350,180)
    gotoxy(42, 16);              //Putting cursor on the location
    arc(400, 400, 15, 120, 100); //Drawing a arc

    gotoxy(1, 25); //Putting cursor on the location
    getch();       //Pause to get user input
    cleardevice(); //Clearing screen

    line(0, 220, maxx, 220);
    line(320, 30, 320, maxy - 80);

    gotoxy(1, 3); //Placing cursor on new location
    gotoxy(42, 4); 
    pieslice(100, 200, 20, 120, 120); //Drawing a Pieslice
    gotoxy(42, 3);                    //Placing cursor on new location

    gotoxy(42, 16);
    ellipse(450, 130, 0, 300, 100, 50); //Drawing a Ellipse
    gotoxy(1, 16);

    rectangle(360, 280, 540, 380); //Drawing a rectangle
    gotoxy(1, 25);
    getch();                       //Pause to get user input
    line(320, 45, 320, maxy - 80);
    
    gotoxy(1, 6);     //Placing cursor on a new location
    drawpoly(4, pts); //Draw a polygon
    gotoxy(1, 25);

    getch();      //Pause to get the user input
    closegraph(); //Closing graphics mode
}
