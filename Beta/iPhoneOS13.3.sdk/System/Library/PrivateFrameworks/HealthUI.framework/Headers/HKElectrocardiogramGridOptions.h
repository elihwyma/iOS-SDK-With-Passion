/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface HKElectrocardiogramGridOptions : NSObject

{
    unsigned long long _unitMultiple;
    unsigned long long _axis;
    UIColor *_lineColor;
    double _lineWidth;
}

@property (nonatomic) unsigned long long unitMultiple;
@property (nonatomic) unsigned long long axis;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (nonatomic, readonly) struct CGAffineTransform scale;

- (id)initWithUnitMultiple:(long long)arg1 axis:(unsigned long long)arg2 lineColor:(id)arg3 lineWidth:(double)arg4;

@end
