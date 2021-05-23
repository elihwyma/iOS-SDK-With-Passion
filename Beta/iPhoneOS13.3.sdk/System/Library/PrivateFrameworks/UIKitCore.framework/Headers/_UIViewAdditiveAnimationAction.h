/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CAAnimation, UIView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface _UIViewAdditiveAnimationAction : NSObject

{
    CAAnimation *_pendingAnimation;
    UIViewPropertyAnimator *_animationObject;
    UIView *_view;
}

@property (retain, nonatomic, readonly) CAAnimation *pendingAnimation;
@property (retain, nonatomic, readonly) UIViewPropertyAnimator *animationObject;
@property (retain, nonatomic, readonly) UIView *view;

- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (id)initWithPendingAnimation:(id)arg1 withAnimationObject:(id)arg2 forView:(id)arg3;

@end
