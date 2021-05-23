/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKCharacteristicType, HKDisplayType, HKHealthStore, HKSourceListDataSource, NSDictionary, WDDisplayTypeDescriptionTableFooterView, WDProfile;

__attribute__((visibility("hidden")))
@interface WDProfileSharingTableViewController : HKTableViewController

{
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    HKCharacteristicType *_characteristicType;
    NSDictionary *_characteristicAuthorizationRecordsBySource;
    WDDisplayTypeDescriptionTableFooterView *_footerView;
    HKDisplayType *_displayType;
    _Bool _isLoaded;
    HKSourceListDataSource *_sourceListDataSource;
    NSDictionary *_sourceToAuthRecord;
}

@property (retain, nonatomic) HKSourceListDataSource *sourceListDataSource;
@property (copy, nonatomic) NSDictionary *sourceToAuthRecord;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (void)_gatherDataAndRefreshUI;
- (void)_adjustFooterHeight;
- (void)_fetchAuthorizationRecordsBySourceForCharacteristic:(id)arg1;
- (id)_sourceForIndexPath:(id)arg1;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)initWithProfile:(id)arg1 characteristicType:(id)arg2;

@end
