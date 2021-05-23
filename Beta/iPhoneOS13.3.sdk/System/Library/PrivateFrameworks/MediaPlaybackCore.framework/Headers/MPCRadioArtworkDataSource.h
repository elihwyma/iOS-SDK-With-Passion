/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class CPLRUDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource

{
    unsigned long long _backgroundCacheSize;
    unsigned long long _cacheSize;
    CPLRUDictionary *_cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;
    long long _resumeToForegroundCacheSize;
}

+ (id)sharedRadioArtworkDataSource;

- (id)init;
- (void)dealloc;
- (void)_clearCache;
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;
- (void)_handleDidEnterBackgroundNotification:(id)arg1;
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_handleWillEnterForegroundNotification:(id)arg1;
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;
- (void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(_Bool)arg2;

@end
