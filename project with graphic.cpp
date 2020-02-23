//#include "stdafx.h"
#include <windows.h>
#include <fstream>
#include<iostream>
#include "myconsole.cpp"
#include "myconsole.h"

using namespace std;

class shape
{
private:
	int x, y;
	char *str;
	char *space;

public:
	shape();
	void  setx(int x1);
	int  getx();
	void  sety(int y1);
	int  gety();
	void  draw(int x, int y);
	void  drawspace(int x, int y);

};


class shape1
{
private:
	shape sh1;
	int x, y;
	char *str1;
	char *space1;
public:
	shape1();
	void  setx(int x1);
	int  getx();
	void  sety(int y1);
	int  gety();
	void  draw1(int x, int y);
	void  draw1space1(int x, int y);
	void  moveright1(int &x, int &y);
	void  moveleft1(int &x, int &y);
	void  movedown1(int &x, int &y);
	void fill(int x, int y, int ***array);
};

class shape2
{
private:
	shape sh2;
	int x, y;
	char *str2;
	char *space2;
public:
	shape2();
	void  setx(int x1);
	int  getx();
	void  sety(int y1);
	int  gety();
	void  draw2(int x, int y);
	void  draw2space2(int x, int y);
	void  moveright2(int &x, int &y);
	void  moveleft2(int &x, int &y);
	void  movedown2(int &x, int &y);
	void fill1(int x, int y, int ***array);
	void rotate2(int x, int y);
	void rotate2_drawspace(int x, int y);
	void rotate2_fill2(int x, int y, int ***array);
	void rotate2_moveright2(int &x, int &y);
	void rotate2_moveleft2(int &x, int &y);
	void rotate2_movedown2(int &x, int &y);
};

class shape3
{
private:
	shape sh3;
	int x, y;
	char *str3;
	char *space3;

public:
	shape3();
	void  setx(int x1);
	int   getx();
	void  sety(int y1);
	int   gety();
	void  draw3(int x, int y);
	void  draw3space3(int x, int y);
	void  moveright3(int &x, int &y);
	void  moveleft3(int &x, int &y);
	void  movedown3(int &x, int &y);
	void  rotate3(int x, int y);
	void  rotate3space3(int x, int y);
	void  rotate3moveright3(int&x, int &y);
	void  rotate3moveleft3(int &x, int &y);
	void  rotate3movedown3(int &x, int &y);
	void  rotate3_1(int x, int y);
	void  rotate3_1space3(int x, int y);
	void  rotate3_1moveright3(int&x, int &y);
	void  rotate3_1moveleft3(int &x, int &y);
	void  rotate3_1movedown3(int &x, int &y);
	void  rotate3_2(int x, int y);
	void  rotate3_2space3(int x, int y);
	void  rotate3_2moveright3(int&x, int &y);
	void  rotate3_2moveleft3(int &x, int &y);
	void  rotate3_2movedown3(int &x, int &y);
	void  fill(int x, int y, int ***array);
	void  fill3(int x, int y, int ***array);
	void  fill3_1(int x, int y, int ***array);
	void fill3_2(int x, int y, int ***array);


};

class mover
{

private:
	shape1 a1;
	shape2 a2;
	shape3 a3;
	int x;
	int y;
	int **array;
public:
	mover();
	void setx(int x1);
	void sety(int y1);
	int getx();
	int gety();
	void  mover1(int p, int q, int***array);
	void  mover2(int p, int q, int ***array);
	void mover2rotate2(int p, int q, int ***array);
	void  mover3(int p, int q, int ***array);
	void  mover3rotate3(int p, int q, int ***array);
	void  mover3rotate3_1(int p, int q, int ***array);
	void  mover3rotate3_2(int p, int q, int ***array);
};


 shape::shape()
{
	x = 0; y = 0;
	str = NULL;
	space = NULL;
}

void shape::setx(int x1)
{
	x = x1;

}

int shape::getx()
{
	return x;
}

void shape::sety(int y1)
{
	y = y1;
}
int shape::gety()
{
	return y;
}
void shape::draw(int x, int y)
{
	str = new char[2];
	str[0] = NULL;
	str[1] = '*';

	OutputString(x, y, str);
}
void shape::drawspace(int x, int y)
{
	space = new char[2];
	space[0] = NULL;
	space[1] = ' ';

	OutputString(x, y, space);
}




// draw shape1



shape1::shape1()
{
	x = 0; y = 0;
	str1 = NULL;
	space1 = NULL;
}

void shape1::setx(int x1)
{
	x = x1;

}

int shape1::getx()
{
	return x;
}
void shape1::sety(int y1)
{
	y = y1;

}
int shape1::gety()
{
	return y;
}

void shape1::draw1(int x, int y)
{
	for (int i = 0; i < 2; i++)
	{
		sh1.draw(x, y);
		SetColorAtPoint(x, y, 60);
		y++;
	}cout<<endl;
	for(int j=0;j<3;j++)
    {
        sh1.draw(x,y);
        SetColorAtPoint(x,y,60);
        x++;
    }
}

void shape1::draw1space1(int x, int y)
{
    for (int i = 0; i < 2; i++)
	{
		sh1.drawspace(x, y);
		y++;
	}cout<<endl;
	for(int j=0;j<3;j++)
    {
        sh1.drawspace(x,y);
        x++;
    }
}
void shape1::fill(int x, int y, int ***array)
{
    int **arr=*array;
    for (int i = 0; i < 2; i++)
	{
		arr[x][y]=1;
		y++;
	}cout<<endl;
	for(int j=0;j<3;j++)
    {
        arr[x][y]=1;
        x++;
    }
}
void shape1::moveright1(int &x, int &y)
{
	if (x<19)
	{

		draw1space1(x, y);
		x++;

		draw1(x, y);
	}

}
void shape1::moveleft1(int &x, int &y)
{
	if (x>1)
	{

		draw1space1(x, y);
		x--;

		draw1(x, y);
	}

}
void shape1::movedown1(int &x, int &y)
{
	if (y<22)
	{

		draw1space1(x, y);
		y++;

		draw1(x, y);
	}

}








//shape2




shape2::shape2()
{
	x = 0; y = 0;
	str2 = NULL;
	space2 = NULL;
}

void shape2::setx(int x1)
{
	x = x1;

}

int shape2::getx()
{
	return x;
}
void shape2::sety(int y1)
{
	y = y1;

}
int shape2::gety()
{
	return y;
}

void shape2::draw2(int x, int y)

{
	for (int i = 0; i < 3; i++)
	{
		sh2.draw(x, y);
		SetColorAtPoint(x, y, 60);
		y++;
	}
}
void shape2::draw2space2(int x, int y)

{
	for (int i = 0; i < 3; i++)
	{
		sh2.drawspace(x, y);
		y++;
	}
}
void shape2::fill1(int x, int y, int ***array)
{
	int **arr = *array;
	mover a2;
	for (int i = 0; i < 3; i++)
	{
		arr[x][y] = 1;
		y++;
	}
}



void shape2::moveright2(int &x, int &y)
{
	if (x<21)
	{

		draw2space2(x, y);
		x++;

		draw2(x, y);
	}

}


void shape2::moveleft2(int &x, int &y)
{
	if (x>1)
	{

		draw2space2(x, y);
		x--;

		draw2(x, y);
	}

}

void shape2::movedown2(int &x, int &y)
{
	if (y<22)
	{

		draw2space2(x, y);
		y++;

		draw2(x, y);
	}

}

void shape2::rotate2(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		sh2.draw(x, y);
		SetColorAtPoint(x, y, 25);
		x++;
	}
}
void shape2::rotate2_drawspace(int x, int y)
{
	for (int i = 0; i < 4; i++)
	{
		sh2.drawspace(x, y);
		x++;
	}
}
void shape2::rotate2_fill2(int x, int y, int ***array)
{
	int **arr = *array;
	for (int i = 0; i < 4; i++)
	{
		arr[x][y] = 1;
		x++;
	}
}
void shape2::rotate2_moveright2(int &x, int &y)
{
	if (x < 18)
	{
		rotate2_drawspace(x, y);
		x++;
		rotate2(x, y);
	}
}
void shape2::rotate2_moveleft2(int &x, int &y)
{
	if (x > 1)
	{
		rotate2_drawspace(x, y);
		x--;
		rotate2(x, y);
	}
}
void shape2::rotate2_movedown2(int &x, int &y)
{
	if (y < 24)
	{
		rotate2_drawspace(x, y);
		y++;
		rotate2(x, y);
	}
}
//shape3




shape3::shape3()
{
	x = 0; y = 0;
	str3 = NULL;
	space3 = NULL;
}

void shape3::setx(int x1)
{
	x = x1;

}

int shape3::getx()
{
	return x;
}
void shape3::sety(int y1)
{
	y = y1;

}
int shape3::gety()
{
	return y;
}

void shape3::draw3(int x, int y)
{

	for (int j = 1; j<2; j++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		y++;

	}cout << endl;

	for (int k = 0; k<2; k++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		x++;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		y++;
	}

}

void shape3::draw3space3(int x, int y)
{

	for (int j = 1; j<2; j++)
	{

		sh3.drawspace(x, y);
		y++;

	}cout << endl;

	for (int k = 0; k<2; k++)
	{

		sh3.drawspace(x, y);
		x++;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.draw(x, y);
		y++;
	}

}
void shape3::fill(int x, int y, int ***array)
{
	int **arr = *array;
	for (int j = 1; j<2; j++)
	{

		arr[x][y] = 1;
		y++;

	}

	for (int k = 0; k<2; k++)
	{

		arr[x][y] = 1;
		x++;
	}

	for (int l = 0; l<2; l++)
	{
		arr[x][y] = 1;
		y++;
	}

}
void shape3::moveright3(int &x, int &y)
{
	if (x<19)
	{

		draw3space3(x, y);
		x++;

		draw3(x, y);
	}

}

void shape3::moveleft3(int &x, int &y)
{
	if (x>1)
	{

		draw3space3(x, y);
		x--;

		draw3(x, y);
	}

}
void shape3::movedown3(int &x, int &y)
{
	if (y<22)
	{

		draw3space3(x, y);
		y++;

		draw3(x, y);
	}

}

void shape3::rotate3(int x, int y)
{

	for (int j = 1; j<2; j++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		y++;

	}cout << endl;

	for (int k = 0; k<2; k++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		x--;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		y++;
	}



}

void shape3::rotate3space3(int x, int y)
{

	for (int j = 1; j<2; j++)
	{

		sh3.drawspace(x, y);
		y++;

	}cout << endl;

	for (int k = 0; k<2; k++)
	{

		sh3.drawspace(x, y);
		x--;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.drawspace(x, y);
		y++;
	}

}
void shape3::fill3(int x, int y, int ***array)
{
	int **arr = *array;
	for (int j = 1; j<2; j++)
	{
		arr[x][y] = 1;
		y++;

	}
	for (int k = 0; k<2; k++)
	{

		arr[x][y] = 1;
		x--;
	}

	for (int l = 0; l<2; l++)
	{
		arr[x][y] = 1;
		y++;
	}

}
void shape3::rotate3moveright3(int&x, int &y)
{

	if (x<21)
	{

		rotate3space3(x, y);
		x++;

		rotate3(x, y);
	}

}
void shape3::rotate3moveleft3(int &x, int &y)
{
	if (x>3)
	{

		rotate3space3(x, y);
		x--;

		rotate3(x, y);
	}

}
void shape3::rotate3movedown3(int &x, int &y)
{
	if (y<22)
	{

		rotate3space3(x, y);
		y++;

		rotate3(x, y);
	}

}

void shape3::rotate3_1(int x, int y)
{
	for (int k = 0; k<2; k++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		x--;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		y++;
	}
	for (int m = 0; m<2; m++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		x--;
	}



}
void shape3::rotate3_1space3(int x, int y)
{
	for (int k = 0; k<2; k++)
	{

		sh3.drawspace(x, y);
		x--;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.drawspace(x, y);
		y++;
	}
	for (int m = 0; m<2; m++)
	{

		sh3.drawspace(x, y);
		x--;
	}


}
void shape3::fill3_1(int x, int y, int ***array)
{
	int **arr = *array;
	for (int k = 0; k<2; k++)
	{

		arr[x][y] = 1;
		x--;
	}

	for (int l = 0; l<2; l++)
	{
		arr[x][y] = 1;
		y++;
	}
	for (int m = 0; m<2; m++)
	{

		arr[x][y] = 1;
		x--;
	}

}
void shape3::rotate3_1moveright3(int&x, int &y)
{
	if (x<21)
	{

		rotate3_1space3(x, y);
		x++;

		rotate3_1(x, y);
	}


}
void shape3::rotate3_1moveleft3(int &x, int &y)
{
	if (x>4)
	{

		rotate3_1space3(x, y);
		x--;

		rotate3_1(x, y);
	}
}
void shape3::rotate3_1movedown3(int &x, int &y)
{
	if (y<30)
	{

		rotate3_1space3(x, y);
		y++;

		rotate3_1(x, y);
	}

}
void shape3::rotate3_2(int x, int y)
{
	for (int k = 0; k<2; k++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		x++;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		y++;
	}
	for (int m = 0; m<3; m++)
	{

		sh3.draw(x, y);
		SetColorAtPoint(x, y, 80);
		x++;
	}



}
void shape3::rotate3_2space3(int x, int y)
{
	for (int k = 0; k<2; k++)
	{

		sh3.drawspace(x, y);
		x++;
	}

	for (int l = 0; l<2; l++)
	{
		sh3.drawspace(x, y);
		y++;
	}
	for (int m = 0; m<3; m++)
	{

		sh3.drawspace(x, y);
		x++;
	}
}
void shape3::fill3_2(int x, int y, int ***array)
{
	int **arr = *array;
	for (int k = 0; k<2; k++)
	{
		arr[x][y] = 1;
		x++;
	}

	for (int l = 0; l<2; l++)
	{
		arr[x][y] = 1;
		y++;
	}
	for (int m = 0; m<3; m++)
	{
		arr[x][y] = 1;
		x++;
	}


}

void shape3::rotate3_2moveright3(int&x, int &y)
{
	if (x<17)
	{

		rotate3_2space3(x, y);
		x++;

		rotate3_2(x, y);
	}

}
void shape3::rotate3_2moveleft3(int &x, int &y)
{
	if (x>1)
	{

		rotate3_2space3(x, y);
		x--;

		rotate3_2(x, y);
	}
}
void shape3::rotate3_2movedown3(int &x, int &y)
{
        if (y<22)
        {

            rotate3_2space3(x, y);
            y++;

            rotate3_2(x, y);
        }

}









///boundary



class boundary
{
private:
	shape bound;
	int x;
	int y;
	char *bn;
public:
	boundary();
	void  setx(int x1);
	void  sety(int y1);
	int getx();
	int gety();
	void  drawbound(int x, int y);


};

boundary::boundary()
{
	x = 0;
	y = 0;
	bn = NULL;
}

void boundary::setx(int x1)
{
	x = x1;
}

void boundary::sety(int y1)

{
	y = y1;
}

int boundary::getx()
{
	return x;
}
int boundary::gety()
{
	return y;
}
void boundary::drawbound(int x, int y)
{
	x = 0; y = 0;
	for (int l = 0; l<22; l++)
	{

		bound.draw(x, y);
		SetColorAtPoint(x, y, 100);
		x++;

	}

	x = 22;
	for (int i = 0; i<25; i++)
	{
		bound.draw(x, y);
		SetColorAtPoint(x, y, 100);
		y++;


	}
	x = 0, y = 25;
	for (int j = 0; j<22; j++)
	{

		bound.draw(x, y);
		SetColorAtPoint(x, y, 100);
		x++;

	}
	x = 0; y = 0;
	for (int k = 0; k<25; k++)
	{

		bound.draw(x, y);
		SetColorAtPoint(x, y, 100);
		y++;

	}

}





//score



class score
{

private:

	int x;
	int y;
	char *sc;


public:
	score();
	void  setx(int x1);
	void  sety(int y1);
	int  getx();
	int  gety();
	void  next(int x, int y);
};

score::score()
{
    y = 0;
    sc=NULL;
}

void score::setx(int x1)
{
	x = x1;
}

void score::sety(int y1)

{
	y = y1;
}

int score::getx()
{
	return x;
}
int score::gety()
{
	return y;
}

void score::next(int x, int y)
{

	sc = new char[11];
	sc[0] = 'N';
	sc[1] = 'E';
	sc[2] = 'X';
	sc[3] = 'T';
	sc[4] = ' ';
	sc[5] = 'S';
	sc[6] = 'H';
	sc[7] = 'A';
	sc[8] = 'P';
	sc[9] = 'E';
	sc[10] = NULL;
	for (int i = 0; i<11; i++)
	{
		char k = sc[i];
		OutputString(x, y, &k);
		SetColorAtPoint(x, y, 9);
		x++;

	}

	char a = ':';
	x = 60;
	OutputString(x, y, &a);
	SetColorAtPoint(x, y, 9);

}

class display
{
private:
    int x;
    int y;
    char *sc;
    shape bound;
public:
    display();
    void setx(int x1);
    void sety(int y1);
    int getx();
    int gety();
    void menu(int x,int y);
    void play();

};
display::display()
{
    x=0;
    y=0;
    sc=NULL;
}
void display::setx(int x1)
{
    x=x1;
}
void display::sety(int y1)
{
    y=y1;
}
int display::getx()
{
    return x;
}
int display::gety()
{
    return y;
}
void display::menu(int x,int y)
{
    int b;


    cin>>b;


    if(b==1)
    {
        ClearScreen();
        play();
    }
    if(b==2)
    {
        ClearScreen();
        cout<<"GAME ENDED";
    }



}

void display::play()
{
     mover m;


	shape();
	shape star;
	shape1 star1;
	shape2 star2;
	shape3 star3;
	boundary star4;
	score star5;
	star4.drawbound(40, 0);
	star5.next(50, 10);
	int **array;
	array = new int *[22];
	for (int i = 0; i<22; i++)
	{
		*(array + i) = new int[20];
	}

	for (int i = 0; i<22; i++)
	{
		for (int j = 0; j<20; j++)
		{
			array[i][j] = 0;
		}
	}
	m.mover3(15, 0, &array);
}





//movement


mover::mover()
{
	x = 0;
	y = 0;
}
void mover::setx(int x1)
{
	x = x1;
}
void mover::sety(int y1)
{
	y = y1;
}
int mover::getx()
{
	return x;
}
int mover::gety()
{
	return y;

}

void mover::mover1(int p, int q, int ***array)
{
	int **arr = *array;
	mover a;
	int u1 = 0;
	int slep = 150;
	int waitTime = 1000;
	shape2 next2;
	next2.draw2(55, 13);
	int console = 0;
	int check1 = CheckKeyPressed(waitTime);
	while (console != 1)
	{

		Sleep(slep);
		a1.draw1space1(p, q);

		if ((arr[p][q + 1] == 1) || (arr[p + 1][q + 2] == 1) || (arr[p + 2][q + 3] == 1))
		{
			a1.draw1(p, q);
			a1.fill(p, q, &arr);
			break;
		}
		else
		{
			a1.movedown1(p, q);
		}

		check1 = CheckKeyPressed(waitTime);
		if (check1 == 39)
		{
			if (arr[p + 1][q + 1] == 1)
			{
				a1.draw1(p, q);
				a1.fill(p, q, &arr);
				//break;
			}

			else
			{
				a1.moveright1(p, q);
			}
		}
		else if (check1 == 37)
		{

			if ((arr[p][q] == 1) || (arr[p][q + 1] == 1) || (arr[p][q + 2] == 1))
			{
				a1.draw1(p, q);
				a1.fill(p, q, &arr);
				//	break;
			}
			else
			{
				a1.moveleft1(p, q);
			}

		}
		else if (check1 == 38)
		{

			a1.draw1space1(p, q);
			console = 1;
		}


		u1 = q;
		if (u1 == 22)
		{
			a1.draw1(p, q);
			a1.fill(p, q, &arr);
			console = 1;
		}


	}
	p = 15; q = 0;

	next2.draw2space2(55, 13);
	a.mover2(p, q, &arr);
}


void mover::mover2(int p, int q, int ***array)
{
	int **arr = *array;
	shape2 pl_2;
	shape3 next3;
	next3.draw3(55, 13);
	mover a;
	int u1 = 0;
	int slep = 150;
	int waitTime = 1000;
	int console = 0;
	int check1 = CheckKeyPressed(waitTime);
	while (console != 1)
	{

		Sleep(slep);
		a2.draw2space2(p, q);
		if ((arr[p][q + 1] != 1))
		{
			a2.movedown2(p, q);
		}
		else
		{
			a2.draw2(p, q);
			a2.fill1(p, q, &arr);
			break;
		}

		check1 = CheckKeyPressed(waitTime);
		if (check1 == 39)
		{
			if ((arr[p][q+1]!=1)||(arr[p+1][q+2]!=1))
			{
				a2.moveright2(p, q);
			}
			else
			{
				a2.fill1(p, q, &arr);
				break;
			}


		}
		else if (check1 == 37)
		{
			if (arr[p - 1][q + 1] != 1)
			{
				a2.moveleft2(p, q);
			}
			else
			{
				a2.fill1(p, q, &arr);
				break;
			}
		}
		else if (check1 == 38)
		{
			a2.draw2space2(p, q);
			console = 1;
			a.mover2rotate2(p, q, &arr);
		}


		u1 = q;
		if (u1 == 22)
		{
			a2.fill1(p, q, &arr);
			console = 1;
		}

	}
	p = 15; q = 0;
	next3.draw3space3(55, 13);
	a.mover3(p, q, &arr);
}
void mover::mover2rotate2(int p, int q, int ***array)
{
	int **arr = *array;
	shape3 next3;
	mover a;
	int u1 = 0;
	int slep = 150;
	int waitTime = 1000;
	int console = 0;
	int check = CheckKeyPressed(waitTime);

	while (console != 1)
	{
		Sleep(slep);
		a2.rotate2_drawspace(p, q);

		if (arr[p][q + 1] == 1)
		{
			a2.rotate2(p, q);
			a2.rotate2_fill2(p, q, &arr);
		}
		else
		{
			a2.rotate2_movedown2(p, q);
		}

		check = CheckKeyPressed(waitTime);
		if (check == 39)
		{
			if ((arr[p][q + 1]) || (arr[p + 1][q + 2]))
			{
				a2.rotate2(p, q);
				a2.rotate2_fill2(p, q, &arr);
			}
			else
			{
				a2.rotate2_moveright2(p, q);
			}
		}
		else if (check == 37)
		{
			if (arr[p-1][q+2])
			{
                a2.rotate2(p,q);
                a2.rotate2_fill2(p,q,&arr);
			}
			else
			{
				a2.rotate2_moveleft2(p, q);
				//break;
			}
		}
		else if (check == 38)
		{
			a2.rotate2_drawspace(p, q);
			console = 1;
			a.mover2(p, q, &arr);
		}
		u1 = q;
		if (u1 == 24)
		{
			a2.rotate2_fill2(p, q, &arr);
			console = 1;
		}

	}
	p = 15; q = 0;
	next3.draw3space3(55, 13);
	a.mover3(p, q, &arr);

}
void mover::mover3(int p, int q, int ***array)
{
	int **arr = *array;
	shape1 next1;
	next1.draw1(55, 13);
	mover a;
	int u1 = 0;
	int slep = 150;
	int waitTime = 1000;
	int console = 0;
	int check1 = CheckKeyPressed(waitTime);
	while (console != 1)
	{

		Sleep(slep);
		a3.draw3space3(p, q);
		if (arr[p][q + 1] == 1)
		{
			a3.draw3(p, q);
			a3.fill(p,q,&arr);
		}
		else
		{
			a3.movedown3(p, q);
		}
		check1 = CheckKeyPressed(waitTime);
		if (check1 == 39)
		{
			if ((arr[p + 2][q + 1]) || (arr[p + 2][q + 2]))
			{
				a3.draw3(p, q);
				a3.fill(p, q, &arr);
				//break;
			}
			a3.moveright3(p, q);
		}
		else if (check1 == 37)
		{
			if ((arr[p][q] == 1) || (arr[p][q + 1] == 1))
			{
				a3.draw3(p, q);
				a3.fill(p, q, &arr);
				//break;
			}
			else
			{
				a3.moveleft3(p, q);
			}

		}
		else if (check1 == 38)
		{
			a3.draw3space3(p, q);
			console = 1;
			a.mover3rotate3(p, q, &arr);
		}


		u1 = q;
		if (u1 == 22)
		{
			a3.draw3(p, q);
			a3.fill(p, q, &arr);
			console = 1;
		}


	}
	p = 15, q = 0;
	next1.draw1space1(55, 13);
	a.mover1(p, q, &arr);


}

void mover::mover3rotate3(int p, int q, int ***array)
{
	int **arr = *array;
	mover a;
	int u1 = 0;
	int slep = 150;
	int waitTime = 1000;
	shape1 next1;
	int console3 = 0;
	int check3 = CheckKeyPressed(waitTime);
	while (console3 != 1)
	{

		Sleep(slep);
		a3.rotate3space3(p, q);
		if ((arr[p][q + 2] == 1) || (arr[p - 1][q + 3] == 1))
		{
			a3.rotate3(p, q);
			a3.fill3(p, q, &arr);
			break;
		}
		else
		{
			a3.rotate3movedown3(p, q);
		}
		check3 = CheckKeyPressed(waitTime);
		if (check3 == 39)
		{

			if ((arr[p][q] == 1) || (arr[p][q + 1] == 1))
			{
				a3.rotate3(p, q);
				a3.fill3(p, q, &arr);
				break;
			}
			else
			{
				a3.rotate3moveright3(p, q);
			}
		}
		else if (check3 == 37)
		{
			if ((arr[p - 1][q + 1] == 1) || (arr[p - 1][q + 2] == 1))
			{
				a3.rotate3(p, q);
				a3.fill3(p, q, &arr);
			}
			else
			{
				a3.rotate3moveleft3(p, q);
			}
		}
		else if (check3 == 38)
		{
			a3.rotate3space3(p, q);
			console3 = 1;
			a.mover3rotate3_2(p, q, &arr);
		}


		u1 = q;
		if (u1 == 22)
		{
			a3.rotate3(p, q);
			a3.fill3(p, q, &arr);
			console3 = 1;
		}

	}
	p = 15, q = 0;
	next1.draw1space1(55, 13);
	a.mover1(p, q, &arr);
	a.mover1(p, q, &arr);


}

void mover::mover3rotate3_2(int p, int q, int ***array)
{
	int **arr = *array;
	mover a;
	shape1 next1;
	int u1 = 0;
	int slep = 150;
	int waitTime = 1000;
	int console3_2 = 0;
	int check3_2 = CheckKeyPressed(waitTime);
	while (console3_2 != 1)
	{

		Sleep(slep);
		a3.rotate3_2space3(p, q);
		if ((arr[p + 1][q + 2] == 1) || (arr[p + 2][q + 2] == 1) || (arr[p + 3][q + 2] == 1))
		{
			a3.rotate3_2(p, q);
			a3.fill3_2(p, q, &arr);
			break;
		}
		else
		{
			a3.rotate3_2movedown3(p, q);
		}
		check3_2 = CheckKeyPressed(waitTime);
		if (check3_2 == 39)
		{
			if ((arr[p + 3][q + 1] == 1) || (arr[p + 1][q] == 1))
			{
				a3.rotate3_2(p, q);
				a3.fill3_2(p, q, &arr);
				break;
			}
			else
			{
				a3.rotate3_2moveright3(p, q);
			}
		}
		else if (check3_2 == 37)
		{
			if ((arr[p][q] == 1) || (arr[p + 1][q + 1] == 1))
			{
				a3.rotate3_2(p, q);
				a3.fill3_2(p, q, &arr);
				break;
			}
			else
			{
				a3.rotate3_2moveleft3(p, q);
			}
		}
		else if (check3_2 == 38)
		{
			a3.rotate3_2space3(p, q);
			console3_2 = 1;
			a.mover3(p, q, &arr);
		}


		u1 = q;
		if (u1 == 22)
		{
			a3.rotate3_2(p, q);
			a3.fill3_2(p, q, &arr);
			console3_2 = 1;
		}

	}
	p = 15, q = 0;
	next1.draw1space1(55, 13);
	a.mover1(p, q, &arr);
	a.mover1(p, q, &arr);


}

int main()
{
	SetWindowSize(70, 40);
	display a;
	char b;
	int x,y;
	ifstream myfile("score.txt",ios::in);
	while(!myfile.eof())
    {
        myfile.get(b);
        cout<<b;
    }
    myfile.close();
    cout<<endl;
	a.menu(30,5);
	ClearScreen();

}


