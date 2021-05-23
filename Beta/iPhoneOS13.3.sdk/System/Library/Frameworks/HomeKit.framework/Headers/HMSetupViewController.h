/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <UIKit/UIViewController.h>

@class HMHome, HMSetupAccessoryDescription, HMSetupRemoteViewController, NSString, _UIAsyncInvocation, _UIRemoteViewController;

@interface HMSetupViewController : UIViewController

{
    _Bool _cancelling;
    _Bool _disconnected;
    _Bool _shouldPresentWhenLoaded;
    HMHome *_home;
    HMSetupAccessoryDescription *_accessoryDescription;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _loadHandler;
    _UIAsyncInvocation *_cancelServiceInvocation;
    HMSetupRemoteViewController *_remoteViewController;
}

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription;
@property (nonatomic) _Bool shouldPresentWhenLoaded;
@property (copy, nonatomic) CDUnknownBlockType loadHandler;
@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (retain, nonatomic) HMSetupRemoteViewController *remoteViewController;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, getter=isCancelling) _Bool cancelling;
@property (nonatomic, getter=isDisconnected) _Bool disconnected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

- (id)init;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_requestRemoteViewController;
- (void)accessorySetupDidFinishWithError:(id)arg1;
- (void)accessorySetupDidLoad;
- (void)accessorySetupDidFinishWithInfo:(id)arg1 error:(id)arg2;
- (void)accessorySetupDidBeginPairing;
- (void)accessorySetupDidFinishPairing;
- (void)setupFailedWithError:(id)arg1;
- (void)setupInterruptedWithError:(id)arg1;
- (id)initWithHome:(id)arg1 accessoryDescription:(id)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)_finishSetupWithInfo:(id)arg1 error:(id)arg2;
- (void)_configureAndAddRemoteViewController;
- (void)_presentAsTopmostViewController;
- (void)presentWhenLoaded;

@end
