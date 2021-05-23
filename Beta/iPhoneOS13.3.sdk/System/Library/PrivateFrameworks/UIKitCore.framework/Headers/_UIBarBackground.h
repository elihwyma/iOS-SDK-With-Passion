/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UIVisualEffectView, _UIBarBackgroundLayout, _UIBarBackgroundShadowView;

__attribute__((visibility("hidden")))
@interface _UIBarBackground : UIView

{
    UIVisualEffectView *_effectView1;
    UIImageView *_colorAndImageView1;
    _UIBarBackgroundShadowView *_shadowView1;
    UIVisualEffectView *_effectView2;
    UIImageView *_colorAndImageView2;
    _UIBarBackgroundShadowView *_shadowView2;
    UIView *_topInsetView;
    double _bg1LastLayoutHeight;
    double _bg2LastLayoutHeight;
    struct {
        unsigned int needsTopInsetView:1;
        unsigned int needsEffectView1:1;
        unsigned int needsColorAndImageView1:1;
        unsigned int needsShadowView1:1;
        unsigned int needsEffectView2:1;
        unsigned int needsColorAndImageView2:1;
        unsigned int needsShadowView2:1;
    } _backgroundFlags;
    _Bool _topAligned;
    NSString *_groupName;
    _UIBarBackgroundLayout *_layout;
    UIView *_customBackgroundView;
}

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) _Bool topAligned;
@property (retain, nonatomic) _UIBarBackgroundLayout *layout;
@property (retain, nonatomic) UIView *customBackgroundView;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_shadowView;
- (void)_setupBackgroundValues;
- (void)_updateBackgroundViewVisiblity;
- (struct CGRect)frameForYOrigin:(double)arg1 height:(double)arg2;
- (void)_orderSubviews;
- (void)_setupShadowView:(id)arg1 effect:(id)arg2 image:(id)arg3 shadowColor:(id)arg4 shadowTint:(id)arg5 alpha:(double)arg6;
- (void)cleanupBackgroundViews;
- (void)prepareBackgroundViews;
- (void)updateBackground;
- (id)_encodableSubviews;
- (void)transition:(unsigned long long)arg1 toLayout:(id)arg2;
- (void)transitionBackgroundViews;
- (id)_backgroundEffectView;
- (void)set_backgroundEffectView:(id)arg1;
- (void)set_shadowView:(id)arg1;

@end
