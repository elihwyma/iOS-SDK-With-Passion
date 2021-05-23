/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class CCUIContentModuleDetailAnimationController, NSString, UITargetedPreview, UIViewController, UIViewPropertyAnimator;

@interface CCUIContentModuleDetailClickPresentationTransition : NSObject

{
    UIViewController *_presentedViewController;
    CCUIContentModuleDetailAnimationController *_animationController;
}

@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) CCUIContentModuleDetailAnimationController *animationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(_Bool)arg1;
- (id)initWithPresentedViewController:(id)arg1 animationController:(id)arg2;

@end
