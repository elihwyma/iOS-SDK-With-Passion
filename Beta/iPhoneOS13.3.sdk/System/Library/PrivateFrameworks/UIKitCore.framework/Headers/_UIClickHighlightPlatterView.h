/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPlatterSoftShadowView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIClickHighlightPlatterView : UIView

{
    double _shadowAlpha;
    double _backgroundAlpha;
    UITargetedPreview *_targetedPreview;
    _UIPortalView *_portalView;
    UIView *_backgroundView;
    _UIPlatterSoftShadowView *_shadowView;
}

@property (retain, nonatomic) UITargetedPreview *targetedPreview;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) _UIPlatterSoftShadowView *shadowView;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) double backgroundAlpha;

- (id)initWithTargetedPreview:(id)arg1;

@end
