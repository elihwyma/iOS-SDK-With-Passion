/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, NSString, WDProfile;

@protocol WDDataListViewControllerDataProvider;

__attribute__((visibility("hidden")))
@interface WDHeartEventOverviewViewController : HKTableViewController

{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    id <WDDataListViewControllerDataProvider> _dataProvider;
    long long _visibleSampleCount;
    long long _totalSampleCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)_heartEventType;
- (void)_updateActivityForViewDidAppear;
- (_Bool)_isDisplayTypeFavorited;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (void)_reloadAllData;
- (void)_recomputeTotalSampleCount;
- (id)_cellForShowAll;
- (id)_cellForDataSourcesAndAccess;
- (id)_pushShowAllViewController;
- (id)_pushDataSourcesAndAccessController;
- (id)_cellForDescription;
- (_Bool)_doesActiveWatchSupportHeartRateMotionContexts;
- (id)_cellForSampleAtIndexPath:(id)arg1;
- (id)_cellForFavoriteSwitch;
- (void)_pushSampleDetailViewControllerForIndexPath:(id)arg1;

@end
