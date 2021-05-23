/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAxisLabelStyle, HKFillStyle, HKStrokeStyle, HKTickStyle;

@interface HKAxisStyle : NSObject

{
    _Bool _showGridLines;
    HKStrokeStyle *_gridLineStyle;
    HKStrokeStyle *_minorGridLineStyle;
    HKStrokeStyle *_referenceGridLineStyle;
    HKStrokeStyle *_axisLineStyle;
    HKTickStyle *_tickStyle;
    HKAxisLabelStyle *_labelStyle;
    unsigned long long _tickPositions;
    unsigned long long _axisLabelPosition;
    HKFillStyle *_fillStyle;
    double _fillInnerPadding;
    double _fillOuterPadding;
    HKStrokeStyle *_borderStyleForFill;
    long long _location;
}

@property (retain, nonatomic) HKStrokeStyle *gridLineStyle;
@property (retain, nonatomic) HKStrokeStyle *minorGridLineStyle;
@property (retain, nonatomic) HKStrokeStyle *referenceGridLineStyle;
@property (retain, nonatomic) HKStrokeStyle *axisLineStyle;
@property (retain, nonatomic) HKTickStyle *tickStyle;
@property (retain, nonatomic) HKAxisLabelStyle *labelStyle;
@property (nonatomic) unsigned long long tickPositions;
@property (nonatomic) unsigned long long axisLabelPosition;
@property (nonatomic) _Bool showGridLines;
@property (retain, nonatomic) HKFillStyle *fillStyle;
@property (nonatomic) double fillInnerPadding;
@property (nonatomic) double fillOuterPadding;
@property (retain, nonatomic) HKStrokeStyle *borderStyleForFill;
@property (nonatomic) long long location;

+ (id)defaultStyle;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
