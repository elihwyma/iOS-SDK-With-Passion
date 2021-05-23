/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMKeyValueCollection, NSArray, NSDate, NSDictionary, NSString;

@protocol IMDCKSyncStateDelegate;

@interface IMDCKSyncState : NSObject

{
    IMKeyValueCollection *_storage;
    id <IMDCKSyncStateDelegate> _delegate;
}

@property (nonatomic) unsigned long long syncControllerSyncState;
@property (nonatomic) long long syncControllerRecordType;
@property (nonatomic, getter=isSyncing) _Bool syncing;
@property (nonatomic, getter=isStartingPeriodicSyncSetByCloudKitHooks) _Bool startingPeriodicSyncSetByCloudKitHooks;
@property (nonatomic, getter=isStartingInitialSyncSetByCloudKitHooks) _Bool startingInitialSyncSetByCloudKitHooks;
@property (nonatomic, readonly) IMKeyValueCollection *keyValueCollection;
@property (weak, nonatomic) id <IMDCKSyncStateDelegate> delegate;
@property (nonatomic, getter=isFeatureEnabled) _Bool featureEnabled;
@property (nonatomic) _Bool createdChatZone;
@property (nonatomic) _Bool deletedZones;
@property (nonatomic, getter=isEligibleForTruthZone) _Bool eligibleForTruthZone;
@property (nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled;
@property (nonatomic, getter=isRemovedFromBackup) _Bool removedFromBackup;
@property (nonatomic, getter=isInExitState) _Bool inExitState;
@property (nonatomic, getter=isSyncingPaused) _Bool syncingPaused;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic, getter=isDisablingDevices) _Bool disablingDevices;
@property (nonatomic, getter=isStartingEnabledSettingChange) _Bool startingEnabledSettingChange;
@property (copy, nonatomic) NSDictionary *analyticSyncDatesDictionary;
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (nonatomic) long long accountStatus;
@property (nonatomic, readonly) NSArray *syncErrors;
@property (nonatomic) long long syncControllerSyncType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logHandle;
+ (void)removeBuildObjectsFromDict:(id)arg1;

- (id)init;
- (id)serializedRepresentation;
- (id)logHandle;
- (void)keyValueCollection:(id)arg1 willUpdateValues:(id)arg2;
- (void)keyValueCollection:(id)arg1 didUpdateValues:(id)arg2;
- (void)clearLocalCloudKitSyncState;
- (id)initWithKeyValueCollection:(id)arg1;
- (void)setErrorToKeyRollingError;
- (void)broadcastSyncState;
- (void)_startBatchChange;
- (void)_finishBatchChange;
- (void)clearSyncErrors;
- (void)setErrorToAccountNeedsRepair;
- (void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)arg1;
- (id)getAnalyticSyncDatesObjectForKey:(id)arg1;
- (id)syncReportDictionary;
- (void)setAnalyticSyncDatesDictionaryObject:(id)arg1 forKey:(id)arg2 shouldOverrideIfExists:(_Bool)arg3;
- (void)addSyncError:(id)arg1;
- (id)syncReportDictionaryForAttempt:(unsigned long long)arg1 withSuccess:(_Bool)arg2;
- (void)_removeObjectForKey:(id)arg1 forDictionary:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2 forDictionary:(id)arg3 shouldSetBuild:(_Bool)arg4;
- (id)_describeErrors:(id)arg1;
- (_Bool)_shouldReportNewUserIfCreatedChatZones:(_Bool)arg1 deletedZones:(_Bool)arg2;
- (id)syncUserType;
- (id)describeErrors;
- (void)_setStartingSync;
- (void)setSyncControllerSyncState:(unsigned long long)arg1 withRecordType:(long long)arg2;
- (void)setSyncingFinished;
- (void)setStartingPeriodicSyncWithRecordType:(long long)arg1;
- (void)setStartingInitialSyncWithRecordType:(long long)arg1;

@end
