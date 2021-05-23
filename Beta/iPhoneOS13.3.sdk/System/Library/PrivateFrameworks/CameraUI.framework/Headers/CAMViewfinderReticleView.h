/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMViewfinderReticleView : UIView

{
    double _viewportTopInset;
    double _viewportBottomInset;
    long long _maskingStyle;
    UIView *__topMaskingView;
    UIView *__bottomMaskingView;
    UIImageView *__viewportBorderView;
    UIImageView *__topLeftCornerView;
    UIImageView *__topRightCornerView;
    UIImageView *__bottomLeftCornerView;
    UIImageView *__bottomRightCornerView;
}

@property (nonatomic, readonly) UIView *_topMaskingView;
@property (nonatomic, readonly) UIView *_bottomMaskingView;
@property (nonatomic, readonly) UIImageView *_viewportBorderView;
@property (nonatomic, readonly) UIImageView *_topLeftCornerView;
@property (nonatomic, readonly) UIImageView *_topRightCornerView;
@property (nonatomic, readonly) UIImageView *_bottomLeftCornerView;
@property (nonatomic, readonly) UIImageView *_bottomRightCornerView;
@property (nonatomic, readonly) double viewportTopInset;
@property (nonatomic, readonly) double viewportBottomInset;
@property (nonatomic) long long maskingStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setViewportTopInset:(double)arg1 bottomInset:(double)arg2 animated:(_Bool)arg3;
- (void)setMaskingStyle:(long long)arg1 withDuration:(double)arg2;
- (id)_newViewportTemplateImage;
- (id)_newViewportCornerImage;
- (void)_updateMaskingOpacityWithDuration:(double)arg1;
- (double)_opacityForMaskingStyle:(long long)arg1;

@end
