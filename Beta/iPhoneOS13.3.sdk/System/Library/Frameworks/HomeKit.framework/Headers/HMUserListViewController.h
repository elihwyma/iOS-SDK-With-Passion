/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <UIKit/UIViewController.h>

@class HMHome, HMUserListRemoteViewController, _UIAsyncInvocation;

__attribute__((visibility("hidden")))
@interface HMUserListViewController : UIViewController

{
    _Bool _shouldPresentWhenLoaded;
    HMHome *_home;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _loadHandler;
    _UIAsyncInvocation *_cancelServiceInvocation;
    HMUserListRemoteViewController *_remoteViewController;
}

@property (retain, nonatomic) HMHome *home;
@property (nonatomic) _Bool shouldPresentWhenLoaded;
@property (copy, nonatomic) CDUnknownBlockType loadHandler;
@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (retain, nonatomic) HMUserListRemoteViewController *remoteViewController;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)_requestRemoteViewController;
- (void)userManagementDidFinishWithError:(id)arg1;
- (void)userManagementDidLoad;
- (void)_configureAndAddRemoteViewController;
- (void)_presentAsTopmostViewController;
- (void)presentWhenLoaded;
- (void)_finishSetupWithError:(id)arg1;
- (id)initWithHome:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;

@end
