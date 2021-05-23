/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayCategoryController, HKHealthStore, HKSource, HKSourceAuthorizationController, NSArray, NSSet, NSString, UIBarButtonItem;

@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKAuthorizationSettingsViewController : HKTableViewController

{
    NSArray *_documents;
    NSArray *_actualSections;
    NSArray *_readingTypeOrdering;
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    HKHealthStore *_healthStore;
    HKSource *_source;
    long long _style;
    NSString *_updateDescription;
    NSString *_shareDescription;
    NSString *_researchStudyUsageDescription;
    NSSet *_typesToShare;
    NSSet *_typesToRead;
    HKDisplayCategoryController *_displayCategoryController;
    HKSourceAuthorizationController *_sourceAuthorizationController;
    UIBarButtonItem *_cancelButtonItem;
    UIBarButtonItem *_doneButtonItem;
}

@property (retain, nonatomic) HKDisplayCategoryController *displayCategoryController;
@property (retain, nonatomic) HKSourceAuthorizationController *sourceAuthorizationController;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (readonly) _Bool isPrompting;
@property (retain) NSArray *actualSections;
@property (weak, nonatomic) id <HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSource *source;
@property (nonatomic, readonly) long long style;
@property (copy, nonatomic) NSString *updateDescription;
@property (copy, nonatomic) NSString *shareDescription;
@property (copy, nonatomic) NSString *researchStudyUsageDescription;
@property (retain, nonatomic) NSSet *typesToShare;
@property (retain, nonatomic) NSSet *typesToRead;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_finishWithError:(id)arg1;
- (void)_done:(id)arg1;
- (void)_addHeaderView;
- (_Bool)shouldPresent;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)initWithHealthStore:(id)arg1 style:(long long)arg2;
- (void)reloadAuthorizationSettings;
- (id)sectionsForAuthController:(id)arg1;
- (long long)authorizationSectionForSection:(long long)arg1;
- (void)_addCancelAndDoneButtons;
- (void)documentPickerViewControllerDidFinish:(id)arg1 error:(id)arg2;
- (void)authorizationController:(id)arg1 parentTypeIsDisabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4;
- (void)authorizationController:(id)arg1 subTypesEnabled:(id)arg2 forType:(id)arg3 inSection:(long long)arg4;
- (id)_localizedSourceExplanationWithDescription:(id)arg1;
- (id)_researchStudyExplanationCell;
- (id)_toggleAllCell;
- (id)_authorizationSettingCellForRowAtIndexPath:(id)arg1;
- (id)_openAppCell;
- (id)_specialCellWithIdentifier:(id)arg1;
- (id)_typeForIndexPath:(id)arg1 section:(long long *)arg2;
- (id)_localizedNameForSection:(long long)arg1 type:(id)arg2;
- (_Bool)_isTypeEnabledAtIndexPath:(id)arg1;
- (void)updateAllowButtonEnabledState;
- (_Bool)_shouldDisplayHealthRecordsRequests;
- (_Bool)_shouldDisplaySharingSection;
- (_Bool)_shouldDisplayReadingSection;
- (void)_configurationFailedWithError:(id)arg1;

@end
