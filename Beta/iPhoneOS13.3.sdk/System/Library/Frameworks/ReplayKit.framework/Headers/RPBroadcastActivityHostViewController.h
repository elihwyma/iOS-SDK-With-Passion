/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class RPBroadcastActivityViewController;

@interface RPBroadcastActivityHostViewController : _UIRemoteViewController

{
    RPBroadcastActivityViewController *_broadcastActivityViewController;
}

@property (weak, nonatomic) RPBroadcastActivityViewController *broadcastActivityViewController;

- (void)viewDidLoad;
- (unsigned long long)popoverArrowDirection;
- (long long)modalPresentationStyle;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(_Bool)arg4;
- (struct CGRect)popoverControllerSourceRect;
- (oneway void)presentationInfoWithCompletion:(CDUnknownBlockType)arg1;

@end
