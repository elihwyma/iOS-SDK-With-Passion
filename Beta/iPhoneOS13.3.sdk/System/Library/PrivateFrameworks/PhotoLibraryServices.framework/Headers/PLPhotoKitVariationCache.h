/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSCache, NSURL;

@protocol OS_dispatch_queue;

@interface PLPhotoKitVariationCache : NSObject

{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSCache *_memoryCache;
    NSURL *_cacheURL;
}

@property (readonly) NSURL *cacheURL;

- (unsigned long long)purgeAll;
- (id)initWithPathManager:(id)arg1;
- (id)initWithCacheURL:(id)arg1;
- (id)_keyForVariationType:(long long)arg1;
- (id)_recipeKeyForVariationType:(long long)arg1;
- (id)_gatingKeyForVariationType:(long long)arg1;
- (id)_suggestionKeyForVariationType:(long long)arg1;
- (void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2;
- (id)analysisResultForAssetIdentifier:(id)arg1;
- (void)savePortraitEffectSettings:(id)arg1 assetIdentifier:(id)arg2;
- (id)portraitEffectSettingsForAssetIdentifier:(id)arg1;
- (void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3;
- (id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2;
- (_Bool)_performChangesForAssetIdentifier:(id)arg1 changesBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)evictIfNeeded;
- (_Bool)deleteCacheForAssetIdentifier:(id)arg1;
- (id)_fileURLWithIdentifier:(id)arg1 pathExtension:(id)arg2;
- (_Bool)_writeInfo:(id)arg1 atURL:(id)arg2;
- (id)_readInfoForURL:(id)arg1;
- (void)_saveToMemoryCache:(id)arg1 forFileURL:(id)arg2 fileSize:(unsigned long long)arg3;
- (_Bool)_removeCachesForURL:(id)arg1;

@end
