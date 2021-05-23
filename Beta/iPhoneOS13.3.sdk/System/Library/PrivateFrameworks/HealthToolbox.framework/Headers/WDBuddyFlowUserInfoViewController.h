/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKTitledContactBuddyHeaderView, NSArray, NSString, WDBuddyFlowContinueFooterView, WDBuddyFlowUserInfo, WDProfile, WDUserDefaults, _HKMedicalIDData;

@protocol WDBuddyControllerUserInfoDelegate;

@interface WDBuddyFlowUserInfoViewController : HKTableViewController

{
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    WDUserDefaults *_userDefaults;
    _HKMedicalIDData *_medicalIDData;
    HKTitledContactBuddyHeaderView *_headerView;
    WDBuddyFlowContinueFooterView *_footerView;
    id <WDBuddyControllerUserInfoDelegate> _delegate;
    NSArray *_dataEntryItems;
    WDBuddyFlowUserInfo *_userInfo;
}

@property (retain, nonatomic) NSArray *dataEntryItems;
@property (retain, nonatomic) WDBuddyFlowUserInfo *userInfo;
@property (weak, nonatomic) id <WDBuddyControllerUserInfoDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_localeDidChange:(id)arg1;
- (void)_loadData;
- (void)_updateForCurrentSizeCategory;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)_setupObservers;
- (void)_saveData;
- (id)_createTableHeaderView;
- (id)_createTableFooterView;
- (void)_configureHeaderView:(id)arg1;
- (void)continueButtonTapped:(id)arg1;
- (void)focusItemAtIndex:(long long)arg1;
- (void)dataEntryItemDonePressed:(id)arg1;
- (void)dataEntryItemPrevPressed:(id)arg1;
- (void)dataEntryItemNextPressed:(id)arg1;

@end
