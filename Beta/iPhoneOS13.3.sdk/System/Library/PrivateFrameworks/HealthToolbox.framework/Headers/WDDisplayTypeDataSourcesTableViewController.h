/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayCategory, HKDisplayType, HKHealthStore, HKSourceListDataSource, HKTitledIconHeaderView, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, WDProfile, WDSourceOrderController;

__attribute__((visibility("hidden")))
@interface WDDisplayTypeDataSourcesTableViewController : HKTableViewController

{
    _Bool _isLoaded;
    HKDisplayCategory *_displayCategory;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKHealthStore *_healthStore;
    WDSourceOrderController *_sourceOrderController;
    NSMutableSet *_dataSources;
    NSArray *_preEditSourcesOrdered;
    NSArray *_readerAppSources;
    NSArray *_readerResearchStudySources;
    NSMutableDictionary *_authorizationRecordsBySource;
    HKTitledIconHeaderView *_headerView;
    NSMutableSet *_sourcesPendingToggleOff;
    NSMutableSet *_sourcesPendingToggleOn;
    _Bool _shouldInsetSectionContentForDataSourceDataList;
    HKSourceListDataSource *_sourceListDataSource;
    NSArray *_loadedOrderedDataSources;
    NSMutableArray *_orderedDataSources;
    NSSet *_loadedAllDataSources;
    NSDictionary *_loadedAuthorizationRecordsBySource;
}

@property (retain, nonatomic) HKSourceListDataSource *sourceListDataSource;
@property (copy, nonatomic) NSArray *loadedOrderedDataSources;
@property (retain, nonatomic) NSMutableArray *orderedDataSources;
@property (copy, nonatomic) NSSet *loadedAllDataSources;
@property (copy, nonatomic) NSDictionary *loadedAuthorizationRecordsBySource;
@property (nonatomic) _Bool shouldInsetSectionContentForDataSourceDataList;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)sourceListDataSourceDidUpdate:(id)arg1;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 sourceOrderController:(id)arg3 profile:(id)arg4;
- (void)_loadDataSource;
- (void)_addDataSources:(id)arg1;
- (void)_sortDataSources;
- (_Bool)_canEditDataSources;
- (id)_createIndexPathsWithSection:(long long)arg1 startingRow:(long long)arg2 numIndices:(long long)arg3;
- (void)_fetchOrderedSourcesForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchDataSourcesForSampleType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchAuthorizationRecordsBySourceForType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_sourceIsEnabled:(id)arg1;
- (void)_updateOrderedSources;
- (id)_readerSourceCellForTableView:(id)arg1 sourceArray:(id)arg2 row:(unsigned long long)arg3;
- (id)_dataSourceCellForTableView:(id)arg1 row:(unsigned long long)arg2;
- (id)_noneTableViewCell;
- (void)_willEnableSource:(id)arg1;
- (void)_willDisableSource:(id)arg1;
- (void)_sourceIsEnabledDidChange:(id)arg1;
- (void)_gatherDataFromDataSource:(id)arg1;
- (void)_refreshUI;

@end
