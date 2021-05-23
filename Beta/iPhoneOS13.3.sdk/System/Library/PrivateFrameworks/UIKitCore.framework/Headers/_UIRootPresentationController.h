/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISheetPresentationController.h>

@class NSString, UIStatusBarHideAnimationParameters, UIStatusBarStyleAnimationParameters, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIRootPresentationController : _UISheetPresentationController

{
    UIWindow *_presentingWindow;
}

@property (weak, nonatomic, readonly) UIWindow *presentingWindow;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) int _preferredStatusBarVisibility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_preferredStatusBarStyleAnimationParameters) UIStatusBarStyleAnimationParameters *preferredStatusBarStyleAnimationParameters;
@property (nonatomic, readonly, getter=_preferredStatusBarHideAnimationParameters) UIStatusBarHideAnimationParameters *preferredStatusBarHideAnimationParameters;
@property (nonatomic, readonly) long long preferredStatusBarUpdateAnimation;

+ (_Bool)_allowsDeferredTransitions;

- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)_fullscreenPresentationSuperview;
- (_Bool)_mayChildGrabPresentedViewControllerView;
- (id)_parentTraitEnvironment;
- (id)initWithPresentedViewController:(id)arg1 presentingWindow:(id)arg2;
- (_Bool)_isRootPresentation;

@end
