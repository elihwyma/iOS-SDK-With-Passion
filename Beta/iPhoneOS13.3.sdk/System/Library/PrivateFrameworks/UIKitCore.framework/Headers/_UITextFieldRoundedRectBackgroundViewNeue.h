/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

@interface _UITextFieldRoundedRectBackgroundViewNeue : UIView

{
    double _lineWidthPixels;
    _Bool _disabled;
    _Bool _hasFlexibleCornerRadius;
    UIColor *_strokeColor;
    UIColor *_fillColor;
    double _cornerRadius;
}

@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool hasFlexibleCornerRadius;

- (void)setActive:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 lineWidth:(double)arg3;
- (id)_initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2 lineWidth:(double)arg3 updateView:(_Bool)arg4;
- (void)updateView;
- (id)_strokeColor:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 active:(_Bool)arg2;
- (id)_fillColor:(_Bool)arg1;
- (double)_cornerRadiusAdjustedForBoundsHeight;
- (double)_screenScale;

@end
