/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class CKRecordZoneID, HDProfile, HDSharingPredicate, NSString, NSUUID;

@interface HDCloudSyncStore : NSObject <Swift>

{
    long long _syncProvenance;
    long long _syncEpoch;
    int _syncProtocolVersion;
    _Bool _canPush;
    _Bool _syncTombstonesOnly;
    NSUUID *_storeIdentifier;
    NSString *_ownerIdentifier;
    NSString *_containerIdentifier;
    HDProfile *_profile;
    NSString *_sharingIdentifier;
    HDSharingPredicate *_sharingPredicate;
    CKRecordZoneID *_zoneID;
}

@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic, readonly) NSUUID *storeIdentifier;
@property (copy, nonatomic, readonly) NSString *ownerIdentifier;
@property (copy, nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) _Bool canPush;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (copy, nonatomic, readonly) NSString *sharingIdentifier;
@property (nonatomic, readonly) HDSharingPredicate *sharingPredicate;
@property (nonatomic, readonly) _Bool syncTombstonesOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;

+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 error:(id *)arg6;
+ (void)samplesDeletedInProfile:(id)arg1 byUser:(_Bool)arg2;
+ (id)syncStoreForProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id *)arg8;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (long long)syncProvenance;
- (id)orderedSyncEntities;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (_Bool)replacePersistedAnchorMap:(id)arg1 error:(id *)arg2;
- (_Bool)resetReceivedSyncAnchorMapWithError:(id *)arg1;
- (long long)syncEpoch;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (_Bool)enforceSyncEntityOrdering;
- (_Bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (_Bool)shouldEnforceSequenceOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (id)persistedStateWithError:(id *)arg1;
- (_Bool)persistState:(id)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 syncCircleName:(id)arg3 ownerIdentifier:(id)arg4 containerIdentifier:(id)arg5 sharingIdentifier:(id)arg6 predicate:(id)arg7 error:(id *)arg8;
- (id)syncStoreForEpoch:(long long)arg1;
- (id)syncStoreForProtocolVersion:(int)arg1;
- (id)syncStoreForTombstoneSyncOnly:(_Bool)arg1;
- (id)receivedSyncAnchorMapWithError:(id *)arg1;
- (_Bool)clearAllSyncAnchorsWithError:(id *)arg1;
- (id)getPersistedAnchorMapWithError:(id *)arg1;
- (_Bool)replaceFrozenAnchorMap:(id)arg1 updateDate:(id)arg2 error:(id *)arg3;

@end
