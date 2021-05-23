/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFPasswordViewController.h>

@class SFPasswordRemoteViewController, SFQueueingServiceViewControllerProxy;

@protocol SFPasswordPickerServiceViewControllerProtocol;

@interface _SFAppAutoFillPasswordViewController : _SFPasswordViewController

{
    SFPasswordRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol> *_serviceProxy;
}

- (id)init;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)_remoteViewController;
- (void)setWebViewURL:(id)arg1;
- (void)setRemoteAppID:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)remoteViewController:(id)arg1 selectedCredential:(id)arg2;
- (void)_setUpServiceProxyIfNeeded;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;

@end
