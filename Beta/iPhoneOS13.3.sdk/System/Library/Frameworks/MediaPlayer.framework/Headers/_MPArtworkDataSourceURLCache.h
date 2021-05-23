/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSURLCache.h>

@class NSMapTable, NSObject;

@protocol OS_dispatch_queue;

@interface _MPArtworkDataSourceURLCache : NSURLCache

{
    NSMapTable *_requestSizeMap;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)setRepresentationSize:(struct CGSize)arg1 forRequest:(id)arg2;

@end
