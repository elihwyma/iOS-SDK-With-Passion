/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDNanoPairingEntity, HDNanoSyncRestoreSession, HDProfile, HKNanoSyncPairedDeviceInfo, IDSDevice, NRDevice, NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSSet, NSString, NSUUID;

@protocol HDNanoSyncStoreDelegate;

@interface HDNanoSyncStore : NSObject

{
    NSString *_remoteSystemBuildVersion;
    NSString *_remoteProductType;
    HDNanoPairingEntity *_pairingEntity;
    NSMutableDictionary *_pendingRequestContexts;
    int _protocolVersion;
    _Bool _active;
    _Bool _invalidated;
    NSMutableArray *_incomingSyncObserverTimers;
    NSUUID *_lastIncompleteIncomingSyncUUID;
    NSDate *_lastIncompleteIncomingSyncDate;
    NSDate *_lastCompleteIncomingSyncDate;
    NSError *_lastCompleteIncomingSyncError;
    NSMutableDictionary *_expectedSequenceNumbers;
    NSArray *_orderedSyncEntities;
    _Bool _master;
    _Bool _needsSyncOnUnlock;
    HDProfile *_profile;
    IDSDevice *_identityServicesDevice;
    NRDevice *_nanoRegistryDevice;
    id <HDNanoSyncStoreDelegate> _delegate;
    long long _restoreState;
    HDNanoSyncRestoreSession *_restoreSession;
    NSSet *_obliteratedDatabaseUUIDs;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) IDSDevice *identityServicesDevice;
@property (retain, nonatomic) NRDevice *nanoRegistryDevice;
@property (weak, nonatomic) id <HDNanoSyncStoreDelegate> delegate;
@property (readonly) IDSDevice *device;
@property (copy, readonly) HKNanoSyncPairedDeviceInfo *deviceInfo;
@property (copy, nonatomic) NSUUID *persistentUUID;
@property (copy, nonatomic) NSUUID *healthUUID;
@property (nonatomic, readonly, getter=isRestoreComplete) _Bool restoreComplete;
@property (nonatomic, readonly) long long restoreState;
@property (nonatomic, readonly) HDNanoSyncRestoreSession *restoreSession;
@property (copy, nonatomic, readonly) NSSet *obliteratedDatabaseUUIDs;
@property (nonatomic) _Bool needsSyncOnUnlock;
@property (readonly, getter=isInvalidated) _Bool invalidated;
@property (readonly) NSUUID *nanoRegistryUUID;
@property (copy, readonly) NSString *remoteSystemBuildVersion;
@property (copy, readonly) NSString *remoteProductType;
@property (copy, readonly) NSString *sourceBundleIdentifier;
@property (readonly) int protocolVersion;
@property (readonly, getter=isActive) _Bool active;
@property (readonly, getter=isMaster) _Bool master;
@property (copy, readonly) NSString *deviceName;
@property (readonly) NSDate *lastInactiveDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) long long syncStoreType;

+ (id)nanoSyncStoreWithProfile:(id)arg1 device:(id)arg2 delegate:(id)arg3;
+ (id)_observedDeviceProperties;
+ (id)orderedSyncEntitiesForProfile:(id)arg1 protocolVersion:(int)arg2 companion:(_Bool)arg3;

- (void)dealloc;
- (void)invalidate;
- (id)syncStoreIdentifier;
- (id)databaseIdentifier;
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;
- (id)diagnosticDescription;
- (long long)syncProvenance;
- (void)prepareForObliteration;
- (void)configureOutgoingResponse:(id)arg1;
- (id)nanoSyncStoreForProtocolVersion:(int)arg1;
- (void)finishRestoreSessionWithError:(id)arg1;
- (id)beginRestoreSessionWithUUID:(id)arg1 timeout:(double)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (id)orderedSyncEntities;
- (_Bool)validatePairingUUIDsWithIncomingMessage:(id)arg1;
- (void)didReceiveRequestWithChangeSet:(id)arg1;
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;
- (void)removeExpiredIncomingSyncObservers;
- (void)addIncomingSyncObserverWithTimeout:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createRequestWithMessageID:(unsigned short)arg1;
- (void)addPendingRequestContext:(id)arg1 forUUID:(id)arg2;
- (id)pendingRequestContextForUUID:(id)arg1;
- (void)removePendingRequestContextForUUID:(id)arg1;
- (long long)syncEpoch;
- (id)syncStoreDefaultSourceBundleIdentifier;
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;
- (_Bool)enforceSyncEntityOrdering;
- (_Bool)shouldContinueAfterAnchorValidationError:(id)arg1;
- (_Bool)shouldEnforceSequenceOrdering;
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;
- (id)_initWithIdentityServicesDevice:(id)arg1 nanoRegistryDevice:(id)arg2 pairingEntity:(id)arg3 obliteratedDatabaseUUIDs:(id)arg4 protocolVersion:(int)arg5 delegate:(id)arg6 profile:(id)arg7;
- (_Bool)_savePairingEntity;
- (void)_setRestoreState:(long long)arg1;
- (void)_notifyIncomingSyncObservers;

@end
