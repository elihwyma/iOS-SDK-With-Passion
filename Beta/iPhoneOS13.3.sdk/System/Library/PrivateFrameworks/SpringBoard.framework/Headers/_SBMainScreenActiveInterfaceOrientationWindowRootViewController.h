/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@interface _SBMainScreenActiveInterfaceOrientationWindowRootViewController : UIViewController

{
    unsigned long long _supportedInterfaceOrientations;
}

@property (nonatomic) unsigned long long supportedInterfaceOrientations;

- (_Bool)_canShowWhileLocked;
- (_Bool)shouldAutorotate;
- (id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(_Bool)arg1;

@end
