/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol HMSetupRemoteHost;

__attribute__((visibility("hidden")))
@interface HMSetupRemoteViewController : _UIRemoteViewController

{
    id <HMSetupRemoteHost> _delegate;
}

@property (weak, nonatomic) id <HMSetupRemoteHost> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)accessorySetupDidFinishWithError:(id)arg1;
- (void)accessorySetupDidLoad;
- (void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishPairing;

@end
