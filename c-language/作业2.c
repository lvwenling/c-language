#include<stdio.h>
int main(){
	int a;
	float edge_length,height,length,width,edge_top,edge_bottom,height2,radium;
	printf("Please choose a shape you want to calculate");
	printf(" (triangle 1, rectangle 2, ladder 3, circle 4):\n\n");
	scanf("%d",&a);
	switch (a){
	case 1:
	printf("Your choice is triangle. Please input the edge_length and height:\n\n");
	scanf("%f %f",&edge_length,&height);
	printf("area is: %.4f",edge_length*height/2);
	break;
	case 2:
	printf("Your choice is rectangle. Please input the length and width:\n\n");
	scanf("%f %f",&length,&width);
	printf("area is: %.4f",length*width);
	break;
	case 3: 
	printf("Your choice is ladder. Please input the edge_top, edge_bottom, and height:\n\n");
	scanf("%f %f %f",&edge_top,&edge_bottom,&height2);
	printf("area is: %.4f",(edge_top+edge_bottom)*height2/2);
	break;
	case 4:
	printf("Your choice is circle. Please input the radium:\n\n");
	scanf("%f",&radium);
	printf("area is: %.4f",radium*radium*3.1415);
	break;
	}
	return 0;
	
}

