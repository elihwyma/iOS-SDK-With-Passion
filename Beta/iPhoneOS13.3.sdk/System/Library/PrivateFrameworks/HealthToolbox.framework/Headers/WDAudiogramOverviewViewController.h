/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKAudiogramChartViewController, HKDisplayType, NSArray, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDAudiogramOverviewViewController : HKTableViewController

{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HKAudiogramChartViewController *_audiogramChartViewController;
    NSArray *_sectionToRows;
}

@property (nonatomic, readonly) HKDisplayType *displayType;
@property (nonatomic, readonly) WDProfile *profile;
@property (nonatomic, readonly) HKAudiogramChartViewController *audiogramChartViewController;
@property (retain, nonatomic) NSArray *sectionToRows;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)_descriptionCell;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (void)_rebuildSections;
- (void)_queryForAudiogramChartSamples;
- (void)_updateActivityForViewDidAppear;
- (_Bool)_shouldShowAppsRow;
- (long long)_rowTypeForIndexPath:(id)arg1;
- (id)_audiogramChartCell;
- (id)_addToFavoritesCell;
- (id)_showAllDataCell;
- (id)_sourcesAndAccessCell;
- (id)_recommendedAppsCell;
- (_Bool)_sectionNumber:(long long)arg1 containsRowType:(long long)arg2;
- (void)_pushShowAllDataViewController;
- (void)_pushSourcesAndAccessViewController;
- (void)_displayAppWithStoreID:(id)arg1;
- (_Bool)_isDisplayTypeFavorited;
- (void)_updateAudiogramSamples:(id)arg1 error:(id)arg2;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;

@end
