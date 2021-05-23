/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, _PASLock, _PASNotificationTracker;

@protocol OS_dispatch_queue, OS_os_log;

@interface _PASAsset2 : NSObject

{
    NSString *_assetTypeIdentifier;
    NSString *_defaultBundlePathBackup;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
    unsigned long long _compatibilityVersion;
}

@property (nonatomic, readonly) NSString *bundlePath;
@property (nonatomic, readonly) unsigned long long assetVersion;
@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) unsigned long long compatibilityVersion;
@property (nonatomic, readonly) unsigned long long bestAssetVersionObserved;

- (id)init;
- (void)dealloc;
- (id)_assetDescription;
- (void)clearOverrides;
- (id)registerUpdateHandler:(CDUnknownBlockType)arg1;
- (_Bool)deregisterUpdateHandlerAsyncWithToken:(id)arg1;
- (_Bool)_loadDefaultBundleVersionWithGuardedData:(id)arg1;
- (_Bool)deregisterUpdateHandlerWithToken:(id)arg1;
- (void)_updateAssetMetadata;
- (void)_issueUpdateNotificationsWithCallback:(CDUnknownBlockType)arg1;
- (void)invokeWithBundleOverride:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)callAssetUpdateHandlers;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(_Bool)arg6;
- (id)initWithAssetTypeDescriptorPath:(id)arg1 defaultBundlePath:(id)arg2 matchingKeysAndValues:(id)arg3 notificationQueue:(id)arg4 logHandle:(id)arg5 enableAssetUpdates:(_Bool)arg6 purgeObsoleteInstalledAssets:(_Bool)arg7;
- (id)_initWithAssetTypeIdentifier:(id)arg1 defaultBundlePath:(id)arg2 compatibilityVersion:(unsigned long long)arg3 matchingKeysAndValues:(id)arg4 notificationQueue:(id)arg5 logHandle:(id)arg6 enableAssetUpdates:(_Bool)arg7 purgeObsoleteInstalledAssets:(_Bool)arg8;
- (void)downloadMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (id)_maFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 isMissingData:(_Bool *)arg3 assetVersion:(unsigned long long *)arg4;
- (id)_defaultBundleFilesystemPathsForAssetDataRelativePaths:(id)arg1 guardedData:(id)arg2 assetVersion:(unsigned long long *)arg3;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1 assetVersion:(unsigned long long *)arg2;
- (id)filesystemPathsForAssetDataRelativePaths:(id)arg1;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1 assetVersion:(unsigned long long *)arg2;
- (id)filesystemPathForAssetDataRelativePath:(id)arg1;
- (_Bool)updateAssetMetadataUsingQueryResults:(id)arg1;
- (void)_purgeObsoleteInstalledAssetsFromCandidates:(id)arg1 guardedData:(id)arg2;
- (_Bool)overrideDefaultBundleWithBundleAtPath:(id)arg1;
- (void)addOverridePath:(id)arg1 forResourceWithRelativePath:(id)arg2;

@end
