/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@interface _PKColorPickerSimpleCrosshairView : UIView

{
    double _borderCornerRadius;
    UIView *_shadowView;
    UIView *_borderView;
}

@property (nonatomic) double borderCornerRadius;
@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UIView *borderView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)configureShadowView:(id)arg1;
- (void)configureBorderView:(id)arg1;
- (double)_cornerRadiusForBorderView;
- (double)_cornerRadiusForShadowView;

@end
