/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/_UIKeyboardAnimator.h>

@class BSAnimationSettings;

@protocol SBPasscodeKeyboardAnimatorDelegate;

@interface SBPasscodeKeyboardAnimator : _UIKeyboardAnimator

{
    BSAnimationSettings *_animationSettings;
    id <SBPasscodeKeyboardAnimatorDelegate> _delegate;
}

@property (retain, nonatomic) BSAnimationSettings *animationSettings;
@property (weak, nonatomic) id <SBPasscodeKeyboardAnimatorDelegate> delegate;

- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;
- (void)completeAnimationWithState:(id)arg1;

@end
