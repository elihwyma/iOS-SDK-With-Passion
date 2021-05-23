/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class SBBulletinRootView, SBBulletinWindowController, _SBBulletinRootViewControllerTransitionContext;

@interface SBBulletinRootViewController : UIViewController

{
    SBBulletinRootView *_rootView;
    SBBulletinWindowController *_windowController;
    _SBBulletinRootViewControllerTransitionContext *_activeTransitionContext;
}

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_getRotationContentSettings:(CDStruct_e950349b *)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)wantsFullScreenLayout;
- (id)initWithBulletinWindowController:(id)arg1;

@end
