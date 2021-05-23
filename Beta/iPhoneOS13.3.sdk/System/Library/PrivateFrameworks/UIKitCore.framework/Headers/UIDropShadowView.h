/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, _UICutoutShadowView, _UIGrabber;

__attribute__((visibility("hidden")))
@interface UIDropShadowView : UIView

{
    _Bool _masksTopCornersOnly;
    _Bool _supportsShadowAndGrabber;
    UIView *_contentView;
    UIView *_overlayView;
    long long _independentCorners;
    UIView *_firstCornerClippingDescendant;
    NSArray *_cornerClippingDescendants;
    _UIGrabber *_grabber;
    _UICutoutShadowView *_magicShadowView;
    struct UIRectCornerRadii _environmentMatchingCornerRadii;
}

@property (nonatomic, readonly) _Bool supportsShadowAndGrabber;
@property (nonatomic, readonly) long long independentCorners;
@property (weak, nonatomic, readonly) UIView *firstCornerClippingDescendant;
@property (nonatomic, readonly) NSArray *cornerClippingDescendants;
@property (nonatomic, readonly) UIView *deepestClippingView;
@property (nonatomic, readonly) _UIGrabber *grabber;
@property (nonatomic, readonly) _UICutoutShadowView *magicShadowView;
@property (nonatomic) struct UIRectCornerRadii environmentMatchingCornerRadii;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *overlayView;
@property (nonatomic) _Bool masksTopCornersOnly;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 independentCorners:(long long)arg2 supportsShadowAndGrabber:(_Bool)arg3 stylesSheetsAsCards:(_Bool)arg4;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect)arg1 newBounds:(struct CGRect)arg2;
- (void)setMagicShadowAlpha:(double)arg1;
- (void)setGrabberAlpha:(double)arg1;
- (void)didFinishRotation;

@end
