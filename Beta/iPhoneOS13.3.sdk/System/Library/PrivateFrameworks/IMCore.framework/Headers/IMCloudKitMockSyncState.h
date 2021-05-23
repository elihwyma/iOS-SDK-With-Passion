/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface IMCloudKitMockSyncState : NSObject

{
    _Bool _IMCloudKitSyncingEnabled;
    _Bool _IMCloudKitIsSyncing;
    _Bool _IMCloudKitSyncPaused;
    _Bool _IMCloudKitIsEligibleForTruthZone;
    _Bool _IMCloudKitIsInExitState;
    _Bool _IMCloudKitIsRemovedFromBackup;
    _Bool _IMCloudKitStartingPeriodicSync;
    _Bool _IMCloudKitStartingInitialSync;
    _Bool _IMCloudKitStartingDisableDevices;
    NSDate *_IMCloudKitSyncDate;
    long long _IMCloudKitStartingEnabledSettingChange;
    unsigned long long _IMCloudKitSyncControllerSyncState;
    long long _IMCloudKitSyncControllerSyncType;
    long long _IMCloudKitSyncControllerSyncRecordType;
    NSArray *_IMCloudKitSyncErrors;
}

@property _Bool IMCloudKitSyncingEnabled;
@property _Bool IMCloudKitIsSyncing;
@property _Bool IMCloudKitSyncPaused;
@property _Bool IMCloudKitIsEligibleForTruthZone;
@property _Bool IMCloudKitIsInExitState;
@property _Bool IMCloudKitIsRemovedFromBackup;
@property (retain) NSDate *IMCloudKitSyncDate;
@property _Bool IMCloudKitStartingPeriodicSync;
@property _Bool IMCloudKitStartingInitialSync;
@property long long IMCloudKitStartingEnabledSettingChange;
@property _Bool IMCloudKitStartingDisableDevices;
@property unsigned long long IMCloudKitSyncControllerSyncState;
@property long long IMCloudKitSyncControllerSyncType;
@property long long IMCloudKitSyncControllerSyncRecordType;
@property (retain) NSArray *IMCloudKitSyncErrors;

- (id)convertToDictionary;

@end
