/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface HKBorderLineView : UIView

{
    long long _edges;
    double _borderWidth;
    UIColor *_borderLineColor;
    double _minimumHeight;
    double _minimumWidth;
    struct UIEdgeInsets _borderInsets;
}

@property (nonatomic) long long edges;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderLineColor;
@property (nonatomic) struct UIEdgeInsets borderInsets;
@property (nonatomic) double minimumHeight;
@property (nonatomic) double minimumWidth;

+ (void)drawBorderLinesInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 borderEdges:(long long)arg3 borderLineWidth:(double)arg4 borderLineColor:(id)arg5 borderInsets:(struct UIEdgeInsets)arg6;

- (id)initWithCoder:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_initFields;

@end
