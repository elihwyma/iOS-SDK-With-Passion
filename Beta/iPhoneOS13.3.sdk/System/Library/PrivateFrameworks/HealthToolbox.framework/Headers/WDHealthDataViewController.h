/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKBadge, HKDisplayCategory, NSArray, NSDate, NSMutableArray, NSString, UIColor, UIFont, UIImage, UISearchBar, WDHealthDataTopLevelCategoryTableViewCell, WDProfile;

__attribute__((visibility("hidden")))
@interface WDHealthDataViewController : HKTableViewController

{
    WDProfile *_profile;
    NSString *_searchString;
    NSMutableArray *_searchResults;
    UIImage *_allIcon;
    UISearchBar *_searchBar;
    UIColor *_healthKeyColor;
    WDHealthDataTopLevelCategoryTableViewCell *_topLevelCategoryCell;
    HKDisplayCategory *_displayedCategory;
    NSDate *_initialStartDate;
    NSArray *_prearrangedTopLevelDataCategories;
    NSArray *_sortedSecondaryDataCategories;
    UIFont *_bodyFont;
    HKBadge *_healthRecordsBadge;
}

@property (copy, nonatomic) NSArray *prearrangedTopLevelDataCategories;
@property (copy, nonatomic) NSArray *sortedSecondaryDataCategories;
@property (retain, nonatomic) UIFont *bodyFont;
@property (copy, nonatomic) HKBadge *healthRecordsBadge;
@property (nonatomic, readonly, getter=shouldShowSearchResults) _Bool showSearchResults;
@property (nonatomic, readonly) HKDisplayCategory *displayedCategory;
@property (retain, nonatomic) NSDate *initialStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)activitiesForLevelLocators:(id)arg1 startAt:(unsigned long long)arg2;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)willDismissSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)_localeDidChange:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)uniqueUserActivityType;
- (void)_updateActivityForViewDidAppear;
- (id)_createPrearrangedTopLevelDataCategories;
- (id)_createSortedSecondaryDataCategories;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)setupSearchResultsController;
- (void)_updateHealthRecordsBadge;
- (void)_registerForBadgesDidUpdateNotification;
- (id)_indexPathForCategory:(id)arg1;
- (id)_prearrangedTopLevelDisplayCategoryIdentifiers;
- (id)_categoryTitleForDisplayCategory:(id)arg1;
- (id)tableView:(id)arg1 searchCellForRowAtIndexPath:(id)arg2;
- (id)_badgeForDisplayCategory:(id)arg1;
- (id)listIconForDisplayCategory:(id)arg1;
- (id)_pushDisplayTypeDetailViewControllerForDisplayType:(id)arg1 animated:(_Bool)arg2;
- (void)_addActivityForDisplayType:(id)arg1 newResponder:(id)arg2;
- (void)_postAWDMetricForTappingIntoHealthRecords;
- (id)_pushDisplayCategoryViewControllerForDisplayCategory:(id)arg1 animated:(_Bool)arg2;
- (void)_presentProfileViewController;
- (id)_viewControllerForCategory:(id)arg1 displayTypes:(id)arg2 title:(id)arg3;
- (id)_pushDisplayCategoryViewControllerWithDisplayTypes:(id)arg1 title:(id)arg2 showListIcon:(_Bool)arg3 category:(id)arg4 animated:(_Bool)arg5;
- (void)_addActivityForDisplayCategory:(id)arg1 newResponder:(id)arg2;
- (_Bool)_shouldShowHealthRecords;
- (_Bool)_filterDisplayTypeForSearching:(id)arg1;
- (id)_handlePushCategoryActivity:(id)arg1;
- (id)_handlePushDisplayTypeActivity:(id)arg1;
- (void)topLevelCategoryCell:(id)arg1 showHealthDataCategory:(id)arg2;
- (void)didChangeToAnotherTab;
- (void)testScrollPerformanceWithTestName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 options:(id)arg4;

@end
