/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, WBSDeviceEligibilityInformation;

@protocol OS_dispatch_queue, WBSLogger;

@interface WBSCloudBookmarksMigrationReadinessDecider : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDate *_nonMigratableDeviceGracePeriodStartDate;
    NSDate *_dateOfCloudTabDevicesSyncRequest;
    NSDate *_dateOfLastCloudTabDevicesUpdate;
    NSDate *_dateOfDeviceEligibilityUpdate;
    NSMutableDictionary *_nonMigratableDeviceIdentifiersToLastModifiedDates;
    WBSDeviceEligibilityInformation *_deviceEligibilityInformation;
    NSArray *_eligibleOperatingSystemVersionRanges;
    _Bool _readyToMigrate;
    _Bool _lastCloudTabDevicesSyncRequestWasSuccessful;
    id <WBSLogger> _keyActionsLogger;
}

@property (nonatomic, readonly, getter=isReadyToMigrate) _Bool readyToMigrate;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSDate *earliestPossibleDateOfMigration;
@property (retain, nonatomic) id <WBSLogger> keyActionsLogger;
@property (copy, nonatomic) NSArray *eligibleOperatingSystemVersionRanges;

+ (id)_deviceEligibilityInformationFromDictionaryRepresentation:(id)arg1;

- (_Bool)_isInternalInstall;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (void)_logKeyAction:(id)arg1;
- (void)_logErrorAsKeyAction:(id)arg1;
- (void)updateWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)_nonMigratableDeviceGracePeriod;
- (_Bool)_shouldRequestCloudTabDevicesSync;
- (double)_minimumWaitForCloudTabDevicesUpdateAfterSync;
- (_Bool)_hasValidDeviceEligibilityInformation;
- (double)_deviceEligibilityUpdateInterval;
- (void)_logKeyActionForUpdateWithDevice:(id)arg1;
- (void)_logDevicesExcludedFromUpdateWithDevices:(id)arg1;
- (void)_reevaluateReadinessWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_fetchDeviceEligibilityInformationWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_pruneOldNonMigratableDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_synchronizeCloudTabDevicesWithCloudTabDeviceProvider:(id)arg1 deviceEligibilityFetcher:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_isDateInGracePeriod:(id)arg1;
- (_Bool)_shouldWaitForCloudTabDevicesUpdate;
- (long long)_timescale;
- (double)_maximumAgeForCloudTabDevicesUpdate;
- (_Bool)_isPastMinimumWaitAfterCloudTabDeviceSyncRequest;
- (_Bool)_isCloudTabDeviceDataPastExpiration;
- (void)_logPrunedDeviceIdentifiers:(id)arg1;

@end
