/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NUStoragePoolStats;

@protocol OS_dispatch_queue;

@interface NUPurgeableStoragePool : NSObject

{
    NUStoragePoolStats *_stats;
    unsigned long long _nonPurgeableActivityCounter;
    _Bool _migrationTimerScheduled;
    long long _nonPurgeableLimit;
    long long _purgeableLimit;
    double _migrationDelay;
    NSMutableArray *_volatileList;
    NSMutableArray *_nonPurgeableList;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_migrationQueue;
    Class _storageClass;
}

@property (nonatomic, readonly) long long nonPurgeableLimit;
@property (nonatomic, readonly) long long purgeableLimit;
@property (nonatomic, readonly) double migrationDelay;
@property (nonatomic, readonly) NSMutableArray *volatileList;
@property (nonatomic, readonly) NSMutableArray *nonPurgeableList;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *migrationQueue;
@property (copy, nonatomic, readonly) NUStoragePoolStats *stats;
@property (nonatomic, readonly) Class storageClass;

- (id)init;
- (id)debugDescription;
- (id)initWithStorageClass:(Class)arg1;
- (id)newStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)newStorageWithMinimumSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)newStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 exactMatch:(_Bool)arg3;
- (id)_allocateStorageWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (id)_storageFromPoolWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2 exactMatch:(_Bool)arg3;
- (void)returnStorage:(id)arg1;
- (void)_enforcePurgableLimit;
- (void)_returnVolatileStorage:(id)arg1;
- (void)_returnNonPurgeableStorage:(id)arg1;
- (id)reapPurged;
- (void)_reapPurged;
- (void)_resetNonPurgeableStorageMigrationTimer;
- (void)_scheduleMigrationTimer;
- (void)_migrationTimer:(unsigned long long)arg1;
- (void)migrateAllNonPurgeableStorage;
- (void)_migrateAllNonPurgeableStorageIfNoRecentActivity:(unsigned long long)arg1;
- (void)_migrateOldestNonPurgeableStorageToPurgeable;
- (id)_popOldestNonPurgeableStorage;
- (void)_migrateStorageToPurgeable:(id)arg1;
- (void)waitForMigration;

@end
