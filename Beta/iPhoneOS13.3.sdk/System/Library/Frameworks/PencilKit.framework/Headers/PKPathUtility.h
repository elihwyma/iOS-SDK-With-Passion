/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@interface PKPathUtility : NSObject

+ (void)smoothedHullForPoints:(vector_e1abc270)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)convexHull:(vector_e1abc270 *)arg1 forPoints:(vector_e1abc270)arg2;
+ (void)openConvexHullToConcave:(vector_e1abc270 *)arg1 points:(const vector_e1abc270 *)arg2;
+ (id)catmullRomForHull:(const vector_e1abc270 *)arg1 alpha:(double)arg2;
+ (_Bool)vector:(const vector_93009049 *)arg1 containsEdge:(struct Edge)arg2;
+ (struct Edge)longestEdgeInHull:(const vector_e1abc270 *)arg1 atIndex:(int *)arg2 visitedEdges:(const vector_93009049 *)arg3;
+ (double)averageDistanceForEdge:(struct Edge)arg1 withPoints:(const vector_e1abc270 *)arg2;
+ (struct CGPoint)pointWithMinAngleForEdge:(struct Edge)arg1 fromPoints:(const vector_e1abc270 *)arg2 minAngle:(double *)arg3;
+ (_Bool)vector:(const vector_e1abc270 *)arg1 containsPoint:(struct CGPoint)arg2;
+ (_Bool)newEdgeWithPoint:(struct CGPoint)arg1 betweenEdge:(struct Edge)arg2 intersectsOtherEdgesInHull:(const vector_e1abc270 *)arg3;
+ (_Bool)edge:(struct Edge)arg1 intersectsEdge:(struct Edge)arg2;

@end
