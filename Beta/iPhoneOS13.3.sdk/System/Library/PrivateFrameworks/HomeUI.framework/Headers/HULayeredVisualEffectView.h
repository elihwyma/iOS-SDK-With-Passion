/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HULayeredBackgroundEffect, HULayeredContentEffect, UIVisualEffectView;

@interface HULayeredVisualEffectView : UIView

{
    HULayeredContentEffect *_contentEffect;
    HULayeredBackgroundEffect *_backgroundEffect;
    double _cornerRadius;
    UIVisualEffectView *_contentEffectView;
    UIVisualEffectView *_backgroundEffectView;
    UIView *_backgroundFillView;
}

@property (retain, nonatomic) UIVisualEffectView *contentEffectView;
@property (retain, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (retain, nonatomic) UIView *backgroundFillView;
@property (retain, nonatomic) HULayeredContentEffect *contentEffect;
@property (retain, nonatomic) HULayeredBackgroundEffect *backgroundEffect;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) double cornerRadius;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)_updateSubviewOrder;
- (void)_applyCornerRadius;
- (void)_updateContentEffects;
- (void)_updateBackgroundEffects;
- (id)initWithContentEffect:(id)arg1 backgroundEffect:(id)arg2;

@end
