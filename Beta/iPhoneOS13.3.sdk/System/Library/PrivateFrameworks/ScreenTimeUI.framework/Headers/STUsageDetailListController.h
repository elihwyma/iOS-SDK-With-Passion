/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class NSLayoutConstraint, STAllowanceProgressGroupSpecifierProvider, STDatePickerBar, STDevicePickupsUsageGroupSpecifierProvider, STMostUsedGroupSpecifierProvider, STNoUsageDataView, STNotificationsUsageGroupSpecifierProvider, STScreenTimeUsageGroupSpecifierProvider, STSegmentedControlGroupSpecifierProvider, STTestGroupSpecifierProvider;

__attribute__((visibility("hidden")))
@interface STUsageDetailListController : STPINListViewController

{
    STTestGroupSpecifierProvider *_testProvider;
    STSegmentedControlGroupSpecifierProvider *_segmentedControlProvider;
    STScreenTimeUsageGroupSpecifierProvider *_screenTimeProvider;
    STAllowanceProgressGroupSpecifierProvider *_allowancesProvider;
    STMostUsedGroupSpecifierProvider *_mostUsedProvider;
    STNotificationsUsageGroupSpecifierProvider *_notificationsProvider;
    STDevicePickupsUsageGroupSpecifierProvider *_pickupsProvider;
    STNoUsageDataView *_noUsageDataView;
    STDatePickerBar *_datePickerBar;
    NSLayoutConstraint *_datePickerTopConstraint;
    NSLayoutConstraint *_datePickerBottomConstraint;
}

@property (retain) STTestGroupSpecifierProvider *testProvider;
@property (retain) STSegmentedControlGroupSpecifierProvider *segmentedControlProvider;
@property (retain) STScreenTimeUsageGroupSpecifierProvider *screenTimeProvider;
@property (retain) STAllowanceProgressGroupSpecifierProvider *allowancesProvider;
@property (retain) STMostUsedGroupSpecifierProvider *mostUsedProvider;
@property (retain) STNotificationsUsageGroupSpecifierProvider *notificationsProvider;
@property (retain) STDevicePickupsUsageGroupSpecifierProvider *pickupsProvider;
@property (retain) STNoUsageDataView *noUsageDataView;
@property (retain) STDatePickerBar *datePickerBar;
@property (getter=isDatePickerHidden) _Bool datePickerHidden;
@property (retain) NSLayoutConstraint *datePickerTopConstraint;
@property (retain) NSLayoutConstraint *datePickerBottomConstraint;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setCoordinator:(id)arg1;
- (void)_selectedUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_leftDatePickerBarButtonTapped:(id)arg1;
- (void)_rightDatePickerBarButtonTapped:(id)arg1;
- (void)_hasUsageDataDidChange:(_Bool)arg1;
- (void)_devicesDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_showDeviceSelectionAlertController:(id)arg1;
- (void)_setSelectedUsageReportType:(unsigned long long)arg1;
- (void)_setSelectedDeviceIdentifier:(id)arg1;

@end
