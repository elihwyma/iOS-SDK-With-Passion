/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWDeferredContainerManagerBase.h>

@class NSMutableArray, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BWDeferredCaptureContainerManager : BWDeferredContainerManagerBase

{
    unsigned int _cacheSize;
    unsigned int _cacheResidencySeconds;
    NSObject<OS_dispatch_source> *_cacheExpiryTimer;
    NSMutableArray *_stagedContainers;
    NSMutableArray *_inflightContainers;
    NSMutableArray *_cachedContainers;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_dispatch_queue> *_flushQueueBackground;
    unsigned long long _cachedLowDiskThresholdBytes;
    NSMutableDictionary *_pools;
}

+ (id)sharedInstance;

- (id)init;
- (id)lookupCaptureContainer:(id)arg1;
- (int)abortContainer:(id)arg1 error:(int)arg2;
- (int)commitContainer:(id)arg1 delegate:(id)arg2;
- (id)manifestsForApplicationID:(id)arg1 err:(int *)arg2;
- (int)deleteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (id)createCaptureContainerWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int *)arg3;
- (int)addCaptureContainer:(id)arg1;
- (int)queryContainerStatusForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 status:(int *)arg3;
- (id)copyRemoteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 err:(int *)arg3;
- (int)releaseRemoteContainerForApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2;
- (int)_queryLowDiskThresholds:(unsigned long long *)arg1 veryLowDiskThresholdBytes:(unsigned long long *)arg2;
- (id)_containerForCaptureRequestIdentifier:(id)arg1 array:(id)arg2 index:(unsigned long long *)arg3;
- (_Bool)_removeContainerForCaptureRequestIdentifier:(id)arg1 array:(id)arg2;
- (void)_reportCoreAnalyticsDataWithError:(int)arg1 container:(id)arg2;
- (_Bool)_removeInflightContainerForCaptureRequestIdentifier:(id)arg1;
- (int)_handleExpiryTimer;
- (_Bool)_removeCachedContainerForCaptureRequestIdentifier:(id)arg1;
- (void)_rescheduleCacheExpiryTimer;
- (int)_flushContainer:(id)arg1 container:(id)arg2 delegate:(id)arg3;
- (id)_stagedContainerForCaptureRequestIdentifier:(id)arg1;
- (_Bool)_removeStagedContainerForCaptureRequestIdentifier:(id)arg1;
- (void)_updateCacheEntryForContainer:(id)arg1 release:(_Bool)arg2;
- (id)_inflightContainerForCaptureRequestIdentifier:(id)arg1;
- (int)_validateContainerFromURL:(id)arg1 containerUUID:(id)arg2 captureRequestIdentifier:(id *)arg3 photos:(id *)arg4;
- (int)_enumerateOnDiskManifestsForApplicationID:(id)arg1 manifestArray:(id)arg2 deleteInvalidContainers:(_Bool)arg3;
- (id)_cachedContainerForCaptureRequestIdentifier:(id)arg1;
- (_Bool)canDefer;
- (int)addBufferPool:(id)arg1;
- (int)removeBufferPool:(id)arg1;
- (struct __CVBuffer *)newPixelBuffer:(id)arg1;

@end
