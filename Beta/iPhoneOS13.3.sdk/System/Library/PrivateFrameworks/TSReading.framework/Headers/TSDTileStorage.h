/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSCache, NSMutableDictionary, NSString, TSUPointerKeyDictionary;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSDTileStorage : NSObject

{
    NSCache *mCache;
    TSUPointerKeyDictionary *mReverseCacheKeys;
    NSObject<OS_dispatch_semaphore> *mReverseCacheKeysLock;
    NSObject<OS_dispatch_queue> *mCacheKeysQueue;
    NSMutableDictionary *mCacheKeysByBucket;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)removeAllContents;
- (id)contentsInRect:(struct CGRect)arg1 contentsScale:(double)arg2 forTileAtLocation:(CDStruct_73b5d383)arg3 inBucket:(id)arg4;
- (void)storeContents:(id)arg1 inRect:(struct CGRect)arg2 contentsScale:(double)arg3 forTileAtLocation:(CDStruct_73b5d383)arg4 inBucket:(id)arg5;
- (void)removeImagesInBucket:(id)arg1;
- (id)p_cacheKeyForImageInRect:(struct CGRect)arg1 contentsScale:(double)arg2 tileLocation:(CDStruct_73b5d383)arg3;

@end
