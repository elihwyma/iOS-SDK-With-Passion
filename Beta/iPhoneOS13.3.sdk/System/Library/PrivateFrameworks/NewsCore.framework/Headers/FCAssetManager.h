/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class FCAssetStore, FCCacheCoordinator, FCKeyValueStore, FCNetworkBehaviorMonitor, NFUnfairLock, NSMapTable, NSString, NSURL;

@protocol FCAssetKeyManagerType, OS_dispatch_queue;

@interface FCAssetManager : NSObject <Swift>

{
    _Bool _shouldUseSecureConnectionForCKAssetDownloads;
    NSURL *_directoryURLForCachedAssets;
    NSString *_name;
    NSString *_parentDirectory;
    FCKeyValueStore *_keyValueStore;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
    NSMapTable *_assetHandles;
    NFUnfairLock *_assetHandlesLock;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCAssetKeyManagerType> _keyManager;
    NSObject<OS_dispatch_queue> *_initQueue;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *parentDirectory;
@property (retain, nonatomic) FCKeyValueStore *keyValueStore;
@property (retain, nonatomic) FCAssetStore *assetStore;
@property (retain, nonatomic) FCCacheCoordinator *cacheCoordinator;
@property (retain, nonatomic) NSMapTable *assetHandles;
@property (retain, nonatomic) NFUnfairLock *assetHandlesLock;
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (retain, nonatomic) id <FCAssetKeyManagerType> keyManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic) _Bool shouldUseSecureConnectionForCKAssetDownloads;
@property (nonatomic, readonly) NSURL *directoryURLForCachedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)assetHandleForCKAssetURLString:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForURL:(id)arg1 lifetimeHint:(long long)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)assetHandleForRecordID:(id)arg1 field:(long long)arg2 lifetimeHint:(long long)arg3 contentDatabase:(id)arg4;
- (id)operationToFetchDataProviderForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)assetHandleForCKAssetURLString:(id)arg1 prefetchedData:(id)arg2 unzipIfNeeded:(_Bool)arg3 lifetimeHint:(long long)arg4;
- (id)assetHandleForURL:(id)arg1 prefetchedFileURL:(id)arg2 importMethod:(long long)arg3 lifetimeHint:(long long)arg4;
- (void)_prepareForUseIfNeeded;
- (id)_assetKeyForRemoteURL:(id)arg1;
- (long long)_anefFileDataProviderOptions;
- (id)_assetHandleForCKAssetURLComponents:(id)arg1 lifetimeHint:(long long)arg2;
- (_Bool)_dataIsGzipped:(id)arg1;
- (void)_importFileAtPath:(id)arg1 method:(long long)arg2 key:(id)arg3 mimeType:(id)arg4 lifetimeHint:(long long)arg5;
- (void)_fetchDataProviderForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_populateRawFilePathForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_transformerForAssetAtPath:(id)arg1 mimeType:(id)arg2 URL:(id)arg3;
- (void)_initStores;
- (id)initWithName:(id)arg1 directory:(id)arg2 keyManager:(id)arg3 networkBehaviorMonitor:(id)arg4;
- (id)assetHandleForCKAssetURL:(id)arg1 lifetimeHint:(long long)arg2;
- (void)d_resetAssetHandle:(id)arg1;
- (void)t_save;
- (id)assetHandleForResourceID:(id)arg1 lifetimeHint:(long long)arg2 contentContext:(id)arg3;
- (id)assetHandleForResourceID:(id)arg1 contentContext:(id)arg2;

@end
