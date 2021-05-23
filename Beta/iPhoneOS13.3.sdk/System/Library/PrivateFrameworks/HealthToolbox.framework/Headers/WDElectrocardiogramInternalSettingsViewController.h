/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKHeartRhythmAvailability, HKHostingAreaLayoutView, NPSManager, NSArray, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController

{
    _Bool _deletingSamples;
    NSArray *_allDemoResults;
    HKHostingAreaLayoutView *_pickerInputView;
    UIPickerView *_resultPicker;
    NPSManager *_syncManager;
    NSArray *_demoResultKeys;
    HKHealthStore *_healthStore;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
}

@property (nonatomic, readonly) NPSManager *syncManager;
@property (retain, nonatomic) NSArray *demoResultKeys;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (nonatomic, readonly) NSArray *allDemoResults;
@property (nonatomic, readonly) UIPickerView *resultPicker;
@property (nonatomic, readonly) HKHostingAreaLayoutView *pickerInputView;
@property (nonatomic, getter=isDeletingSamples) _Bool deletingSamples;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)initWithHealthStore:(id)arg1;
- (void)keyboardDidDismiss:(id)arg1;
- (void)updateCellIndexNumberLabels;
- (id)_buttonCellForTableView:(id)arg1;
- (void)clearCellIndexNumberLabels;

@end
