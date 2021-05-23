/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, HKUnitPreferenceController, NSArray, NSSet, UIBarButtonItem, UIFont;

__attribute__((visibility("hidden")))
@interface WDUnitPreferenceViewController : HKTableViewController

{
    NSSet *_units;
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
    NSArray *_rows;
    long long _selectedRowIndex;
    long long _originalSelectedRowIndex;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    _Bool _requiresChangeConfirmation;
    UIFont *_bodyFont;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (nonatomic) _Bool requiresChangeConfirmation;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (id)initWithUnits:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (id)_sortedUnitPreferenceRows;
- (void)_updateCurrentUnit:(id)arg1;

@end
