/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSDownload.h>

@class NSString;

@protocol SSBookDownloadQueue, SSBookDownloadStatus;

@interface SSBookDownload : SSDownload

{
    id <SSBookDownloadQueue> _downloadQueue;
    NSString *_downloadPhaseIdentifierOverride;
    id <SSBookDownloadStatus> _downloadStatus;
}

@property (retain, nonatomic) NSString *downloadPhaseIdentifierOverride;
@property (nonatomic, readonly) id <SSBookDownloadStatus> downloadStatus;
@property (nonatomic, readonly) NSString *downloadID;

- (void)pause;
- (void)resume;
- (id)status;
- (long long)persistentIdentifier;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setStatus:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)assetsForType:(id)arg1;
- (id)downloadPhaseIdentifier;
- (long long)bytesTotal;
- (long long)bytesDownloaded;
- (_Bool)addAsset:(id)arg1 forType:(id)arg2;
- (void)setDownloadHandler:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (double)percentComplete;
- (_Bool)removeAsset:(id)arg1;
- (long long)downloadSizeLimit;
- (void)setDownloadPolicy:(id)arg1;
- (id)downloadPolicy;
- (void)prioritizeAboveDownload:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)restart;
- (void)_becomeManagedOnConnection:(id)arg1;
- (_Bool)isEligibleForRestore:(id *)arg1;
- (void)setValuesWithStoreDownloadMetadata:(id)arg1;
- (id)backgroundNetworkingJobGroupName;
- (double)estimatedSecondsRemaining;
- (_Bool)isCancelable;
- (id)networkConstraints;
- (void)setBackgroundNetworkingJobGroupName:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (_Bool)isBackgroundNetworkingUserInitiated;
- (void)setBackgroundNetworkingUserInitiated:(_Bool)arg1;
- (id)initWithDownloadStatus:(id)arg1;

@end
