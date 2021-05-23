/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSDownload.h>

@class ASDJob;

__attribute__((visibility("hidden")))
@interface SSSoftwareDownload : SSDownload

{
    ASDJob *_job;
}

@property (nonatomic, readonly) ASDJob *job;

- (void)pause;
- (void)resume;
- (id)status;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setStatus:(id)arg1;
- (id)valueForProperty:(id)arg1;
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
- (id)initWithJob:(id)arg1;
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

@end
