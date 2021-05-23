/*
 Image: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
 */

#import <Foundation/NSObject.h>

@class FCAssetStore, FCCacheCoordinator, NSString;

@protocol NDAnalyticsEnvelopeStoreObserver;

@interface NDAnalyticsEnvelopeStore : NSObject

{
    id <NDAnalyticsEnvelopeStoreObserver> _observer;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
}

@property (retain, nonatomic) FCAssetStore *assetStore;
@property (retain, nonatomic) FCCacheCoordinator *cacheCoordinator;
@property (weak, nonatomic) id <NDAnalyticsEnvelopeStoreObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (id)initWithStoreDirectoryFileURL:(id)arg1;
- (void)enableFlushing;
- (void)copyEnvelopes:(id)arg1;
- (id)allEntriesWithHoldToken:(id *)arg1;
- (id)sizesOfEnvelopesWithEntries:(id)arg1;
- (void)deleteEnvelopesForEntries:(id)arg1;
- (void)_reportEnvelopesToNewsAutomationIfNeeded:(id)arg1;
- (void)_deleteEnvelopesForKeysFromStore:(id)arg1;
- (id)envelopesForEntries:(id)arg1;

@end
