/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIView.h>

@class AVPresentationContainerViewAppearanceProxy, AVPresentationContainerViewLayer;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerView : UIView

{
    _Bool _counterRotatingContentView;
    _Bool _wantsAppearanceConfigValues;
    _Bool _beingPresented;
    _Bool _beingDismissed;
    _Bool _willBeginOrientationChange;
    UIView *_presentationContainerContentView;
    long long _fromOrientation;
    long long _toOrientation;
}

@property (nonatomic, readonly) AVPresentationContainerViewLayer *layer;
@property (nonatomic, getter=isCounterRotatingContentView) _Bool counterRotatingContentView;
@property (nonatomic, getter=isBeingPresented) _Bool beingPresented;
@property (nonatomic, getter=isBeingDismissed) _Bool beingDismissed;
@property (nonatomic) long long fromOrientation;
@property (nonatomic) long long toOrientation;
@property (nonatomic) _Bool willBeginOrientationChange;
@property (weak, nonatomic) UIView *presentationContainerContentView;
@property (nonatomic, readonly) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic) _Bool wantsAppearanceConfigValues;

+ (Class)layerClass;

- (void)setBackgroundColor:(id)arg1;
- (void)setClipsToBounds:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_cornerRadius;
- (void)_setCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;
- (_Bool)avkit_isVideoGravityFrozen;
- (_Bool)avkit_isCounterRotatedForTransition;
- (_Bool)avkit_isBeingDismissed;
- (void)willBeginAdjustingOrientation;
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForInterfaceOrientation:(long long)arg1;
- (void)willStartPresentationTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(_Bool)arg3;
- (void)willStartDismissalTransitionFromInterfaceOrientation:(long long)arg1 toOrientation:(long long)arg2 needsCounterRotation:(_Bool)arg3;
- (void)didStopTransition;
- (struct CGAffineTransform)_contentTransform;
- (double)_radiansForCounterRotation;

@end
