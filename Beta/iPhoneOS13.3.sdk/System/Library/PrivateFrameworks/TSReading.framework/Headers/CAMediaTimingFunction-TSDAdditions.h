/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CAMediaTimingFunction.h>

@class TSDBezierPath;

@interface CAMediaTimingFunction (TSDAdditions)

@property (nonatomic, readonly) TSDBezierPath *bezierPath;

- (double)solveForTime:(double)arg1;
- (double)TSD_valueAtPercent:(double)arg1;

@end
