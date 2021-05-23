/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetCache.h>

@class AVManagedAssetCacheInternal;

__attribute__((visibility("hidden")))
@interface AVManagedAssetCache : AVAssetCache

{
    AVManagedAssetCacheInternal *_priv;
}

+ (id)assetCacheWithURL:(id)arg1;

- (void)dealloc;
- (id)allKeys;
- (id)initWithURL:(id)arg1;
- (id)URL;
- (void)setMaxSize:(long long)arg1;
- (long long)maxSize;
- (id)lastModifiedDateOfEntryForKey:(id)arg1;
- (void)removeEntryForKey:(id)arg1;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (_Bool)isPlayableOffline;
- (long long)maxEntrySize;
- (long long)currentSize;
- (long long)sizeOfEntryForKey:(id)arg1;
- (void)setMaxEntrySize:(long long)arg1;

@end
