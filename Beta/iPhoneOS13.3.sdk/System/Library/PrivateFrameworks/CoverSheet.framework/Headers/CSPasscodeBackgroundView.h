/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIView.h>

@class MTMaterialView, UIColor;

@interface CSPasscodeBackgroundView : UIView

{
    UIColor *_reduceTransparencyBackingColor;
    MTMaterialView *_materialView;
    UIView *_lightenSourceOverView;
    UIView *_plusDView;
    UIView *_reduceTransparencyTintingView;
    UIView *_reduceTransparencyBackingView;
}

@property (retain, nonatomic) MTMaterialView *materialView;
@property (retain, nonatomic) UIView *lightenSourceOverView;
@property (retain, nonatomic) UIView *plusDView;
@property (retain, nonatomic) UIView *reduceTransparencyTintingView;
@property (retain, nonatomic) UIView *reduceTransparencyBackingView;
@property (retain, nonatomic) UIColor *reduceTransparencyBackingColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setWeighting:(double)arg1;
- (void)_setPlusDBackgroundColorWithWeighting:(double)arg1;

@end
