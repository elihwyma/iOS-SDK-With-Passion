/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UISplitViewController.h>

@class PSRootController;

@protocol PSSplitViewControllerNavigationDelegate;

@interface PSSplitViewController : UISplitViewController

{
    id <PSSplitViewControllerNavigationDelegate> _navigationDelegate;
    PSRootController *_containerNavigationController;
}

@property (retain, nonatomic) PSRootController *containerNavigationController;
@property (weak, nonatomic) id <PSSplitViewControllerNavigationDelegate> navigationDelegate;

- (unsigned long long)supportedInterfaceOrientations;
- (void)setViewControllers:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (void)popRecursivelyToRootController;
- (void)setupControllerForToolbar:(id)arg1;
- (void)showInitialViewController:(id)arg1;
- (id)categoryController;

@end
