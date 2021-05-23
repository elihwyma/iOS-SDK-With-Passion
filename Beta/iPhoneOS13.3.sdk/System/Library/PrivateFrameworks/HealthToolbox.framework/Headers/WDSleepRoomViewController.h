/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayCategory, HKDisplayType, HKDisplayTypeContextTableViewCell, HKSleepChartViewController, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString, WDProfile, WDSleepRoomDataSource, WDSleepRoomViewControllerState;

__attribute__((visibility("hidden")))
@interface WDSleepRoomViewController : HKTableViewController

{
    WDProfile *_profile;
    HKDisplayType *_displayType;
    NSArray *_tableSections;
    HKSleepChartViewController *_interactiveChartViewController;
    WDSleepRoomDataSource *_sleepRoomDataSource;
    NSMutableDictionary *_rowsForWDHealthRoomSection;
    NSMutableArray *_sectionTypes;
    long long _currentChartTimeScope;
    HKDisplayTypeContextTableViewCell *_contextCell;
    HKDisplayCategory *_category;
    NSString *_categoryImportanceText;
    unsigned long long _selectedContextIndex;
    NSDate *_displayDate;
    WDSleepRoomViewControllerState *_state;
}

@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) NSArray *tableSections;
@property (retain, nonatomic) HKSleepChartViewController *interactiveChartViewController;
@property (retain, nonatomic) WDSleepRoomDataSource *sleepRoomDataSource;
@property (retain, nonatomic) NSMutableDictionary *rowsForWDHealthRoomSection;
@property (retain, nonatomic) NSMutableArray *sectionTypes;
@property (nonatomic) long long currentChartTimeScope;
@property (retain, nonatomic) HKDisplayTypeContextTableViewCell *contextCell;
@property (retain, nonatomic) HKDisplayCategory *category;
@property (retain, nonatomic) NSString *categoryImportanceText;
@property (nonatomic) unsigned long long selectedContextIndex;
@property (retain, nonatomic) NSDate *displayDate;
@property (retain, nonatomic) WDSleepRoomViewControllerState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_cellForRowAtIndexPath:(id)arg1;
- (id)_descriptionCell;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)_chartCell;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 displayDate:(id)arg3 title:(id)arg4 category:(id)arg5;
- (void)_updateActivityForViewDidAppear;
- (unsigned long long)_rowTypeForIndexPath:(id)arg1;
- (_Bool)_isDisplayTypeFavorited;
- (void)_setupRowsInUse;
- (id)_titleCellWithHeaderType:(long long)arg1;
- (id)_reuseIdentifierForIndexPath:(id)arg1;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)newDataArrivedWithValueRange:(id)arg1;
- (id)_showAddDataVC:(id)arg1;
- (void)_addActivityForAction:(long long)arg1 newResponder:(id)arg2;
- (void)setupInteractiveChartController;
- (unsigned long long)_sectionForTableViewSection:(long long)arg1;
- (unsigned long long)_sectionForTableViewIndexPath:(id)arg1;
- (id)_accessCell;
- (id)_showAllCell;
- (id)_contextCell;
- (id)_favoriteSwitchCell;
- (void)_configureCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)_showAllDataVC;
- (id)_sleepRoomDescription;
- (void)_updateContextualViews;
- (id)_indexPathForRowType:(unsigned long long)arg1;
- (void)contextCell:(id)arg1 didSelectItemAtIndex:(long long)arg2;

@end
