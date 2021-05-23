/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@interface PIAutoCalculatorUtils : NSObject

+ (struct CGPoint)convertFacePoint:(struct CGPoint)arg1 toImagePointWithFaceRect:(struct CGRect)arg2 orientation:(long long)arg3;
+ (struct CGPoint)averagePoints:(const struct CGPoint *)arg1 pointCount:(unsigned long long)arg2;
+ (struct CGPoint)averageCGPoints:(const struct CGPoint *)arg1 pointCount:(unsigned long long)arg2;

@end
