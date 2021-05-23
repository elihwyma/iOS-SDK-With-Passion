/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <UIKit/UIViewController.h>

@interface CDPServiceViewController : UIViewController

{
    _Bool _inlineMode;
    UIViewController *_contentViewController;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)offsetForCurrentKeyboard:(CDUnknownBlockType)arg1;

@end
