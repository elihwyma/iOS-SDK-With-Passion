/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSArray, NSOperationQueue, NSString, VSAppDescription, VSDevice, VSIdentityProviderRequestManager, VSPersistentStorage, VSPreferences, VSRemoteNotifier;

@protocol VSSetupFlowControllerDelegate;

@interface VSSetupFlowController : NSObject <Swift>

{
    _Bool _isInSTBMode;
    _Bool _signingIn;
    _Bool _notifyDelegateFromActivation;
    id <VSSetupFlowControllerDelegate> _delegate;
    VSPreferences *_preferences;
    VSPersistentStorage *_storage;
    NSOperationQueue *_privateQueue;
    VSRemoteNotifier *_remoteNotifier;
    NSArray *_freeOnBoardingBundleIDs;
    VSAppDescription *_appDescription;
    NSString *_providerAccountUsername;
    VSIdentityProviderRequestManager *_requestManager;
    CDUnknownBlockType _goingBackActivationCompletionBlock;
    VSDevice *_currentDevice;
}

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSRemoteNotifier *remoteNotifier;
@property (copy, nonatomic) NSArray *freeOnBoardingBundleIDs;
@property (nonatomic, getter=isSigningIn) _Bool signingIn;
@property (retain, nonatomic) VSAppDescription *appDescription;
@property (retain, nonatomic) NSString *providerAccountUsername;
@property (nonatomic) _Bool isInSTBMode;
@property (retain, nonatomic) VSIdentityProviderRequestManager *requestManager;
@property (nonatomic) _Bool notifyDelegateFromActivation;
@property (copy, nonatomic) CDUnknownBlockType goingBackActivationCompletionBlock;
@property (retain, nonatomic) VSDevice *currentDevice;
@property (weak, nonatomic) id <VSSetupFlowControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_didStartLoading;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)_presentError:(id)arg1;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;
- (void)_appleAccountDidChange:(id)arg1;
- (void)_startLoadingAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2 arrivedViaNotNowButton:(_Bool)arg3 arrivedAfterSigningIn:(_Bool)arg4 goingBack:(_Bool)arg5;
- (void)_presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_finishAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2;
- (void)_requestAccessWithViewController:(id)arg1;
- (void)startSilentSigningInForSTBFromActivation:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_offerAuthenticationForSTBProvider:(id)arg1 msoAppDescription:(id)arg2 providerAccountUsername:(id)arg3;
- (void)_offerAuthenticationForProvider:(id)arg1 withSupportedAppsButton:(_Bool)arg2 msoAppDescription:(id)arg3;
- (void)_offerAuthenticationWithSupportedAppsButton:(_Bool)arg1;
- (void)_obtainConsentForBundleIDs:(id)arg1 vouchers:(id)arg2 withAppleAccount:(id)arg3 identityProvider:(id)arg4 endingUndoGrouping:(_Bool)arg5 arrivedViaNotNowButton:(_Bool)arg6 arrivedAfterSigningIn:(_Bool)arg7 goingBack:(_Bool)arg8;
- (void)_pickProviderWithViewController:(id)arg1;
- (void)markSTBProviderAppForInstallation:(id)arg1 withAppPlacementPosition:(id)arg2;
- (void)finishSTBSuccessFlowForProvider:(id)arg1;
- (void)notNowWithIdentityProvider:(id)arg1;
- (void)signOutForNotNowFlowWithIdentityProvider:(id)arg1;
- (void)forceSignOutWithAccount:(id)arg1;
- (id)_getProviderWithUserTokenFromAllProviders:(id)arg1;
- (void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(_Bool)arg1 endingUndoGrouping:(_Bool)arg2 arrivedViaNotNowButton:(_Bool)arg3 arrivedAfterSigningIn:(_Bool)arg4 goingBack:(_Bool)arg5;
- (void)performDismissalOfIdentityProviderViewController:(id)arg1;
- (void)_dismissViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)supportedAppsViewControllerDidFinish:(id)arg1;
- (void)startLoadingWhenGoingBack:(_Bool)arg1;
- (void)startSigningIn;
- (void)startSigningInForIdentityProvider:(id)arg1;
- (void)notNow;
- (void)showSupportedApps;

@end
