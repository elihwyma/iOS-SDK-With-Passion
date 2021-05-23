/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSEntity.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, SSDownloadMetadata, SSDownloadPolicy, SSDownloadStatus, SSXPCConnection;

@interface SSDownload : SSEntity

{
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}

@property (readonly) NSDictionary *_localAssets;
@property (readonly, getter=_XPCConnection) SSXPCConnection *_XPCConnection;
@property (nonatomic, readonly, getter=isExternal) _Bool external;
@property (nonatomic, readonly) id downloadIdentifier;
@property (retain, nonatomic) NSArray *assets;
@property (copy, nonatomic) SSDownloadMetadata *metadata;
@property (retain, nonatomic) SSDownloadStatus *status;
@property (readonly) long long persistentIdentifier;
@property (readonly, getter=isCancelable) _Bool cancelable;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property (readonly) long long downloadSizeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (id)assetsForType:(id)arg1;
- (id)failureError;
- (id)downloadPhaseIdentifier;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;
- (void)setDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithPersistentIdentifier:(long long)arg1;
- (double)percentComplete;
- (_Bool)removeAsset:(id)arg1;
- (id)initWithDownloadMetadata:(id)arg1;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)restart;
- (id)copyXPCEncoding;
- (id)_errorWithData:(id)arg1;
- (_Bool)isEligibleForRestore:(id *)arg1;
- (id)_errorWithXPCReply:(id)arg1;
- (void)_applyPhase:(id)arg1 toStatus:(id)arg2;
- (void)_resetLocalIVars;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)_newAssetWithURL:(id)arg1 assetType:(id)arg2;
- (id)_initWithLocalPropertyValues:(id)arg1;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (id)networkConstraints;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)_addCachedExternalValues:(id)arg1;
- (void)_addCachedPropertyValues:(id)arg1;
- (void)handleWithDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isBackgroundNetworkingUserInitiated;
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;
- (void)_resetStatus;

@end
