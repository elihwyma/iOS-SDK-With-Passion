/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMSharedUtilities/IMSingletonOverride.h>

@class IMCloudKitMockSyncState, NSArray, NSDate, NSDictionary;

@interface IMCloudKitHookTestSingleton : IMSingletonOverride

{
    IMCloudKitMockSyncState *_testState;
    _Bool _rampedIntoTruthZone;
    _Bool _isStartingSync;
    _Bool _isDisablingDevices;
    long long _isChangingEnabledState;
    unsigned long long _syncControllerSyncState;
    long long _syncType;
    NSDictionary *_syncStats;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isSyncing) _Bool syncing;
@property (retain, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) _Bool eligibleForTruthZone;
@property (nonatomic) _Bool rampedIntoTruthZone;
@property (nonatomic) long long isChangingEnabledState;
@property (nonatomic) _Bool isStartingSync;
@property (nonatomic) _Bool isDisablingDevices;
@property (retain, nonatomic) NSArray *IMCloudKitSyncErrors;
@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic) long long syncType;
@property (retain, nonatomic) NSDictionary *syncStats;
@property (retain, nonatomic) IMCloudKitMockSyncState *testState;

+ (id)logHandle;

- (id)init;
- (id)logHandle;
- (_Bool)isInExitState;
- (id)syncStateDictionary;
- (void)initiatePeriodicSync;
- (void)fetchSyncStateStatistics;
- (void)sendSyncChangedEvent;
- (void)setIsInExitState:(_Bool)arg1;
- (void)setControllerSyncState:(unsigned long long)arg1;
- (void)setControllerSyncType:(long long)arg1;

@end
