/*
 Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

#import <NSObject.h>

@interface CUIKIconSizeMetricFactory : NSObject

+ (_Bool)_interpolationRequired:(double)arg1;
+ (id)_sizeMetricsForSideLength:(double)arg1 returnLowerBound:(_Bool)arg2;
+ (id)_interpolatedSizeMetricsWithUpperBound:(id)arg1 lowerBound:(id)arg2 sideLength:(double)arg3;
+ (id)heroSizeMetricsLargeToSmall;
+ (double)extrapolatedYValueWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2 xValue:(double)arg3;
+ (double)scaledValueWithUpperBound:(double)arg1 lowerBound:(double)arg2 scaleFactor:(double)arg3;
+ (id)sizeMetricsForIconSize:(struct CGSize)arg1;

@end
