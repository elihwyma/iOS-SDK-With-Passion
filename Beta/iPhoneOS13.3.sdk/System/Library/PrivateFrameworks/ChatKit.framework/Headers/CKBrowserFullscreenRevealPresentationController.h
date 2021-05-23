/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIPresentationController.h>

@class CKBrowserFullscreenRevealDimmingView, UIStatusBar, UIStatusBarWindow, UIView;

__attribute__((visibility("hidden")))
@interface CKBrowserFullscreenRevealPresentationController : UIPresentationController

{
    _Bool _presenting;
    _Bool _dismissing;
    CDUnknownBlockType _dismissHandler;
    CKBrowserFullscreenRevealDimmingView *_dimmingView;
    UIStatusBar *_statusBar;
    UIStatusBarWindow *_statusBarWindow;
    unsigned long long _statusBarResizeMask;
    UIView *_presentingSnapshotView;
    struct CGRect _presentingSnapshotFrame;
}

@property (retain, nonatomic) CKBrowserFullscreenRevealDimmingView *dimmingView;
@property (nonatomic, getter=isPresenting) _Bool presenting;
@property (nonatomic, getter=isDismissing) _Bool dismissing;
@property (retain, nonatomic) UIStatusBar *statusBar;
@property (retain, nonatomic) UIStatusBarWindow *statusBarWindow;
@property (nonatomic) unsigned long long statusBarResizeMask;
@property (retain, nonatomic) UIView *presentingSnapshotView;
@property (nonatomic) struct CGRect presentingSnapshotFrame;
@property (copy, nonatomic) CDUnknownBlockType dismissHandler;

- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)presentationTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (_Bool)shouldRemovePresentersView;
- (_Bool)_shouldGrabPresentersView;
- (void)_cleanupPresentation;
- (void)_willChangeStatusBarFrame:(id)arg1;
- (void)dimmingViewTapped:(id)arg1;
- (void)_prepareViewHierarchyForPresentation;
- (void)_configureViewsForPresentedState;
- (void)_configureViewsForDismissedState;
- (id)_viewsToApplyTransform;
- (id)_viewsToApplyCornerRadius;

@end
