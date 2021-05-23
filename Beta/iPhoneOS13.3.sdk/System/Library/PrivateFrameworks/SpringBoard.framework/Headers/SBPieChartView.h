/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface SBPieChartView : UIView

{
    NSArray *_slices;
    double _valueTotal;
    double _radius;
    struct CGPoint _center;
    double _defaultRotation;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_updateMetrics;
- (void)setSlices:(id)arg1;
- (void)_rotateContext;
- (void)_drawSlice:(id)arg1 atValue:(double)arg2;

@end
