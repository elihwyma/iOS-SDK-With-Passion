//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, MCUIUserEnrollmentAccountSpecifierProvider, NSArray, NSMutableDictionary, NSString, PSSpecifier;

@interface ACUIDataclassConfigurationViewController : ACUIViewController
{
    BOOL _forceMailSetup;
    NSString *_accountIdentifier;
    NSMutableDictionary *_allDesiredDataclassActions;
    BOOL _isMergingSyncData;
    PSSpecifier *_deleteButtonSpecifier;
    PSSpecifier *_accountSummaryCellSpecifier;
    NSArray *_dataclassSpecifiers;
    NSArray *_otherSpecifiers;
    BOOL _didShowDataclassActionPickerDuringRemoval;
    MCUIUserEnrollmentAccountSpecifierProvider *_userEnrollmentAccountSpecifierProvider;
    BOOL _firstTimeSetup;
    BOOL _shouldShowDeleteAccountButton;
    BOOL _shouldEnableDeleteAccountButton;
    BOOL _shouldEnableAccountSummaryCell;
    BOOL _isMailSetupForced;
    NSArray *_preEnabledDataclasses;
    ACAccount *_account;
    PSSpecifier *_dataclassGroupSpecifier;
    id /* CDUnknownBlockType */ _configurationCompletion;
}

+ (BOOL)shouldPresentAsModalSheet;
@property(copy, nonatomic) id /* CDUnknownBlockType */ configurationCompletion; // @synthesize configurationCompletion=_configurationCompletion;
@property(nonatomic) BOOL isMailSetupForced; // @synthesize isMailSetupForced=_isMailSetupForced;
@property(nonatomic) BOOL shouldEnableAccountSummaryCell; // @synthesize shouldEnableAccountSummaryCell=_shouldEnableAccountSummaryCell;
@property(nonatomic) BOOL shouldEnableDeleteAccountButton; // @synthesize shouldEnableDeleteAccountButton=_shouldEnableDeleteAccountButton;
@property(nonatomic) BOOL shouldShowDeleteAccountButton; // @synthesize shouldShowDeleteAccountButton=_shouldShowDeleteAccountButton;
@property(readonly, nonatomic) PSSpecifier *deleteButtonSpecifier; // @synthesize deleteButtonSpecifier=_deleteButtonSpecifier;
@property(retain, nonatomic) PSSpecifier *dataclassGroupSpecifier; // @synthesize dataclassGroupSpecifier=_dataclassGroupSpecifier;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSArray *preEnabledDataclasses; // @synthesize preEnabledDataclasses=_preEnabledDataclasses;
@property(nonatomic, getter=isFirstTimeSetup) BOOL firstTimeSetup; // @synthesize firstTimeSetup=_firstTimeSetup;
// - (void).cxx_destruct;
- (id)userEnrollmentAccountSpecifierProvider;
- (BOOL)isUserEnrollment;
- (BOOL)_confirmSyncDelete;
- (BOOL)_confirmDeleteLocalDataForDataclasses:(id)arg1;
- (BOOL)_confirmKeepLocalDataForDataclasses:(id)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (BOOL)isAppleMailAccount:(id)arg1;
- (id)deviceMessage;
- (long long)_promptUserToConfirmAccountSyncDeletion;
- (BOOL)_promptUserToConfirmAccountDeletion;
- (long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2;
- (BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
- (void)deleteButtonTapped:(id)arg1;
- (void)appendDeleteAccountButton;
- (BOOL)_isShowingDeleteAccountButton;
- (void)_notifyOfAccountSetupCompletion;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (id)_accountIdentifier;
- (id)_orderDataclassList:(id)arg1;
- (void)_setDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)setDataclass:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)shouldAutomaticallyTryEnablingDataclassDuringSetup:(id)arg1;
- (void)_enableAllProvisionedDataclassesWithoutRequringUserInteraction;
- (void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2;
- (id)_setupSpinnerTimerForSpecifier:(id)arg1;
- (id)dataclassSwitchStateForSpecifier:(id)arg1;
- (void)reloadDynamicSpecifiersWithAnimation:(BOOL)arg1;
- (id)otherSpecifiers;
- (BOOL)_isUserOverridableForDataclass:(id)arg1;
- (id)specifierForDataclass:(id)arg1;
- (BOOL)shouldShowSpecifierForDataclass:(id)arg1;
- (id)_specifiersForDataclasses:(id)arg1;
- (id)specifierForAccountSummaryCell;
- (id)specifiers;
- (BOOL)shouldVerifyBeforeAccountSave;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)_navigationTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldShowOtherSpecifiersDuringFirstSetup;
- (id)messageForAccountDeletionProgressUI;
- (id)titleForDeleteButton;
- (long long)deleteButtonIndex;
- (id)valueForAccountSummaryCell;
- (id)displayedShortAccountTypeString;
- (Class)accountInfoControllerClass;
- (id)displayedAccountTypeString;
- (void)forceMailSetup;
- (id)init;

@end
