/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIChartBackgroundView.h>

@class NSArray, UIColor;

@interface FIUIChartDashedBackgroundView : FIUIChartBackgroundView

{
    NSArray *_linePositions;
    _Bool _shouldCenterLines;
    unsigned long long _numLines;
    UIColor *_color;
    long long _direction;
    long long _lineType;
}

@property (nonatomic) unsigned long long numLines;
@property (nonatomic) _Bool shouldCenterLines;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long direction;
@property (nonatomic) long long lineType;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateLinePositions;
- (void)drawLine:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;

@end
