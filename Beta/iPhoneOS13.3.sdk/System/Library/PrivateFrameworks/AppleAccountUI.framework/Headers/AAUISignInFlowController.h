/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@class AAUIGenericTermsRemoteUI, ACAccountStore, ACAccountType, CUMessageSession, NSLock, NSMutableDictionary, NSString, UIViewController;

@interface AAUISignInFlowController : NSObject

{
    ACAccountStore *_accountStore;
    ACAccountType *_appleAccountType;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    CDUnknownBlockType _pendingCompletion;
    NSMutableDictionary *_cdpContextsByAccountID;
    NSLock *_cdpContextsByAccountIDLock;
    _Bool _shouldAutomaticallySaveSignInResults;
    _Bool _ignoreLockAssertErrors;
    _Bool _shouldStashLoginResponse;
    UIViewController *_presentingViewController;
    CUMessageSession *_messageSession;
    unsigned long long _activationAction;
}

@property (nonatomic) _Bool ignoreLockAssertErrors;
@property (retain, nonatomic) CUMessageSession *messageSession;
@property (nonatomic) unsigned long long activationAction;
@property (nonatomic) _Bool shouldStashLoginResponse;
@property (nonatomic) _Bool shouldHideActivationLockAlert;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) _Bool shouldAutomaticallySaveSignInResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (void)prewarmOperationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3;
- (id)_messageForErrorAlert:(long long)arg1;
- (id)_appleAccountType;
- (void)_presentExistingAccountAlert:(id)arg1;
- (void)_promptToEnableFindMyIfPossibleWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stashLoginResponseWithAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(_Bool)arg2 response:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_showGenericTermsUIforAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(CDUnknownBlockType)arg2;
- (void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentUnableToSaveAccountAlert;
- (void)_hasActivationLockSupportedWatchWithCompletion:(CDUnknownBlockType)arg1;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)signInOperationManager:(id)arg1 didSaveAccount:(id)arg2 error:(id)arg3;
- (void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
