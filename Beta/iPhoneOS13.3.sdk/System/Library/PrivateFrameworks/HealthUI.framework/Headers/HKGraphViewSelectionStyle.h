/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKStrokeStyle;

@interface HKGraphViewSelectionStyle : NSObject

{
    double _unselectedSeriesAlpha;
    HKStrokeStyle *_selectedPointLineStrokeStyle;
    HKStrokeStyle *_touchPointLineStrokeStyle;
}

@property (nonatomic) double unselectedSeriesAlpha;
@property (retain, nonatomic) HKStrokeStyle *selectedPointLineStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *touchPointLineStrokeStyle;

@end
