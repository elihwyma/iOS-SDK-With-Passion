/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIViewController.h>

@class MCInstallProfileQuestionViewController, MCProfile, MCProfileViewController, NSArray, NSData, NSSManager, NSString, UIAlertController;

@protocol MCInstallProfileDelegate;

@interface MCInstallProfileViewController : UIViewController

{
    MCInstallProfileQuestionViewController *_questionsController;
    CDUnknownBlockType _didAppearBlock;
    _Bool _processingPayload;
    _Bool _installHasFailed;
    _Bool _userCancelledInstall;
    _Bool _waitingForMoreInput;
    _Bool _isInteractionDelegate;
    _Bool _secondaryProfileReceived;
    _Bool _initialQuestionsHaveBeenAsked;
    _Bool _installingFromPurgatory;
    _Bool _delayUserInput;
    int _installState;
    NSString *_pin;
    MCProfile *_profile;
    NSData *_profileData;
    id <MCInstallProfileDelegate> _delegate;
    CDUnknownBlockType _signInCompletionHandler;
    NSString *_enrollmentPersonaID;
    MCProfileViewController *_profileViewController;
    NSArray *_warningsToPresent;
    UIAlertController *_activeAlertController;
    NSData *_originalProfileData;
    MCProfile *_originalProfile;
    id _profileListChangedObserver;
    NSSManager *_nssManager;
}

@property (copy, nonatomic) CDUnknownBlockType signInCompletionHandler;
@property (copy, nonatomic) NSString *enrollmentPersonaID;
@property (retain, nonatomic) MCProfileViewController *profileViewController;
@property (retain, nonatomic) NSArray *warningsToPresent;
@property (retain, nonatomic) UIAlertController *activeAlertController;
@property (retain, nonatomic) NSData *originalProfileData;
@property (retain, nonatomic) MCProfile *originalProfile;
@property (nonatomic) _Bool delayUserInput;
@property (retain, nonatomic) id profileListChangedObserver;
@property (nonatomic) int installState;
@property (retain, nonatomic) NSSManager *nssManager;
@property (nonatomic) _Bool processingPayload;
@property (nonatomic) _Bool installHasFailed;
@property (nonatomic) _Bool userCancelledInstall;
@property (nonatomic) _Bool waitingForMoreInput;
@property (nonatomic) _Bool isInteractionDelegate;
@property (nonatomic) _Bool secondaryProfileReceived;
@property (nonatomic) _Bool initialQuestionsHaveBeenAsked;
@property (nonatomic) _Bool installingFromPurgatory;
@property (retain, nonatomic) NSString *pin;
@property (retain, nonatomic) MCProfile *profile;
@property (retain, nonatomic) NSData *profileData;
@property (weak, nonatomic) id <MCInstallProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_showRebootAlert;

- (void)dealloc;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)profileConnection:(id)arg1 didRequestMAIDSignIn:(id)arg2 personaID:(id)arg3;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (id)initCommonWithProfileData:(id)arg1 profileViewMode:(long long)arg2 swizzle:(_Bool)arg3;
- (void)setInstallState:(int)arg1 animated:(_Bool)arg2;
- (id)initCommonWithProfile:(id)arg1 profileViewMode:(long long)arg2 swizzle:(_Bool)arg3;
- (void)_cancelActiveAlertController:(_Bool)arg1;
- (void)_cancelInstallationWithProperRequest;
- (void)_takeMeBack;
- (void)_cancelUserInputAnimated:(_Bool)arg1;
- (void)_cancelInstallAfterPresentingWarningsAnimated:(_Bool)arg1;
- (void)_cancelInstallAfterMAIDAuthenticationAnimated:(_Bool)arg1;
- (id)newRightBarButtonItem;
- (void)_resetInstallationVariables;
- (void)updateTitleForProfileInstallationState:(int)arg1;
- (void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(_Bool)arg2;
- (void)_hideProgressIndicatorIfNeeded;
- (void)_installProfile;
- (void)queueNextProfileData:(id)arg1;
- (void)_performInstallAfterPINVerification;
- (void)_showPINSheet;
- (void)_showProgressIndicator;
- (void)_installFinishedWithIdentifier:(id)arg1 error:(id)arg2;
- (void)installProfileRemotelyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_continueInstallAfterPresentingWarnings;
- (void)_finishWaitingForMoreUserInput;
- (void)_hideProgressIndicatorWithShowButtons:(_Bool)arg1;
- (_Bool)_installErrorIsUserCancelledError:(id)arg1;
- (id)_redirectURLFromInstallError:(id)arg1;
- (void)_showAlertForInstallError:(id)arg1;
- (void)_submitResponses:(id)arg1;
- (void)_waitForMoreUserInput;
- (_Bool)_displayedAsSheet;
- (void)_showFinalInstallationWarning:(CDUnknownBlockType)arg1;
- (void)_pushInstallationWarningControllerWithWarnings:(id)arg1;
- (void)_didFinishPresentingConsent:(id)arg1;
- (void)_setDidAppearBlock:(CDUnknownBlockType)arg1;
- (void)_showCPLFinalInstallationWarning:(CDUnknownBlockType)arg1 withMDMWarning:(_Bool)arg2;
- (void)_showMDMFinalInstallationWarning:(CDUnknownBlockType)arg1;
- (void)_promptUserWithUserInput:(id)arg1;
- (void)_presentConsent:(id)arg1;
- (void)_signInMAID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performInstall;
- (id)_localizedCPLFinalWarningString;
- (void)performRemoveAfterFinalVerification;
- (void)_profileRemovalDidFinish;
- (void)_removeWatchProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removePhoneProfileWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isProfileInstalled;
- (void)signInViewControllerDidCancelAuthentication:(id)arg1;
- (void)installationConsentViewController:(id)arg1 finishedWithUserContinueResponse:(_Bool)arg2;
- (void)installationWarningViewController:(id)arg1 finishedWithUserContinueResponse:(_Bool)arg2;
- (void)setCurrentQuestionsController:(id)arg1;
- (void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2;
- (_Bool)questionsControllerIsDisplayedInSheet:(id)arg1;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (id)initWithProfileDataFromSettingsJump:(id)arg1;
- (id)initWithProfileDataFromPurgatory:(id)arg1;
- (void)_showReEnrollFailureAlert;
- (_Bool)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2;

@end
