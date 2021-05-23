/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIVisualEffectView, _TVRMaterialView;

@protocol _TVRemoteAlertVisualStyleProviding;

@interface TVRUIAlertAnimationController : NSObject

{
    long long _animationType;
    id <_TVRemoteAlertVisualStyleProviding> _visualStyle;
    _TVRMaterialView *_backgroundMaterialView;
    UIVisualEffectView *_foregroundVisualEffectView;
    double _foregroundBlurRadius;
    struct CGAffineTransform _scaleTransform;
}

@property (retain, nonatomic) UIVisualEffectView *foregroundVisualEffectView;
@property (nonatomic) double foregroundBlurRadius;
@property (nonatomic) struct CGAffineTransform scaleTransform;
@property (nonatomic, readonly) long long animationType;
@property (nonatomic, readonly) id <_TVRemoteAlertVisualStyleProviding> visualStyle;
@property (retain, nonatomic) _TVRMaterialView *backgroundMaterialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)_runPresentationAnimationWithTransition:(id)arg1;
- (void)_runDismissalAnimationWithTransition:(id)arg1;
- (id)initWithAnimationType:(long long)arg1 visualStyle:(id)arg2;

@end
