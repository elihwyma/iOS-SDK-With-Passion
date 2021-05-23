/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@class NSOperationQueue, NSString, UINavigationController, VSAuditToken, VSOptional, VSPersistentStorage, VSPreferences, VSRemoteNotifier, VSRestrictionsCenter;

__attribute__((visibility("hidden")))
@interface VSViewServiceViewController : UIViewController

{
    _Bool _presentedInHost;
    _Bool _identityProviderPickerRequired;
    _Bool _didAuthenticateAccount;
    VSPersistentStorage *_storage;
    VSRestrictionsCenter *_restrictionsCenter;
    VSRemoteNotifier *_remoteNotifier;
    VSPreferences *_preferences;
    NSOperationQueue *_privateQueue;
    VSOptional *_currentRequest;
    VSOptional *_currentRequestID;
    UINavigationController *_navController;
    VSAuditToken *_auditToken;
}

@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) VSRestrictionsCenter *restrictionsCenter;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (copy, nonatomic) VSOptional *currentRequest;
@property (retain, nonatomic) VSOptional *currentRequestID;
@property (nonatomic, getter=isPresentedInHost) _Bool presentedInHost;
@property (nonatomic, getter=isIdentityProviderPickerRequired) _Bool identityProviderPickerRequired;
@property (nonatomic) _Bool didAuthenticateAccount;
@property (retain, nonatomic) UINavigationController *navController;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_willAppearInRemoteViewController;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)_performRequest:(id)arg1 withIdentifier:(id)arg2;
- (void)_viewControllerWasDismissed;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (void)identityProviderViewControllerDidFinishLoading:(id)arg1;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderPickerViewControllerDidCancel:(id)arg1;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderPickerViewControllerDidPickAdditionalIdentityProviders:(id)arg1;
- (void)_performRequestInternal:(id)arg1 withID:(id)arg2 identityProviders:(id)arg3 accounts:(id)arg4;
- (void)_requestDidFailWithError:(id)arg1;
- (void)_performRequestWithIdentityProvider:(id)arg1 account:(id)arg2;
- (void)_didDetermineIdentityProvider:(id)arg1 withPickerViewController:(id)arg2;
- (void)_showIdentityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (void)_completeRequestWithResponse:(id)arg1;
- (id)_identityProviderRequestForViewServiceRequest:(id)arg1 withAccount:(id)arg2;
- (void)_determinePreAuthAppIsAuthorized:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentInHostIfNecessary;
- (id)_viewControllerHost;
- (id)_viewServiceResponseWithIdentityProviderResponse:(id)arg1;
- (void)_presentWelcomeMessageForIdentityProvider:(id)arg1 withLogoCacheURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_dismissInHostIfNecessary;
- (void)_completeRequest:(id)arg1 withResponse:(id)arg2;
- (void)_didCancelRequest;
- (void)_completeRequestWithResponse:(id)arg1 fromIdentityProvider:(id)arg2;

@end
