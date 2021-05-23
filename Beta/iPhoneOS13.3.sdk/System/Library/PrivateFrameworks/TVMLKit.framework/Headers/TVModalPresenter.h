/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSString, _TVPlaybackFadeAnimator, _UIProgressiveBlurPresentationAnimator;

@interface TVModalPresenter : NSObject

{
    NSHashTable *__presentationControllers;
    _UIProgressiveBlurPresentationAnimator *_presentingAnimator;
    _UIProgressiveBlurPresentationAnimator *_dismissingAnimator;
    _TVPlaybackFadeAnimator *_playbackAnimator;
}

@property (nonatomic, readonly) NSHashTable *_presentationControllers;
@property (copy, nonatomic, readonly) NSArray *presentedViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_viewControllerForResponder:(id)arg1;

- (id)init;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)presentViewController:(id)arg1 fromViewController:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 forResponder:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissViewControllerWithResponder:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissAllViewControllersWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
