/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayTypeController, HKHealthStore, HKUnitPreferenceController, NSArray;

@interface HKBeatToBeatViewController : HKTableViewController

{
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    NSArray *_bpmPoints;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) NSArray *bpmPoints;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)initWithHeartbeatSeriesSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)initWithHRVSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (void)_addHeartbeatSeriesSample:(id)arg1;
- (id)_displayStringForInstantaneousBPM:(double)arg1;
- (id)_displayStringForTime:(double)arg1;

@end
