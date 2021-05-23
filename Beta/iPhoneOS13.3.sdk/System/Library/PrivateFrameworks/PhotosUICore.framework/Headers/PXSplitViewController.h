/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UISplitViewController.h>

@class UIViewController;

@interface PXSplitViewController : UISplitViewController

{
    _Bool _inViewWillTransitionToSize;
    long long _originalPreferredDisplayMode;
    _Bool _wantsSidebarHidden;
    UIViewController *_sidebarViewController;
    UIViewController *_contentViewController;
}

@property (nonatomic, readonly) UIViewController *sidebarViewController;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (nonatomic) _Bool wantsSidebarHidden;

+ (void)initialize;

- (id)initWithCoder:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
- (void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2;
- (long long)targetDisplayModeForActionInSplitViewController:(id)arg1;
- (void)_splitViewController:(id)arg1 willBeginAnimatedTransitionToStateRequest:(id)arg2;
- (void)_splitViewController:(id)arg1 didEndAnimatedTransitionToStateRequest:(id)arg2;
- (void)_splitViewController:(id)arg1 willUpdateDisplayModeButtonItemForTargetMode:(long long)arg2 withHidden:(_Bool *)arg3 image:(id *)arg4 title:(id *)arg5 showsBackButtonIndicator:(_Bool *)arg6;
- (id)initWithSidebarNavigationController:(id)arg1 contentViewController:(id)arg2;
- (_Bool)_isDisplayModeAllVisibleAllowed;

@end
