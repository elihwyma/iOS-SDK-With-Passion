/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDMMCS, CKSQLitePool, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@protocol NSObject, OS_dispatch_queue;

@interface CKDAssetCache : NSObject

{
    _Bool _isUnitTestingAccount;
    _Bool _hasMigrated;
    _Bool _isEvictionScheduled;
    _Bool _didDrop;
    int _fileDownloadPathFd;
    CKDMMCS *_MMCS;
    CKSQLitePool *_dbPool;
    NSString *_fileDownloadPath;
    NSString *_applicationBundleID;
    NSString *_dbPath;
    NSString *_fileStagingPath;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_opQueue;
    long long _checkoutCount;
    id <NSObject> _assetHandleExpirationNotificationObserver;
    NSMutableDictionary *_volumeUUIDByVolumeIndex;
    NSMutableDictionary *_volumeIndexByVolumeUUID;
    NSMutableSet *_deferredDeletedAssetHandles;
    NSMutableDictionary *_deferredLastUsedTimeByTrackingUUID;
}

@property (retain, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) NSString *dbPath;
@property (retain, nonatomic) NSString *fileStagingPath;
@property (retain, nonatomic) NSString *fileDownloadPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSOperationQueue *opQueue;
@property (nonatomic) int fileDownloadPathFd;
@property _Bool isEvictionScheduled;
@property (nonatomic) _Bool hasMigrated;
@property (nonatomic) _Bool didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) id <NSObject> assetHandleExpirationNotificationObserver;
@property (retain, nonatomic) NSMutableDictionary *volumeUUIDByVolumeIndex;
@property (retain, nonatomic) NSMutableDictionary *volumeIndexByVolumeUUID;
@property (retain, nonatomic) NSMutableSet *deferredDeletedAssetHandles;
@property (retain, nonatomic) NSMutableDictionary *deferredLastUsedTimeByTrackingUUID;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (nonatomic, readonly) CKSQLitePool *dbPool;
@property (nonatomic) _Bool isUnitTestingAccount;

+ (id)assetCacheWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 didInit:(_Bool *)arg3 error:(id *)arg4;
+ (id)_sharedCachesQueue;
+ (id)_sharedCachesByPath;
+ (int)openFdForDownloadPath:(id)arg1 error:(id *)arg2;
+ (void)registerExpirationForAssetHandles;

- (void)dealloc;
- (void)cleanup;
- (void)clearAssetCache;
- (unsigned long long)countAssetCacheItems;
- (void)showAssetCache;
- (void)drop;
- (void)cancelExpiryTimer;
- (unsigned long long)evictAllFilesForced:(_Bool)arg1;
- (id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id *)arg3;
- (id)trackCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;
- (void)setupPersistentStateAtStartup;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)arg1;
- (void)unregisterItemIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_initWithApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 error:(id *)arg3;
- (_Bool)initDatabaseWithError:(id *)arg1;
- (void)_setVolumeIndex:(id)arg1 forVolumeUUID:(id)arg2;
- (id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1 usingDB:(id)arg2;
- (id)volumeUUIDWithVolumeIndex:(id)arg1;
- (id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1;
- (void)expireAssetHandlesIfNecessaryWithGroup:(id)arg1;
- (unsigned long long)_clearForced:(_Bool)arg1 group:(id)arg2;
- (unsigned long long)_evictWithEvictionInfo:(id)arg1;
- (void)scheduleUnregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)deviceIDForVolumeIndex:(id)arg1;
- (id)assetHandleWithCachedPath:(id)arg1;
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 deleteUnregisteredAssetHandlesWithIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_saveData:(id)arg1 error:(id *)arg2;
- (id)existingOrNewVolumeIndexForDeviceID:(id)arg1;
- (id)existingOrNewVolumeIndexForDeviceID:(id)arg1 usingDB:(id)arg2;
- (void)unregisterDeferredItemIDs:(id)arg1 andDeleteAssetHandles:(id)arg2 usingDB:(id)arg3;
- (void)updateDeferredLastAccessTimeForUUIDsUsingDB:(id)arg1;
- (void)_scheduleEvictionForDownloadedFiles;
- (void)_scheduleExpirationForAssetHandles;
- (id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;
- (_Bool)parseCachedPath:(id)arg1 assetHandleUUIDString:(id *)arg2 assetSignatureString:(id *)arg3;
- (_Bool)parseCachedPath:(id)arg1 assetHandleUUID:(id *)arg2 assetSignature:(id *)arg3;
- (unsigned long long)_evictDownloadedFilesEvictionInfo:(id)arg1;
- (unsigned long long)_evictDownloadedFilesWithDatabase:(id)arg1 evictionInfo:(id)arg2;
- (void)_expireAssetHandlesWithExpiryDate:(id)arg1 group:(id)arg2;
- (void)_expireAssetHandlesWithGroup:(id)arg1;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumesWithDB:(id)arg1;
- (void)_resetAssetInflightUsingDB:(id)arg1;
- (void)forgetVolumeUUID:(id)arg1;
- (unsigned long long)clearForced:(_Bool)arg1;
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)arg1 error:(id *)arg2;
- (_Bool)updateAssetHandlesForGetMMCSItems:(id)arg1 error:(id *)arg2;
- (_Bool)updateAssetHandlesForPutMMCSItems:(id)arg1 error:(id *)arg2;
- (id)trackDownloadedMMCSItems:(id)arg1 error:(id *)arg2;
- (_Bool)startTrackingRegisterOrPutAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;
- (_Bool)startTrackingGetAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;
- (void)deferredStopTrackingAssetHandlesByItemIDs:(id)arg1;
- (id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id *)arg2;
- (void)deferredUpdateLastTimeUsedForUUID:(id)arg1;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(_Bool)arg1;

@end
