/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBUIAnimationController;

@interface SBUIAnimationControllerAnimator : NSObject <Swift>

{
    SBUIAnimationController *_animationController;
}

@property (weak, nonatomic, readonly) SBUIAnimationController *animationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)transitionAnimationFactory:(id)arg1;
- (id)initWithAnimationController:(id)arg1;

@end
