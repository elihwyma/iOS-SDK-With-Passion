/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIViewPropertyAnimator;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionDismissTransition : NSObject <Swift>

{
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_dismissAnimator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (id)_preparedDismissAnimator;

@end
