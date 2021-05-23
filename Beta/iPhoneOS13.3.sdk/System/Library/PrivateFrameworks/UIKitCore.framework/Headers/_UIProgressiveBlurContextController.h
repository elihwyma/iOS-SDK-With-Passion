/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface _UIProgressiveBlurContextController : UIViewController <Swift>

{
    UIViewController *_presentedViewController;
    long long _blurStyle;
}

@property (nonatomic) long long blurStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithPresentedViewController:(id)arg1;

@end
