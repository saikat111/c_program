#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=30,height=30,n,i,j,p;
int x,y,fx,fy,gameover,score,flag,m;
void setup()
{
gameover=0;
x=width/2;
y=height/2;
label1:
	fx=rand()%20;
	if(fx==0)
	goto label1;
	label2:
		fy=rand()%20;
		if(fy==0)
		goto label2;
		score=0;	
}

void draw()
{
	system("cls");
	for(i=0;i<width;i++)
	{
		for(j=0;j<height;j++)
		{
			if(i==0 || i==width-1 || j==0 || j==height-1)
			{
				printf("*");
			}
			
		else	
			{
				if(i==x && j==y)
				printf("O");
				else if(i==fx && j==fy)
				printf("F");
				else
				printf(" ");
			}
		}
		
		printf("\n");
	}
}
void input()
{
if(kbhit())
	{
	switch(getch())
	{
				case 'a':
			flag=1;
			break;
				case 'd':
			flag=2;
			break;
				case 'w':
			flag=3;
			break;
				case 's':
			flag=4;
			break;
				case 'x':
			gameover=1;
			break;		
	}	
}


}
void Makelogic()
{
	if(flag==1)
	{
	y--;
	}
	else if(flag==2)
	{
	y++;	
	}
	else if(flag==3)
	{
	x--;	
	}
	else if(flag==4)
	{
	x++;	
	}
	if(x<0 || x>width || y<0 || y>height)
	gameover=1;
	if(x==fx && y==fy)
	{
		label3:
	fx=rand()%20;
	if(fx==0)
	goto label3;
	label4:
		fy=rand()%20;
		if(fy==0)
		goto label4;
		score+=10;
	}
	printf("YOUR SCORE IS  = %d", score);
	printf("\n");
	if(score==40)
	{
		printf("\n");
		printf("WELCOME TO 2nd ROUND");
	}
	else if(score==70)
	{
		printf("\n");
		printf("WELCOME TO 3rd  ROUND");
	}
	else if(score==80)
	{
		printf("\n");
		printf("WELCOME TO 4th  ROUND");
	}

}


int main()
{
	setup();
		
	
	while(!gameover)
	{
	draw();
		input();
		Makelogic();
		if(score<=30)
		{
		for(m=0;m<10000;m++)
		{
			for(n=0;n<10000;n++){
			}
			}
		
		for(m=0;m<10000;m++)
		{
			for(n=0;n<10000;n++){
			}
			}
		}
		else if(score<=60)
		{
		for(m=0;m<7000;m++)
		{
			for(n=0;n<7000;n++){
			}
			}
		
		for(m=0;m<7000;m++)
		{
			for(n=0;n<7000;n++){
			}
			}		
		}
		else if(score<=80)
		{
		for(m=0;m<4000;m++)
		{
			for(n=0;n<4000;n++){
			}
			}
		
		for(m=0;m<4000;m++)
		{
			for(n=0;n<4000;n++){
			}
			}	
	}
}

	return 0;
}


