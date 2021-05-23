/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class MTMaterialShadowView, SBElasticSliderView;

@interface SBElasticSliderMaterialWrapperView : UIView

{
    UIView *_sliderWrapperView;
    UIView *_maskView;
    SBElasticSliderView *_sliderView;
    MTMaterialShadowView *_baseMaterialView;
    long long _shadowMode;
}

@property (nonatomic, readonly) SBElasticSliderView *sliderView;
@property (nonatomic, readonly) MTMaterialShadowView *baseMaterialView;
@property (nonatomic, readonly) UIView *maskView;
@property (nonatomic) long long shadowMode;

- (id)init;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_updateShadowMode;

@end
