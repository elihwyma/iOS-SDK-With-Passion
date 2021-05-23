/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class RPBroadcastPickerExtensionHostContext, RPSystemBroadcastPickerViewController;

@interface RPBroadcastPickerHostViewController : _UIRemoteViewController

{
    RPSystemBroadcastPickerViewController *_broadcastPickerViewController;
    RPBroadcastPickerExtensionHostContext *_hostContext;
}

@property (weak, nonatomic) RPSystemBroadcastPickerViewController *broadcastPickerViewController;
@property (retain, nonatomic) RPBroadcastPickerExtensionHostContext *hostContext;

- (oneway void)viewControllerDidFinish;
- (void)sendMessageToExtension;

@end
