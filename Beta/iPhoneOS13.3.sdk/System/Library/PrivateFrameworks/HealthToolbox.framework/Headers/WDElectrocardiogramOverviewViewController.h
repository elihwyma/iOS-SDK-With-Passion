/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, HKHeartRhythmAvailability, HROnboardingManager, NSString, UITapGestureRecognizer, WDElectrocardiogramFilterDataProvider, WDElectrocardiogramListDataProvider, WDProfile;

@protocol HKDataMetadataSectionProtocol;

@interface WDElectrocardiogramOverviewViewController : HKTableViewController

{
    _Bool _previousElectrocardiogramDisabledCacheValue;
    long long _placeholderCellCount;
    HKDisplayType *_displayType;
    WDProfile *_profile;
    HROnboardingManager *_onboardingManager;
    WDElectrocardiogramListDataProvider *_dataProvider;
    WDElectrocardiogramFilterDataProvider *_filterDataProvider;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
    id <HKDataMetadataSectionProtocol> _educationSection;
    UITapGestureRecognizer *_tripleTapToSettingsRecognizer;
}

@property (retain, nonatomic) HKDisplayType *displayType;
@property (weak, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HROnboardingManager *onboardingManager;
@property (retain, nonatomic) WDElectrocardiogramListDataProvider *dataProvider;
@property (retain, nonatomic) WDElectrocardiogramFilterDataProvider *filterDataProvider;
@property (retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (retain, nonatomic) id <HKDataMetadataSectionProtocol> educationSection;
@property (retain, nonatomic) UITapGestureRecognizer *tripleTapToSettingsRecognizer;
@property (nonatomic) _Bool previousElectrocardiogramDisabledCacheValue;
@property (nonatomic) long long placeholderCellCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (struct WDElectrocardiogramOverviewSectionInfo)sectionInfo;
- (void)heartRhythmAvailabilityDidUpdate;
- (void)showInternalSettings;
- (unsigned long long)availabilityState;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (void)electrocardiogramFilterDataProvider:(id)arg1 didUpdateCount:(long long)arg2 type:(long long)arg3;
- (_Bool)_isDisplayTypeFavorited;
- (_Bool)_isPrimaryProfile;
- (void)_reloadTableViewAndScrollToTop;
- (id)_cellForFavorites;
- (id)_cellForDataSourcesAndAccess;
- (id)_sectionHeaderViewWithTitle:(id)arg1;
- (void)isFavorited:(_Bool)arg1;
- (void)_startOnboardingForFirstTime:(_Bool)arg1;
- (void)didSelectReenableFeatureForProductName:(id)arg1;
- (void)didTapOnElectrocardiogram:(id)arg1;
- (void)didTapOnAtrialFibrillationNotificationLearnMore;
- (void)didCompleteOnboarding;
- (void)didDismissOnboarding;
- (void)beginOnboardingForOnboardingSetupView:(id)arg1;
- (void)_reloadElectrocardiogramSetupTableHeaderView;
- (struct WDElectrocardiogramOverviewUserConfigurationRowInfo)userConfigurationRowInfo;
- (id)_cellForSampleAtIndex:(long long)arg1 section:(long long)arg2;
- (long long)_filterTypeForDataSectionRow:(long long)arg1;
- (id)_showAllResultsCellForType:(long long)arg1;
- (id)_cellWithDisclosureIndicatorAndText:(id)arg1 value:(id)arg2;
- (id)_cellForDescription;
- (id)_cellForRegulatoryPane;
- (_Bool)shouldShowRecordingDisabledHeader;
- (id)_recordingDisabledHeaderView;
- (_Bool)_shouldShowElectrocardiogramSetupTableHeaderView;
- (id)_electrocardiogramSetupContainerView;
- (id)_dataListViewControllerWithFilterType:(long long)arg1;
- (void)_showDataSourcesAndAccessController;

@end
