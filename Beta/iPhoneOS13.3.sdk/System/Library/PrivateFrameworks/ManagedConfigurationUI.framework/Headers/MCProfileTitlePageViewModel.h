/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Foundation/NSObject.h>

@class MCProfile, MCUIProfile, NSData, NSString, UIViewController;

@protocol MCProfileTitlePageViewModelDelegate, OS_dispatch_queue;

@interface MCProfileTitlePageViewModel : NSObject

{
    _Bool _isInstallingProfile;
    int _installState;
    UIViewController<MCProfileTitlePageViewModelDelegate> *_delegate;
    MCProfile *_profile;
    NSData *_profileData;
    NSString *_pin;
    NSObject<OS_dispatch_queue> *_serialQueue;
    MCUIProfile *_UIProfile;
    NSString *_personaID;
    CDUnknownBlockType _cleanupTask;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) int installState;
@property (retain, nonatomic) MCProfile *profile;
@property (retain, nonatomic) NSData *profileData;
@property (nonatomic) _Bool isInstallingProfile;
@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (copy, nonatomic) NSString *pin;
@property (copy, nonatomic) NSString *personaID;
@property (copy, nonatomic) CDUnknownBlockType cleanupTask;
@property (weak, nonatomic) UIViewController<MCProfileTitlePageViewModelDelegate> *delegate;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)_setup;
- (void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)_continueInstallAfterPresentingWarnings;
- (_Bool)_installErrorIsUserCancelledError:(id)arg1;
- (void)terminateProfileInstallationFlow;
- (void)_respondToUserInputRequest:(id)arg1 cancelled:(_Bool)arg2;
- (id)_createAuthenticationContext:(id)arg1 presentingViewController:(id)arg2;
- (void)_respondToMAIDAuthenticationRequestIfNeeded:(id)arg1 successful:(_Bool)arg2 error:(id)arg3 isCancelled:(_Bool)arg4;
- (void)_signInMAID:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_handleMAIDSignInRequestWithAccountID:(id)arg1 personaID:(id)arg2 connection:(id)arg3;
- (void)_handleUserInputRequest:(id)arg1;
- (id)initWithProfile:(id)arg1 profileData:(id)arg2;
- (void)startProfileInstallationFlow;
- (void)terminateProfileInstallationFlowAndDeleteProfile;

@end
