/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MPStoreAssetInfoPlaybackCache : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_accessOrderedRequests;
    NSMutableDictionary *_requestToCachedResponse;
}

+ (id)sharedCache;

- (id)_init;
- (id)cachedResponseForRequest:(id)arg1;
- (void)addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)updateForPlaybackOfFileAsset:(id)arg1 fromResponse:(id)arg2;

@end
