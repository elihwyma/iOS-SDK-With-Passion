/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIBezierPath, _UIPlatterShadowView;

__attribute__((visibility("hidden")))
@interface _UIPlatterSoftShadowView : UIView

{
    _Bool _needsPunchOut;
    UIBezierPath *_shadowPath;
    UIView *_backgroundView;
    _UIPlatterShadowView *_diffuseShadowView;
    _UIPlatterShadowView *_rimShadowView;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) _UIPlatterShadowView *diffuseShadowView;
@property (nonatomic, readonly) _UIPlatterShadowView *rimShadowView;
@property (copy, nonatomic) UIBezierPath *shadowPath;
@property (nonatomic) _Bool needsPunchOut;

- (void)_updateForShadowPath;
- (id)initWithFrame:(struct CGRect)arg1 shadowPath:(id)arg2;

@end
