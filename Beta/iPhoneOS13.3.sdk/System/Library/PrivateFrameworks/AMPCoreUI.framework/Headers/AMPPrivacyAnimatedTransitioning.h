/*
 Image: /System/Library/PrivateFrameworks/AMPCoreUI.framework/AMPCoreUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface AMPPrivacyAnimatedTransitioning : NSObject

{
    _Bool _presentation;
    UIViewController *_viewController;
}

@property (getter=isPresentation) _Bool presentation;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)_animateTransition:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)animateTransition:(id)arg1;
- (id)_presentedViewControllerForContext:(id)arg1;

@end
