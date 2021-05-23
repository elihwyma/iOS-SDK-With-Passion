/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKDatabase, CKDatabaseSubscription, CKRecordZone, NSCloudKitMirroringDelegateOptions, NSURL, PFCloudKitStoreMonitor;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PFCloudKitSetupAssistant : NSObject

{
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    CKRecordZone *_recordZone;
    CKContainer *_container;
    CKDatabase *_database;
    CKDatabaseSubscription *_databaseSubscription;
    NSURL *_largeBlobDirectoryURL;
    NSObject<OS_dispatch_semaphore> *_cloudKitSemaphore;
    PFCloudKitStoreMonitor *storeMonitor;
    PFCloudKitStoreMonitor *_storeMonitor;
}

@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKDatabaseSubscription *databaseSubscription;
@property (nonatomic, readonly) NSURL *largeBlobDirectoryURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_semaphore> *cloudKitSemaphore;
@property (nonatomic, readonly) PFCloudKitStoreMonitor *storeMonitor;

- (void)dealloc;
- (void)_setContainer:(id)arg1;
- (_Bool)_checkAndInitializeMetadata:(id *)arg1;
- (_Bool)_checkAccountStatus:(id *)arg1;
- (_Bool)_checkUserIdentity:(id *)arg1;
- (_Bool)_createZoneIfNecessary:(id *)arg1;
- (_Bool)_setupDatabaseSubscriptionIfNecessary:(id *)arg1;
- (_Bool)_initializeAssetStorageURLError:(id *)arg1;
- (_Bool)_saveZone:(id)arg1 error:(id *)arg2;
- (_Bool)_shouldAttemptRecoveryForZone:(id)arg1 byDeletingExistingZone:(_Bool *)arg2 afterError:(id)arg3;
- (_Bool)_deleteZone:(id)arg1 error:(id *)arg2;
- (id)initWithMirroringOptions:(id)arg1 observedStore:(id)arg2 zone:(id)arg3 databaseSubscription:(id)arg4;
- (_Bool)_initializeCloudKitForObservedStore:(id *)arg1;
- (void)_setDatabase:(id)arg1;
- (void)_setStoreMonitor:(id)arg1;

@end
