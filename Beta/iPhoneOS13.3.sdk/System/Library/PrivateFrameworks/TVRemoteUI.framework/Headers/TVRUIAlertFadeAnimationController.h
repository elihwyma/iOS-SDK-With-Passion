/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _TVRemoteAlertVisualStyleProviding;

@interface TVRUIAlertFadeAnimationController : NSObject

{
    long long _animationType;
    id <_TVRemoteAlertVisualStyleProviding> _visualStyle;
}

@property (nonatomic, readonly) long long animationType;
@property (nonatomic, readonly) id <_TVRemoteAlertVisualStyleProviding> visualStyle;
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
