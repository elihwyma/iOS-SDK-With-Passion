/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <UIPresentationController.h>

@class AVObservationController, AVPresentationContext, UIWindow;

__attribute__((visibility("hidden")))
@interface AVPresentationController : UIPresentationController

{
    AVPresentationContext *_context;
    AVObservationController *_observationController;
    UIWindow *_presentationWindowForDisablingAutorotation;
}

@property (nonatomic, readonly) AVObservationController *observationController;
@property (weak, nonatomic) UIWindow *presentationWindowForDisablingAutorotation;
@property (nonatomic, readonly) AVPresentationContext *context;

- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)containerViewWillLayoutSubviews;
- (_Bool)shouldPresentInFullscreen;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (_Bool)shouldRemovePresentersView;
- (void)_ensureOrientation:(long long)arg1 enablingMixedOrientations:(_Bool)arg2;
- (void)_prepareDismissingTransitionContext;
- (void)_observeSceneDidBecomeActiveForRestoringRotatability;

@end
