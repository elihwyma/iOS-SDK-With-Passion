/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, UIResponder, UIWindow;

@interface UITransitionView : UIView <Swift>

{
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id _delegate;
    UIWindow *_originalWindow;
    struct {
        unsigned int animationInProgress:1;
        unsigned int ignoresInteractionEvents:1;
        unsigned int shouldNotifyDidCompleteImmediately:1;
        unsigned int useViewControllerAppearanceCallbacks:1;
        unsigned int shouldRestoreFromViewAlpha:1;
        unsigned int shouldRestoreGroupOpacity:1;
        unsigned int groupOpacityToRestoreForFromView:1;
        unsigned int groupOpacityToRestoreForToView:1;
        unsigned int shouldRasterize:1;
        unsigned int enableRotationAfterTransition:1;
        unsigned int removeFromView:1;
    } _transitionViewFlags;
    double _curlUpRevealedHeight;
    _Bool _ignoreDirectTouchEvents;
    long long _animationTimingCurve;
}

@property (nonatomic, readonly) double _curlUpRevealedHeight;
@property (nonatomic) _Bool shouldNotifyDidCompleteImmediately;
@property (nonatomic) long long animationTimingCurve;
@property (nonatomic) _Bool ignoreDirectTouchEvents;

+ (double)defaultDurationForTransition:(int)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setIgnoresInteractionEvents:(_Bool)arg1;
- (_Bool)transition:(int)arg1 toView:(id)arg2;
- (double)durationForTransition:(int)arg1;
- (_Bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(_Bool)arg4;
- (id)toView;
- (id)fromView;
- (_Bool)isTransitioning;
- (_Bool)ignoresInteractionEvents;
- (_Bool)transition:(int)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)notifyDidCompleteTransition:(id)arg1;
- (void)_didStartTransition;
- (_Bool)rasterizesOnTransition;
- (void)_startTransition:(int)arg1 withDuration:(double)arg2;
- (void)_didCompleteTransition:(_Bool)arg1;
- (void)_transitionDidStopFinished:(_Bool)arg1;
- (_Bool)_shouldDisableGroupOpacityOnAlphaTransitions;
- (_Bool)_isTransitioningFromFromView:(id)arg1;
- (void)setRasterizesOnTransition:(_Bool)arg1;

@end
