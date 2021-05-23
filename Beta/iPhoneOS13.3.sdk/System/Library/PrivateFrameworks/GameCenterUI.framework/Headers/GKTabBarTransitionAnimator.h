/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString, _GKBubbleFlowTransitionInfo;

@interface GKTabBarTransitionAnimator : NSObject

{
    _GKBubbleFlowTransitionInfo *_transitionInfo;
}

@property (retain, nonatomic) _GKBubbleFlowTransitionInfo *transitionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)_animateTransitionInTwoParts:(id)arg1;
- (void)_animateTransition:(id)arg1;

@end
