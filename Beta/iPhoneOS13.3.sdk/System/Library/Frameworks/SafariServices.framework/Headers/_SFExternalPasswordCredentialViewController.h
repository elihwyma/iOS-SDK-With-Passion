/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFPasswordViewController.h>

@class NSString, SFExternalPasswordCredentialRemoteViewController, SFQueueingServiceViewControllerProxy;

@protocol SFExternalPasswordCredentialServiceViewControllerProtocol, _SFExternalPasswordCredentialViewControllerDelegate;

@interface _SFExternalPasswordCredentialViewController : _SFPasswordViewController

{
    SFExternalPasswordCredentialRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFExternalPasswordCredentialServiceViewControllerProtocol> *_serviceProxy;
}

@property (weak, nonatomic) id <_SFExternalPasswordCredentialViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)_remoteViewController;
- (void)autoFillWithExternalCredential:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_setUpServiceProxyIfNeeded;
- (void)presentExternalPasswordCredentialRemoteViewController:(id)arg1;
- (void)getCredentialForExternalCredential:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_connectToServiceWithCompletion:(CDUnknownBlockType)arg1;

@end
