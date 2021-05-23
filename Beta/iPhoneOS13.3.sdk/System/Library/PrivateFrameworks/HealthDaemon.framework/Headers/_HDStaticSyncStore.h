/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSString, NSUUID;

@interface _HDStaticSyncStore : NSObject

{
    long long _syncProvenance;
    HDProfile *_profile;
    NSUUID *_storeIdentifier;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (copy, nonatomic, readonly) NSUUID *storeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;

- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (long long)syncProvenance;
- (id)orderedSyncEntities;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;
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

@end
