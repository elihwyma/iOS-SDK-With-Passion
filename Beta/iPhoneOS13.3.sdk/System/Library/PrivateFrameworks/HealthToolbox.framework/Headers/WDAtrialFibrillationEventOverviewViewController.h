/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, HKHeartRhythmAvailability, HKKeyValueDomain, HROnboardingManager, NSArray, NSDate, NSString, UITapGestureRecognizer, WDProfile;

@protocol HKDataMetadataSectionProtocol, WDDataListViewControllerDataProvider;

@interface WDAtrialFibrillationEventOverviewViewController : HKTableViewController

{
    _Bool _previousAtrialFibrillationDetectionDisabledCacheValue;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HROnboardingManager *_onboardingManager;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
    HKKeyValueDomain *_keyValueDomain;
    long long _detectionState;
    UITapGestureRecognizer *_tripleTapToSettingsRecognizer;
    NSArray *_sectionsToDisplay;
    NSArray *_userConfigurationRowsToDisplay;
    id <HKDataMetadataSectionProtocol> _metaDataSection;
    id <WDDataListViewControllerDataProvider> _dataProvider;
    NSDate *_latestAnalyzedSampleDate;
    long long _visibleSampleCount;
    long long _totalSampleCount;
}

@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HROnboardingManager *onboardingManager;
@property (retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (retain, nonatomic) HKKeyValueDomain *keyValueDomain;
@property (nonatomic) long long detectionState;
@property (retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer;
@property (nonatomic) _Bool previousAtrialFibrillationDetectionDisabledCacheValue;
@property (retain, nonatomic) NSArray *sectionsToDisplay;
@property (retain, nonatomic) NSArray *userConfigurationRowsToDisplay;
@property (retain, nonatomic) id <HKDataMetadataSectionProtocol> metaDataSection;
@property (retain, nonatomic) id <WDDataListViewControllerDataProvider> dataProvider;
@property (retain, nonatomic) NSDate *latestAnalyzedSampleDate;
@property (nonatomic) long long visibleSampleCount;
@property (nonatomic) long long totalSampleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (void)heartRhythmAvailabilityDidUpdate;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (_Bool)_isDisplayTypeFavorited;
- (void)_updateDetectionState;
- (void)_appDidEnterForeground;
- (void)_showInternalSettingsViewController;
- (void)_reloadAllData;
- (_Bool)_isPrimaryProfile;
- (void)_reloadAtrialFibrillationSetupTableHeaderView;
- (void)_reloadTableViewAndScrollToTop;
- (void)_recomputeTotalSampleCount;
- (void)_getLatestAnalyzedSampleDate;
- (id)_cellForAFibEventInTable:(id)arg1 atIndexPath:(id)arg2;
- (id)_cellForShowAll;
- (id)_cellForFavorites;
- (id)_cellForDataSourcesAndAccess;
- (id)_cellForRegulatory;
- (id)_cellForAFibEducationalMaterialInTable:(id)arg1 atIndex:(long long)arg2;
- (id)_cellForDataTypeDescription;
- (id)_atrialFibrillationDetectionDisabledHeaderView;
- (id)_sectionHeaderViewWithTitle:(id)arg1;
- (id)_pushShowAllViewController;
- (void)isFavorited:(_Bool)arg1;
- (id)_pushDataSourcesAndAccessController;
- (_Bool)_shouldShowAtrialFibrillationSetupTableHeaderView;
- (id)_atrialFibrillationSetupContainerView;
- (void)_startOnboardingForFirstTime:(_Bool)arg1;
- (void)didSelectReenableFeatureForProductName:(id)arg1;
- (void)didEnableAtrialFibrillationNotifications;
- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)beginOnboardingForOnboardingSetupView:(id)arg1;

@end
