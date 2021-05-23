/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKClinicalAuthorizationBinaryChoiceFooterView, HKClinicalAuthorizationDisplayController, HKClinicalAuthorizationSequenceContext, HKLookUpAppPrivacyPolicyURLOperation, NSArray, NSString, UITableView;

@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationSettingsViewController : HKViewController

{
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    long long _style;
    HKClinicalAuthorizationSequenceContext *_context;
    HKClinicalAuthorizationDisplayController *_displayController;
    long long _authorizationMode;
    UITableView *_tableView;
    HKClinicalAuthorizationBinaryChoiceFooterView *_allowButtonsFooterView;
    NSArray *_sections;
    NSArray *_appInformationSectionCells;
    HKLookUpAppPrivacyPolicyURLOperation *_lookUpAppPrivacyPolicyURLOperation;
}

@property (nonatomic, readonly) HKClinicalAuthorizationDisplayController *displayController;
@property (nonatomic) long long authorizationMode;
@property (copy, nonatomic, readonly) NSString *readUsageDescription;
@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) HKClinicalAuthorizationBinaryChoiceFooterView *allowButtonsFooterView;
@property (copy, nonatomic) NSArray *sections;
@property (copy, nonatomic) NSArray *appInformationSectionCells;
@property (nonatomic, readonly, getter=shouldCommitUpdatesImmediately) _Bool commitUpdatesImmediately;
@property (nonatomic, readonly) _Bool isPrompting;
@property (retain, nonatomic) HKLookUpAppPrivacyPolicyURLOperation *lookUpAppPrivacyPolicyURLOperation;
@property (weak, nonatomic) id <HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) HKClinicalAuthorizationSequenceContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)source;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateForCurrentContentSizeCategory;
- (void)_reloadSections;
- (void)_finishWithError:(id)arg1;
- (id)_privacyPolicyURL;
- (id)initWithContext:(id)arg1 style:(long long)arg2;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)reloadAuthorizationSettings;
- (long long)_sectionForTableViewSection:(long long)arg1;
- (id)authorizationController;
- (id)_createHeaderViewWithSource:(id)arg1;
- (id)_createAllowButtonsFooterView;
- (void)_configureTableView;
- (void)_configureNavigationItemWithSource:(id)arg1;
- (void)_configureInitialAuthorizationSettingsForPrompting;
- (void)_fetchPrivacyPolicyURLForSource:(id)arg1;
- (id)_createAppInformationSectionCells;
- (id)_sectionsForAuthorizationController:(id)arg1;
- (void)_updateFooterButtonsTitles;
- (void)_updateAllowButtonEnabledStateAnimated:(_Bool)arg1;
- (long long)_defaultShareAuthorizationMode;
- (id)_doNotAllowButtonTitle;
- (void)_updateTableViewBottomPadding;
- (void)_allowButtonPressed:(id)arg1;
- (void)_doNotAllowButtonPressed:(id)arg1;
- (_Bool)_shouldDisplayAppInformationSection;
- (_Bool)_shouldDisplayShareDataTypes;
- (_Bool)_shouldDisplayShareAuthorizationModeSection;
- (long long)_shareAuthorizationModeForIndexPath:(id)arg1;
- (id)_visibleShareAuthorizationModeCellForMode:(long long)arg1;
- (void)_updateShareAuthorizationModeSectionFooter;
- (void)_presentConfirmationForStopSharingIfNeededWithAcceptHandler:(CDUnknownBlockType)arg1;
- (void)_presentViewAppPrivacyPolicyURLErrorAlert;
- (id)_typeForIndexPath:(id)arg1;
- (void)_updateShareAuthorizationModeSectionVisibilityIfNeeded;
- (_Bool)_isShowingShareAuthorizationModeSection;
- (void)_verifySections:(id)arg1 isEqualToSections:(id)arg2 afterInsertingSection:(id)arg3;
- (void)_showShareAuthorizationModeSectionIfNeeded;
- (void)_hideShareAuthorizationModeSectionIfNeeded;
- (long long)_tableViewSectionForSection:(long long)arg1;
- (_Bool)_tableViewSection:(long long)arg1 isEqualToSection:(long long)arg2;
- (_Bool)_cellAtIndexPathIsViewAppPrivacyPolicyCell:(id)arg1;
- (_Bool)_shouldHighlightViewAppPrivacyPolicyCellAtIndexPath:(id)arg1;
- (id)_shareUsageDescriptionCellForIndexPath:(id)arg1;
- (id)_viewAppPrivacyPolicyCellForIndexPath:(id)arg1;
- (id)_indexPathForViewAppPrivacyPolicyCell;
- (id)_indexPathForShareAuthorizationMode:(long long)arg1;
- (id)_formatStringForShareAuthorizationModeFooterWithMode:(long long)arg1;
- (_Bool)_shouldPresentStopSharingDialogueBeforeDisallowing;
- (id)_messageForStopSharingConfirmation;
- (void)_reloadViewAppPrivacyPolicyCell;
- (id)_appInformationCellForIndexPath:(id)arg1;
- (id)_shareDataTypeCellForIndexPath:(id)arg1;
- (id)_shareAuthorizationModeCellForIndexPath:(id)arg1;
- (id)_titleForAppInformationFooter;
- (id)_titleForShareDataTypesFooter;
- (id)_titleForShareAuthorizationModeFooter;
- (_Bool)_shouldHighlightAppInformationCellAtIndexPath:(id)arg1;
- (void)_viewAppPrivacyPolicyCellPressed:(id)arg1;
- (void)_shareAuthorizationModeCellPressed:(id)arg1;

@end
