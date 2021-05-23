/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetCache.h>

@class AVAssetDownloadCacheInternal;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadCache : AVAssetCache

{
    AVAssetDownloadCacheInternal *_internal;
}

- (void)dealloc;
- (id)URL;
- (id)_asset;
- (id)initWithAsset:(id)arg1;
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;
- (_Bool)isPlayableOffline;

@end
