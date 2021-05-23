/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDCurvedShadow.h>

@class TSUColor;

@interface TSDMutableCurvedShadow : TSDCurvedShadow

@property (nonatomic) double curve;
@property (nonatomic) double offset;
@property (nonatomic) double angle;
@property (nonatomic) struct CGColor *color;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) TSUColor *TSUColor;

@end
