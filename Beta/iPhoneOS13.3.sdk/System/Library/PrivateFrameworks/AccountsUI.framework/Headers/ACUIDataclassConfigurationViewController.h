/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, MCUIUserEnrollmentAccountSpecifierProvider, NSArray, NSMutableDictionary, NSString, PSSpecifier;

@interface ACUIDataclassConfigurationViewController : ACUIViewController

{
    _Bool _forceMailSetup;
    NSString *_accountIdentifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    _Bool _isMergingSyncData;
    PSSpecifier *_deleteButtonSpecifier;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSArray *_dataclassSpecifiers;
    NSArray *_otherSpecifiers;
    _Bool _didShowDataclassActionPickerDuringRemoval;
    MCUIUserEnrollmentAccountSpecifierProvider *_userEnrollmentAccountSpecifierProvider;
    _Bool _firstTimeSetup;
    _Bool _shouldShowDeleteAccountButton;
    _Bool _shouldEnableDeleteAccountButton;
    _Bool _shouldEnableAccountSummaryCell;
    _Bool _isMailSetupForced;
    NSArray *_preEnabledDataclasses;
    ACAccount *_account;
    PSSpecifier *_dataclassGroupSpecifier;
    CDUnknownBlockType _configurationCompletion;
}

@property (nonatomic, getter=isFirstTimeSetup) _Bool firstTimeSetup;
@property (copy, nonatomic) NSArray *preEnabledDataclasses;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) PSSpecifier *dataclassGroupSpecifier;
@property (nonatomic, readonly) PSSpecifier *deleteButtonSpecifier;
@property (nonatomic) _Bool shouldShowDeleteAccountButton;
@property (nonatomic) _Bool shouldEnableDeleteAccountButton;
@property (nonatomic) _Bool shouldEnableAccountSummaryCell;
@property (nonatomic) _Bool isMailSetupForced;
@property (copy, nonatomic) CDUnknownBlockType configurationCompletion;

+ (_Bool)shouldPresentAsModalSheet;

- (id)init;
- (_Bool)isUserEnrollment;
- (id)_accountIdentifier;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)specifiers;
- (void)doneButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (id)displayedAccountTypeString;
- (id)displayedShortAccountTypeString;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (_Bool)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
- (long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2;
- (void)forceMailSetup;
- (id)_navigationTitle;
- (_Bool)shouldVerifyBeforeAccountSave;
- (id)specifierForAccountSummaryCell;
- (id)_specifiersForDataclasses:(id)arg1;
- (_Bool)shouldShowOtherSpecifiersDuringFirstSetup;
- (id)otherSpecifiers;
- (id)titleForDeleteButton;
- (void)deleteButtonTapped:(id)arg1;
- (Class)accountInfoControllerClass;
- (id)valueForAccountSummaryCell;
- (id)_orderDataclassList:(id)arg1;
- (_Bool)shouldShowSpecifierForDataclass:(id)arg1;
- (id)specifierForDataclass:(id)arg1;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)dataclassSwitchStateForSpecifier:(id)arg1;
- (_Bool)_isUserOverridableForDataclass:(id)arg1;
- (id)_setupSpinnerTimerForSpecifier:(id)arg1;
- (void)_setDataclass:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (_Bool)_confirmKeepLocalDataForDataclasses:(id)arg1;
- (_Bool)_confirmDeleteLocalDataForDataclasses:(id)arg1;
- (void)_notifyOfAccountSetupCompletion;
- (_Bool)_isShowingDeleteAccountButton;
- (id)userEnrollmentAccountSpecifierProvider;
- (_Bool)_promptUserToConfirmAccountDeletion;
- (_Bool)isAppleMailAccount:(id)arg1;
- (_Bool)_confirmSyncDelete;
- (long long)_promptUserToConfirmAccountSyncDeletion;
- (id)deviceMessage;
- (id)messageForAccountDeletionProgressUI;
- (long long)deleteButtonIndex;
- (void)reloadDynamicSpecifiersWithAnimation:(_Bool)arg1;
- (void)setDataclass:(id)arg1 enabled:(_Bool)arg2;
- (void)appendDeleteAccountButton;

@end
