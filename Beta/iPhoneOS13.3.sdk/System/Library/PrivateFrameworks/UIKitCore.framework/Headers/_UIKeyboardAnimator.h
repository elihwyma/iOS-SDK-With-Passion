/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIKeyboardAnimatorAnimationStyle;

@interface _UIKeyboardAnimator : NSObject

{
    _UIKeyboardAnimatorAnimationStyle *_style;
}

- (id)init;
- (void)applyToKeyboardOperations:(CDUnknownBlockType)arg1;
- (void)performAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)prepareForAnimationWithState:(id)arg1;
- (void)runAnimationWithState:(id)arg1;
- (void)completeAnimationWithState:(id)arg1;

@end
