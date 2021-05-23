/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, UINavigationController, UIViewController, _TVPlaybackFadeAnimator, _UIProgressiveBlurPresentationAnimator;

@interface _TVModalPresenter : NSObject

{
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    _Bool _dismissing;
    _TVPlaybackFadeAnimator *_playbackAnimator;
    UINavigationController *_modalRootViewController;
}

@property (nonatomic, readonly) UIViewController *presentedViewController;
@property (nonatomic, readonly) UINavigationController *modalRootViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)presenter;

- (id)init;
- (void)dealloc;
- (id)_hidden;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)_isDismissing;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideAllAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_willRotateNotification:(id)arg1;
- (void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 andCompletionBlock:(CDUnknownBlockType)arg4;
- (void)showController:(id)arg1 fromController:(id)arg2 withConfiguration:(id)arg3 animated:(_Bool)arg4 andCompletionBlock:(CDUnknownBlockType)arg5;
- (void)_configureModalController:(id)arg1 withFromController:(id)arg2 andConfiguration:(id)arg3;
- (void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)hideController:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
