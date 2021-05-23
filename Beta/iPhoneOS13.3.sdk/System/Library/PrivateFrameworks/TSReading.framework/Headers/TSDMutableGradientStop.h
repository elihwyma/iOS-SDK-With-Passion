/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGradientStop.h>

@class TSUColor;

@interface TSDMutableGradientStop : TSDGradientStop

@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) double fraction;
@property (nonatomic) double inflection;

@end
