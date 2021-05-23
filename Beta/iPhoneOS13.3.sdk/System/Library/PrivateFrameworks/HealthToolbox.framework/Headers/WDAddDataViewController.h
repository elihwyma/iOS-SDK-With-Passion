/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, HKUnitPreferenceController, NSArray, NSDate, NSDictionary, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDAddDataViewController : HKTableViewController

{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKUnitPreferenceController *_unitController;
    NSArray *_tableViewCellsBySection;
    NSDictionary *_manualEntryItems;
    NSDate *_initialStartDate;
}

@property (retain, nonatomic) NSDate *initialStartDate;
@property (nonatomic) _Bool savingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)numberOfSections;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)addButtonTapped:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;
- (id)defaultMetadata;
- (id)manualEntryItemsForSection:(long long)arg1;
- (void)_updateActivityForViewDidAppear;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)validateMaximumAllowedDurationFor:(id)arg1 endDate:(id)arg2 competion:(CDUnknownBlockType)arg3;
- (id)generateHKObjects;
- (void)_loadTableViewCellsBySectionIfNecessary;
- (id)defaultEditingItem;
- (void)_dataValidated;
- (void)_showValidationConfirmAlertWithErrorString:(id)arg1;
- (void)_showValidationErrorAlertWithErrorString:(id)arg1;
- (void)saveHKObjectWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadManualEntryItemsAndReloadTableView:(_Bool)arg1;
- (void)reloadManualEntryItems;

@end
