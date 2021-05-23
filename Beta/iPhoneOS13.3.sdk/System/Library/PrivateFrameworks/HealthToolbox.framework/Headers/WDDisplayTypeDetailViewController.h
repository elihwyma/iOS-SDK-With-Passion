/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayCategory, HKDisplayType, HKInteractiveChartViewController, HKNavigationController, HKTimeScopeControl, NSDate, NSMutableArray, NSSet, NSString, UIFont, WDProfile, _UINavigationControllerPalette;

__attribute__((visibility("hidden")))
@interface WDDisplayTypeDetailViewController : HKTableViewController

{
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    _UINavigationControllerPalette *_palette;
    HKTimeScopeControl *_timeSpanControl;
    NSSet *_availableUnits;
    _Bool _inLandscapeMode;
    WDProfile *_profile;
    NSMutableArray *_sections;
    UIFont *_bodyFont;
    HKInteractiveChartViewController *_interactiveChartViewController;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (nonatomic, readonly) HKInteractiveChartViewController *interactiveChartViewController;
@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) NSMutableArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_localeDidChange:(id)arg1;
- (void)_didBecomeActive:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)initWithDisplayType:(id)arg1 displayCategory:(id)arg2 profile:(id)arg3 displayDate:(id)arg4;
- (void)sourceOrderUpdatedWithOrder:(id)arg1 dataType:(id)arg2;
- (void)_updateActivityForViewDidAppear;
- (_Bool)_shouldShowAppsRow;
- (void)_displayAppWithStoreID:(id)arg1;
- (void)appsCell:(id)arg1 showStorePageWithStoreID:(id)arg2;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)_setupObservers;
- (void)_loadStoreData:(id)arg1;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_showAppsRowIfNecessary:(id)arg1;
- (_Bool)_canSelectUnitsRow;
- (id)_selectedUnitCellText;
- (long long)findAppsSectionLocation;
- (void)updateAppsSectionIfNecessary;
- (void)_timeFrameForChartsChanged:(id)arg1;
- (id)_showAddDataVC:(id)arg1;
- (void)calculateSections;
- (void)addSectionWithItems:(id)arg1;
- (void)addSectionWithItem:(id)arg1;
- (_Bool)_shouldShowUnitsRow;
- (void)_detachPaletteIfNecessary;
- (void)_configureCell:(id)arg1 forTableView:(id)arg2;
- (id)_showAllDataVC:(id)arg1;
- (void)_changeTimeScope:(long long)arg1;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (void)_attachPaletteIfNecessary;

@end
