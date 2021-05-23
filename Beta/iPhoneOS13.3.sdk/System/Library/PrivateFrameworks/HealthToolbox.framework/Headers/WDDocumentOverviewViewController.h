/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, NSMutableArray, NSString, UIFont, WDAppSwooshTableViewCell, WDDocumentListDataProvider, WDProfile;

__attribute__((visibility("hidden")))
@interface WDDocumentOverviewViewController : HKTableViewController

{
    HKDisplayType *_displayType;
    WDProfile *_profile;
    WDDocumentListDataProvider *_dataProvider;
    NSMutableArray *_sectionTypes;
    NSMutableArray *_reportRowTypes;
    WDAppSwooshTableViewCell *_recommendedAppsCell;
    long long _totalReportCount;
    UIFont *_bodyFont;
}

@property (nonatomic, readonly) HKDisplayType *displayType;
@property (nonatomic, readonly) WDProfile *profile;
@property (nonatomic, readonly) WDDocumentListDataProvider *dataProvider;
@property (retain, nonatomic) NSMutableArray *sectionTypes;
@property (retain, nonatomic) NSMutableArray *reportRowTypes;
@property (retain, nonatomic) WDAppSwooshTableViewCell *recommendedAppsCell;
@property (nonatomic) long long totalReportCount;
@property (retain, nonatomic) UIFont *bodyFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4;
- (void)_updateActivityForViewDidAppear;
- (_Bool)_shouldShowAppsRow;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (void)_reloadAllData;
- (void)_pushShowAllViewController;
- (void)_startRecommendedAppsEngine;
- (void)_installSections;
- (void)_recomputeTotalReportCount;
- (void)_handleAppSectionVisibility;
- (void)_mobileAssetDataNotification:(id)arg1;
- (void)_storeDataNotification:(id)arg1;
- (id)_reportItemCellForTableView:(id)arg1 row:(long long)arg2;
- (id)_reportShowAllCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_reportAccessCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (void)_pushReportDetailViewControllerForIndexPath:(id)arg1;
- (void)_pushAccessViewController;
- (id)_reportSectionCellForTableView:(id)arg1 forIndexPath:(id)arg2;
- (id)_appSectionCellForTableView:(id)arg1 row:(long long)arg2;
- (id)_descriptionSectionCellForTableView:(id)arg1 row:(long long)arg2;
- (void)_selectReportRowForIndexPath:(id)arg1;
- (double)_reportSectionRowHeight:(long long)arg1;
- (double)_reportSectionEstimatedRowHeight:(long long)arg1;

@end
