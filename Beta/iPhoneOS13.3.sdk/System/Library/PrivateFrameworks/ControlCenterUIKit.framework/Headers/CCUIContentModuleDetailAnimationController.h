/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController, UIViewPropertyAnimator;

@interface CCUIContentModuleDetailAnimationController : NSObject

{
    UIViewController *_anchoringViewController;
    _Bool _presenting;
    UIViewPropertyAnimator *_propertyAnimator;
}

@property (nonatomic, readonly, getter=isPresenting) _Bool presenting;
@property (nonatomic, readonly) UIViewPropertyAnimator *propertyAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)performTransition:(id)arg1;
- (id)_newPropertyAnimator;
- (id)_contentModuleContainingViewController;
- (id)initForPresenting:(_Bool)arg1 anchoringViewController:(id)arg2;

@end
