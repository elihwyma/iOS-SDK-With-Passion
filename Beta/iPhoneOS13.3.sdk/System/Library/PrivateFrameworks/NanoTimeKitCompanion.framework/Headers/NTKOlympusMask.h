/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKOlympusMask : NSObject

+ (double)normalizeAngle:(double)arg1;
+ (double)angleForHour:(unsigned long long)arg1 minutes:(unsigned long long)arg2;
+ (double)angleForMinute:(unsigned long long)arg1 seconds:(unsigned long long)arg2;
+ (id)clippingPathFromCenterPoint:(struct CGPoint)arg1 startAngle:(double)arg2 endAngle:(double)arg3 radius:(double)arg4;
+ (struct CGPoint)pointForAngle:(double)arg1 radius:(double)arg2 centerPoint:(struct CGPoint)arg3;
+ (struct CGPoint)convertPointFromViewCoordinatesToCartesianCoordiates:(struct CGPoint)arg1 centerFromViewCoordinates:(struct CGPoint)arg2;
+ (unsigned long long)quadrantForPoint:(struct CGPoint)arg1;
+ (struct CGPoint)roundPoint:(struct CGPoint)arg1;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 translantedQuadrantIndex:(unsigned long long)arg2;
+ (struct CGPoint)nextPointFromStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 radius:(double)arg3;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 translantedFromFirstToQuadrantIndex:(unsigned long long)arg2;
+ (unsigned long long)nextQuadrantIndex:(unsigned long long)arg1;
+ (struct CGPoint)convertPointFromCartesianCoordiatesToViewCoordiates:(struct CGPoint)arg1 centerFromViewCoordinates:(struct CGPoint)arg2;
+ (unsigned long long)quadrantForAngle:(double)arg1;
+ (double)convertAngleForFirstQuadrant:(double)arg1;
+ (double)hourHandAngleWithDate:(id)arg1;
+ (double)minuteHandAngleWithDate:(id)arg1;

@end
