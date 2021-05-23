/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCURLListenerListController.h>

@class MCDetailsDescriptionTableCell, MCDetailsHeaderCell, MCProfile, MCQuestionsController, NSArray, NSData, NSString, UIAlertView, UITableViewCell, UITextField;

__attribute__((visibility("hidden")))
@interface MCConfigurationDetailsController : MCURLListenerListController

{
    NSString *_profileId;
    MCDetailsHeaderCell *_configHeader;
    MCDetailsDescriptionTableCell *_configMiddle;
    UITableViewCell *_configBottom;
    int _installMode;
    _Bool _processingPayload;
    _Bool _installHasFailed;
    _Bool _userCancelledInstall;
    _Bool _waitingForMoreInput;
    _Bool _isInteractionDelegate;
    _Bool _secondaryProfileReceived;
    _Bool _profileWantsToReEnroll;
    _Bool _actionButtonHidden;
    UIAlertView *_activeAlert;
    MCQuestionsController *_questionsController;
    CDUnknownBlockType _didAppearBlock;
    _Bool _initialQuestionsHaveBeenAsked;
    NSString *_pin;
    CDStruct_8422b130 _configurationFlags;
    _Bool _delayUserInput;
    MCProfile *_cachedProfile;
    NSData *_cachedProfileData;
    UITextField *_passwordField;
    NSArray *_viewControllersAfterTransition;
    id _profileListChangedObserver;
}

@property (copy, nonatomic) NSString *profileId;
@property (nonatomic) _Bool delayUserInput;
@property (retain, nonatomic) MCProfile *cachedProfile;
@property (retain, nonatomic) NSData *cachedProfileData;
@property (retain, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) NSArray *viewControllersAfterTransition;
@property (retain, nonatomic) id profileListChangedObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_dateFormatter;
+ (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
+ (void)_showRebootAlert;
+ (void)updateUserInfo:(id)arg1 withProfile:(id)arg2;
+ (id)displayNameForUserInfo:(id)arg1;
+ (id)organizationForUserInfo:(id)arg1;
+ (_Bool)isNearExpirationForUserInfo:(id)arg1;

- (void)dealloc;
- (void)profileConnection:(id)arg1 didFinishInstallationWithIdentifier:(id)arg2 error:(id)arg3;
- (void)profileConnection:(id)arg1 didUpdateStatus:(id)arg2;
- (void)profileConnectionDidRequestCurrentPasscode:(id)arg1;
- (void)profileConnection:(id)arg1 didBeginInstallingNextProfile:(id)arg2;
- (void)profileConnection:(id)arg1 didRequestUserInput:(id)arg2;
- (void)profileConnection:(id)arg1 didShowUserWarnings:(id)arg2;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)specifiers;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)infoListController:(id)arg1 finishedWithUserResponse:(_Bool)arg2;
- (void)_takeMeBack;
- (void)_performInstallAfterPINVerification;
- (void)_showPINSheet;
- (void)_showProgressIndicator;
- (void)_finishWaitingForMoreUserInput;
- (_Bool)_installErrorIsUserCancelledError:(id)arg1;
- (id)_redirectURLFromInstallError:(id)arg1;
- (void)_showAlertForInstallError:(id)arg1;
- (void)_submitResponses:(id)arg1;
- (void)_waitForMoreUserInput;
- (_Bool)_displayedAsSheet;
- (void)_setDidAppearBlock:(CDUnknownBlockType)arg1;
- (void)_promptUserWithUserInput:(id)arg1;
- (void)_performInstall;
- (void)_profileRemovalDidFinish;
- (void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2;
- (_Bool)questionsControllerIsDisplayedInSheet:(id)arg1;
- (void)_showReEnrollFailureAlert;
- (_Bool)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2;
- (void)_profileListChanged:(id)arg1;
- (void)_showRemovalWarningAlert;
- (void)_performReEnroll;
- (void)_performReEnrollAfterPINVerification;
- (void)_showWrongRemovalPasswordAlert;
- (void)_clearCachedTableCells;
- (void)_cancelActiveAlert:(_Bool)arg1;
- (void)_setCachedProfile:(id)arg1;
- (void)_showNavButtonsForStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_currentProfile;
- (void)_setCachedProfileData:(id)arg1;
- (_Bool)profileIsExpiringSoon;
- (void)reEnroll:(id)arg1;
- (id)_titleForCurrentState;
- (void)_updateTitle:(id)arg1;
- (id)_currentProfileData;
- (void)_hideActionButton;
- (void)_continueInstall;
- (void)_hideProgressIndicatorWithSuccess:(_Bool)arg1 showButtons:(_Bool)arg2;
- (void)_showActionButton;
- (id)_nextTitleAfterAction;
- (id)_infoListFromWarnings:(id)arg1;
- (void)_cancelInstall;
- (void)_slideRightToSelf;
- (void)_cancelUserInput;
- (void)_installFinishedWithError:(id)arg1 profileId:(id)arg2;
- (void)_showInstallationWarningAlert;
- (void)_showProfileWarningFromWarning:(id)arg1;
- (void)_pushInstallationWarningControllerWithInfo:(id)arg1;
- (void)performRemoveAfterPINVerification;
- (void)verifyPINBeforeRemoval;
- (_Bool)installedThisLaunch;
- (void)installPayload;
- (void)removePayload;
- (void)_changeActionButtonToRemove;

@end
