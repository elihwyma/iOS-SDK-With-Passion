/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKDisplayType, HKDisplayTypeSectionedContextView, HKInteractiveChartOverlayViewController, HKOverlayContextLocation, HKOverlayRoomApplicationItems, HKValueRange, NSArray, NSDate, NSDateInterval, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface HKOverlayRoomViewController : HKViewController

{
    _Bool _shouldSelectInitialOverlay;
    _Bool _userHasOverriddenPreferredOverlay;
    HKOverlayRoomApplicationItems *_applicationItems;
    NSDate *_displayDate;
    long long _controllerMode;
    HKInteractiveChartOverlayViewController *_chartController;
    HKValueRange *_initialVisibleDateRange;
    long long _currentChartTimeScope;
    NSDateInterval *_currentChartDateInterval;
    HKOverlayContextLocation *_currentSelectedContextLocation;
    HKDisplayTypeSectionedContextView *_sectionedContextView;
    HKDisplayType *_primaryDisplayType;
    NSArray *_overlayContextSections;
    HKOverlayContextLocation *_initialSelectedContextLocation;
    NSObject<OS_dispatch_queue> *_contextUpdateQueue;
}

@property (retain, nonatomic) HKOverlayRoomApplicationItems *applicationItems;
@property (nonatomic) long long currentChartTimeScope;
@property (copy, nonatomic) NSDateInterval *currentChartDateInterval;
@property (retain, nonatomic) HKOverlayContextLocation *currentSelectedContextLocation;
@property (copy, nonatomic) NSDate *displayDate;
@property (nonatomic) long long controllerMode;
@property (retain, nonatomic) HKInteractiveChartOverlayViewController *chartController;
@property (retain, nonatomic) HKDisplayTypeSectionedContextView *sectionedContextView;
@property (nonatomic) _Bool userHasOverriddenPreferredOverlay;
@property (retain, nonatomic) HKDisplayType *primaryDisplayType;
@property (retain, nonatomic) NSArray *overlayContextSections;
@property (retain, nonatomic) HKOverlayContextLocation *initialSelectedContextLocation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextUpdateQueue;
@property (nonatomic) _Bool shouldSelectInitialOverlay;
@property (retain, nonatomic) HKValueRange *initialVisibleDateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (id)_currentIndexPath;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (_Bool)_usePreferredOverlayAndAllFiltersButton;
- (id)createChartOverlayViewController;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)didUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (void)newDataArrivedWithValueRange:(id)arg1;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(struct NSDictionary *)arg2;
- (void)fetchContextItemsIfNeededWithDateInterval:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setupPrimaryDisplayType;
- (void)_setupInterface;
- (void)_setupOverlayContextItems;
- (void)_selectPreferredItem;
- (void)_updateChartForOverlaySelection:(id)arg1 previousSelection:(id)arg2;
- (id)_makeSeparatorView;
- (id)_contextViewBackgroundColor;
- (void)_layoutNoVerticalExpansion:(id)arg1;
- (void)_showAllFilters:(id)arg1;
- (void)_pinView:(id)arg1 toSafeAreaOf:(id)arg2;
- (void)_refreshContextItemsAndUpdateChart:(_Bool)arg1;
- (id)_findNavigationController;
- (id)_currentChartEffectiveVisibleRange;
- (long long)_contextItemCount;
- (void)_updateContextTiles;
- (void)_selectContextItemAtLocation:(id)arg1 animated:(_Bool)arg2;
- (void)_refreshUpdatedItemsWithChartUpdate:(_Bool)arg1 invalidateChartItems:(_Bool)arg2;
- (_Bool)_shouldUpdateContextItemsForChanges:(struct NSDictionary *)arg1;
- (void)_invalidateContextItems;
- (void)contextView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)contextView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)reloadOverlayContextItems;

@end
