/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSCache, _RMSNowPlayingArtworkCacheItem;

__attribute__((visibility("hidden")))
@interface RMSNowPlayingArtworkCache : NSObject

{
    _RMSNowPlayingArtworkCacheItem *_lastItem;
    NSCache *_cache;
}

+ (id)sharedArtworkCache;

- (id)init;
- (id)artworkDataForIdentifier:(id)arg1;
- (void)setArtworkData:(id)arg1 forIdentifier:(id)arg2;
- (id)artworkDataForNowPlayingInfo:(id)arg1;
- (void)setArtworkData:(id)arg1 forNowPlayingInfo:(id)arg2;

@end
