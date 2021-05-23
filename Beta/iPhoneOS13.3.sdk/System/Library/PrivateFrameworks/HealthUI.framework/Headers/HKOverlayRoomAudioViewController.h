/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKOverlayRoomViewController.h>

@class HKAudioExposureDevicesDataSource, NSMutableArray, NSNumber, NSString;

@interface HKOverlayRoomAudioViewController : HKOverlayRoomViewController

{
    NSNumber *_preferredOverlayIndex;
    NSString *_quantityTypeIdentifier;
    NSString *_secondaryIdentifier;
    NSMutableArray *_contextDelegates;
    HKAudioExposureDevicesDataSource *_audioExposureDevicesDataSource;
}

@property (nonatomic) NSString *quantityTypeIdentifier;
@property (copy, nonatomic, readonly) NSString *secondaryIdentifier;
@property (retain, nonatomic) NSMutableArray *contextDelegates;
@property (retain, nonatomic) HKAudioExposureDevicesDataSource *audioExposureDevicesDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)contextSectionsForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)initialSelectedContextForMode:(long long)arg1;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (void)_setupAudioExposureDataSourceIfNeeded;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 secondaryIdentifier:(id)arg5 audioExposureDeviceDataSource:(id)arg6;
- (void)_registerForAudioExposureDeviceUpdates;
- (_Bool)_isEnvironmentalAudioExposureRoom;
- (id)_buildAudioAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 averageOverVisibleRange:(_Bool)arg4;
- (long long)_initialPillForIdentifier:(id)arg1;
- (id)_makeHeadphoneDeviceFiltersUsingContextCreator:(CDUnknownBlockType)arg1;
- (id)_headphonePredicateForDevices:(id)arg1 withName:(id)arg2;
- (void)_reloadAudioExposureDevices;
- (_Bool)_isAudioExposureDevicesSupported;
- (CDUnknownBlockType)_userInfoCreationBlockForLEQ;
- (CDUnknownBlockType)_buildAverageDataSourceTitleFromTimeScope;
- (CDUnknownBlockType)_buildGranularAverageDataSourceTitleFromTimeScope;
- (void)audioExposureDataSourceIsReady:(id)arg1;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 secondaryIdentifier:(id)arg5;

@end
