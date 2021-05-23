/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKViewController.h>

@class HKActivitySummary, HKActivitySummaryQuery, HKDisplayCategory, HKNavigationController, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKStoreProductViewController, UITableView, WDAppSwooshTableViewCell, WDContextChartViewController, WDHealthDataCategoryVideoDataProvider, WDProfile;

__attribute__((visibility("hidden")))
@interface WDHealthDataCategoryViewController : HKViewController

{
    UITableView *_tableView;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    NSMutableDictionary *_dashboardChartItems;
    NSMutableDictionary *_dashboardUnitsInSections;
    NSDictionary *_displayTypesByTypeCodes;
    NSDictionary *_latestSummaries;
    NSMutableDictionary *_rowsForWDCategorySection;
    NSMutableArray *_categoryDetailSectionTypes;
    NSString *_categoryImportanceText;
    _Bool _firstTimeExperienceCompleted;
    _Bool _showingVideoCell;
    WDHealthDataCategoryVideoDataProvider *_videoDataProvider;
    HKActivitySummaryQuery *_activitySummaryQuery;
    HKActivitySummary *_activitySummary;
    NSDate *_latestActivitySummaryDate;
    SKStoreProductViewController *_storePageViewController;
    WDAppSwooshTableViewCell *_swooshCell;
    NSMutableDictionary *_interactiveChartControllers;
    NSArray *_displayTypes;
    WDProfile *_profile;
    HKDisplayCategory *_category;
    WDContextChartViewController *_contextChartViewController;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (retain, nonatomic) NSArray *displayTypes;
@property (nonatomic, readonly) WDProfile *profile;
@property (retain, nonatomic) HKDisplayCategory *category;
@property (retain, nonatomic) WDContextChartViewController *contextChartViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)activitiesForLevelLocators:(id)arg1 startAt:(unsigned long long)arg2;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)_categoryName;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_localeDidChange:(id)arg1;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (void)_significantTimeChange:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)_chartCell;
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4;
- (void)_updateActivityForViewDidAppear;
- (void)_displayAppWithStoreID:(id)arg1;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_addActivityForDisplayType:(id)arg1 newResponder:(id)arg2;
- (id)_handlePushDisplayTypeActivity:(id)arg1;
- (void)_setupFirstTimeExperience;
- (void)_setupDisplayTypesByTypeCodes;
- (void)_setupDefaultUnitSections;
- (void)_setupRowsInUse;
- (void)_setupObservers;
- (void)_loadStoreData:(id)arg1;
- (_Bool)_isActivityCategory;
- (void)_setupSummariesAnimated:(_Bool)arg1;
- (void)_setupActivitySummaryQueryWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldShowChartSection;
- (_Bool)_shouldShowFavoritesSection;
- (_Bool)_shouldShowTodaySection;
- (_Bool)_shouldShowThisWeekSection;
- (_Bool)_shouldShowThisMonthSection;
- (_Bool)_shouldShowThisYearSection;
- (_Bool)_shouldShowOlderSection;
- (_Bool)_shouldShowInfoSection;
- (_Bool)_shouldShowAppsSection;
- (_Bool)_shouldShowNoRecordedDataSection;
- (_Bool)_shouldShowHiddenSection;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_showAppsRowIfNecessary:(id)arg1;
- (id)_createSummariesFromDisplayTypes:(id)arg1;
- (void)_updateTableViewFromSummaries:(id)arg1 animated:(_Bool)arg2;
- (void)_setupDashboardChartItems;
- (unsigned long long)_categoryDetailSectionForTableViewSection:(long long)arg1;
- (unsigned long long)_categoryDetailSectionForTableViewIndexPath:(id)arg1;
- (id)_titleCellWithHeaderType:(long long)arg1;
- (id)_activityWidgetTodayCell;
- (id)_summaryDataCellWithChart:(_Bool)arg1;
- (id)_appSwooshCell;
- (id)_noRecordedDataCell;
- (id)_interactiveChartControllerForDisplayType:(id)arg1;
- (unsigned long long)_tableViewSectionForCategoryDetailSection:(unsigned long long)arg1;
- (id)_favoritedDisplayTypesSetForCurrentCategory;
- (id)_summaryDictionaryByTypeCodes:(id)arg1;
- (void)_filterSummariesIntoSections:(id)arg1 animated:(_Bool)arg2;
- (void)_updateLatestSummariesWithNewSummaries:(id)arg1;
- (id)_tableViewIndexPathsToDeleteFromLatestSummaries:(id)arg1;
- (id)_modelIndexPathsToAddFromLatestSummaries:(id)arg1;
- (id)_rowCountPerSectionForCategorySections:(id)arg1;
- (id)_tableViewSectionsFromCategoryDetailSections;
- (id)_tableViewIndexPathsFromModelIndexPaths:(id)arg1;
- (void)_deleteEmptySectionsWithOldTableViewSections:(id)arg1 oldCategorySectionRowCounts:(id)arg2 newSectionRowCounts:(id)arg3;
- (void)_insertEmptySectionsFromOldCategorySectionRowCounts:(id)arg1 newSectionRowCounts:(id)arg2;
- (_Bool)_isHeartCategory;
- (_Bool)_isSummaryTypeCodeInHiddenSection:(long long)arg1;
- (id)_promotedDisplayTypesForCurrentCategory;
- (id)_currentIndexPathForHKDataTypeCode:(long long)arg1;
- (_Bool)_isSummaryInHiddenSection:(id)arg1;
- (id)_reuseIdentifierForIndexPath:(id)arg1;
- (void)_configureCell:(id)arg1 atIndexPath:(id)arg2 forTableView:(id)arg3;
- (_Bool)_isVideoCellAtIndexPath:(id)arg1;
- (long long)_detailTimeScopeForCategorySection:(unsigned long long)arg1 displayType:(id)arg2;
- (id)_pushControllerForDisplayType:(id)arg1 displayDate:(id)arg2 animated:(_Bool)arg3;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)updateHeight:(double)arg1 forCell:(id)arg2;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(struct NSDictionary *)arg2;
- (long long)_displayTimeScopeForCategorySection:(unsigned long long)arg1;
- (void)_showChartRowIfNecessary;

@end
