/*
 Image: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (Utilities)

+ (id)topmostViewControllerForViewController:(id)arg1;
+ (void)presentViewControllerOnTopmostViewController:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)replaceViewMethodsImplementation;
+ (void)_replaceMethodImplementation:(Class)arg1 originalSelector:(SEL)arg2 swizzledSelector:(SEL)arg3;

- (void)dismissAnimated;
- (void)iam_viewDidAppear:(_Bool)arg1;
- (void)iam_viewWillDisappear:(_Bool)arg1;

@end
