/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayTypeController, HKHealthStore, NSMutableArray, NSUUID;

@interface _HKIngestSettingsViewController : HKTableViewController

{
    HKDisplayTypeController *_displayTypeController;
    NSMutableArray *_dataTypeNames;
    _Bool _deviceEnabled;
    _Bool _deviceFound;
    NSUUID *_deviceIdentifier;
    HKHealthStore *_healthStore;
}

@property (copy, nonatomic) NSUUID *deviceIdentifier;
@property (retain, nonatomic) HKHealthStore *healthStore;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)fetchEnabledStatusForPeripheral;
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 useInsetStyling:(_Bool)arg3;
- (void)reloadData:(id)arg1;

@end
