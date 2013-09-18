// Version: $Id: sort.h,v 1.1 2013/09/16 19:34:55 csci243 Exp $
// Declares the interface for a merge sort for an array of Point's
// @author sps: Sean Strout

#ifndef SORT_H
#define SORT_H

#include "points.h"

// Sorts a collection of points in increasing order of angle
// with points[0].
// Assumes numPoints is valid.
// @param points A native array of Point's (mutable)
// @param numPoints The number of valid Point's in points
void mergeSort(struct Point points[], int numPoints);

#endif

// Revisions: $Log: sort.h,v $
// Revisions: Revision 1.1  2013/09/16 19:34:55  csci243
// Revisions: Initial revision
// Revisions:
