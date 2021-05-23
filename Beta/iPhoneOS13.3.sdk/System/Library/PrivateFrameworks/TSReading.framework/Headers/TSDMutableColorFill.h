/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDColorFill.h>

@class TSUColor;

@interface TSDMutableColorFill : TSDColorFill

@property (copy, nonatomic) TSUColor *color;
@property (nonatomic) double opacity;
@property (nonatomic) double hue;
@property (nonatomic) double saturation;
@property (nonatomic) double brightness;

@end
