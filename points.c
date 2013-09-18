//////////////////////////////////////////////////////////////////////////////
// Version: $Id$
// Implementation of the external functions in points.h
//
// Compile: gcc -ggdb -Wall -std=c99 -c points.c
// @author Ryan Lisnoff rsl4750@rit.edu
//////////////////////////////////////////////////////////////////////////////
#include "points.h"
#include <stdio.h>
#include <stdlib.h>

//Prints out a point in the format:
//label: (x,y)
void displayPoint(struct Point p){

        printf("Label %c: (%i, %i)\n", p.label, p.x, p.y);

}

//Prints out a collection of points using displayPoint()
void displayPoints(struct Point points[], int numPoints){

        for(int i = 0; i < numPoints; i++){
                displayPoint(points[i]);
        }

}

//Returns 0 if two points are not equal, non-zero if they are.
int equal(struct Point p1, struct Point p2){
        
         return (p1.x == p2.x) && (p1.y == p2.y) && (p1.label == p2.label);
          
}

//Returns the index of a given point in the array
//If the point DNE, return -1
int indexOf(struct Point p, struct Point points[], int numPoints){

        for(int i = 0; i < numPoints; i++){
                if(equal(p, points[i])){
                        return i;
                }
        }
        return -1;
}

//Returns the point with the lowest x value
struct Point leftmostPoint(struct Point points[], int numPoints){
	
	int index = 0;
	struct Point curPoint = points[index];
	struct Point leftPoint = curPoint;
	while(index++ < numPoints-1){
		if(curPoint.x < leftPoint.x){
			leftPoint = curPoint;
		}
	}

	return leftPoint;
}

int main(){

        printf("Testing...\n");
        struct Point ptA = {'a', 0, 0};
        displayPoint(ptA);
        struct Point ptB = {'b', 0, 0};
	displayPoint(ptB);
	printf("Does a = a? %i\n", equal(ptA,ptA));
	printf("Does b = b? %i\n", equal(ptA, ptB));
		
}
//////////////////////////////////////////////////////////////////////////////
// Revisions: $Rev$
