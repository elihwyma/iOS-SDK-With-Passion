/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol HMUserManagementRemoteHost;

__attribute__((visibility("hidden")))
@interface HMAddUserRemoteViewController : _UIRemoteViewController

{
    id <HMUserManagementRemoteHost> _delegate;
}

@property (weak, nonatomic) id <HMUserManagementRemoteHost> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)userManagementDidFinishWithError:(id)arg1;
- (void)userManagementDidLoad;

@end
