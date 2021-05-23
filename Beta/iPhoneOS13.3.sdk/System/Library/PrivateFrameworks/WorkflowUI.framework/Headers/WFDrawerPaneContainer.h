/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIView, WFDrawerAnimationManager, WFDrawerDismissalHelper, WFDrawerGestureCoordinator;

@protocol WFDrawerPane, WFDrawerPaneContainerDelegate;

@interface WFDrawerPaneContainer : UIViewController

{
    _Bool _userInteractionEnabled;
    _Bool _inactive;
    id <WFDrawerPaneContainerDelegate> _delegate;
    UIViewController<WFDrawerPane> *_drawerPane;
    unsigned long long _visibility;
    unsigned long long _dimming;
    WFDrawerGestureCoordinator *_gestureCoordinator;
    WFDrawerAnimationManager *_animationManager;
    WFDrawerDismissalHelper *_dismissalHelper;
    UIView *_backgroundDimmingView;
    UIView *_foregroundDimmingView;
}

@property (nonatomic, readonly) WFDrawerGestureCoordinator *gestureCoordinator;
@property (nonatomic, readonly) WFDrawerAnimationManager *animationManager;
@property (nonatomic, readonly) WFDrawerDismissalHelper *dismissalHelper;
@property (weak, nonatomic, readonly) UIView *backgroundDimmingView;
@property (weak, nonatomic, readonly) UIView *foregroundDimmingView;
@property (weak, nonatomic) id <WFDrawerPaneContainerDelegate> delegate;
@property (nonatomic, readonly) UIViewController<WFDrawerPane> *drawerPane;
@property (nonatomic, readonly) unsigned long long visibility;
@property (nonatomic, readonly) unsigned long long dimming;
@property (nonatomic) _Bool userInteractionEnabled;
@property (nonatomic, getter=isInactive) _Bool inactive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIView *drawerView;
@property (nonatomic, readonly) double minimumDrawerHeight;
@property (nonatomic, readonly) double maximumDrawerHeight;
@property (nonatomic, readonly) double drawerHeight;
@property (nonatomic, readonly) struct CGRect grabberAreaBounds;

- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithDrawerPane:(id)arg1;
- (double)heightForVisibility:(unsigned long long)arg1;
- (void)gestureCoordinatorDidBeginInteraction:(id)arg1;
- (void)gestureCoordinator:(id)arg1 didContinueInteractionWithDrawerHeight:(double)arg2;
- (void)gestureCoordinator:(id)arg1 didFinishInteractionWithVelocity:(double)arg2 acceleration:(double)arg3 animation:(id)arg4;
- (void)layoutDrawerViewController;
- (void)layoutDrawerViewControllerForDrawerHeight:(double)arg1;
- (void)transitionWithPushedAnimationToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3 interruptible:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)transitionToVisibility:(unsigned long long)arg1 withDimming:(unsigned long long)arg2 animated:(_Bool)arg3 interruptible:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setupDimmingViewsForAnimationToDimming:(unsigned long long)arg1;
- (void)installForegroundDimmingViewIfNeeded;
- (void)removeForegroundDimmingViewIfUnused;
- (unsigned long long)closestVisibilityWithVelocity:(double)arg1 acceleration:(double)arg2 previousVisibility:(unsigned long long)arg3;
- (unsigned long long)closestVisibilityForHeight:(double)arg1;
- (unsigned long long)shrinkingVisibilityForHeight:(double)arg1;
- (unsigned long long)growingVisibilityForHeight:(double)arg1;

@end
