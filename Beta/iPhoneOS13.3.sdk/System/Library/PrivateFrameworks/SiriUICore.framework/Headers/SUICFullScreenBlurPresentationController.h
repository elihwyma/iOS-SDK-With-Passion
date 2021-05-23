/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIPresentationController.h>

@class _UIBackdropView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController

{
    _UIBackdropView *_fullScreenBlurView;
}

@property (nonatomic) unsigned long long blurStyle;

- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3;
- (void)_stageViewsForFadeIn;

@end
