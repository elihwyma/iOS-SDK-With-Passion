/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class SBDeviceApplicationRemoteTransientOverlayViewProvider;

@interface SBDeviceApplicationRemoteTransientOverlayContainerViewController : UIViewController

{
    SBDeviceApplicationRemoteTransientOverlayViewProvider *_viewProvider;
}

- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)initWithViewProvider:(id)arg1;

@end
