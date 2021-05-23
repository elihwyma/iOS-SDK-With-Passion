/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet;

@protocol OS_dispatch_queue;

@interface ISFrameCache : NSObject

{
    struct CGImageSource *_gifSource;
    unsigned long long _frameCount;
    unsigned long long _fullCachingCost;
    NSObject<OS_dispatch_queue> *_frameGenerationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    unsigned long long _frameCacheSize;
    NSMutableDictionary *_frameCache;
    unsigned long long _lastRequestedIdx;
    NSMutableIndexSet *_cachedIndexes;
    struct {
        _Bool cacheSize;
        _Bool frameCache;
    } _isValid;
    long long _cacheStrategy;
}

@property (nonatomic) long long cacheStrategy;

+ (id)sharedFrameGenerationQueue;

- (void)dealloc;
- (void)_invalidateCache;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (void)_updateIfNeeded;
- (struct CGImage *)frameAtIndex:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(_Bool)arg3;
- (struct CGImage *)frameAtIndexIfReady:(unsigned long long)arg1;
- (struct CGImage *)_frameAtIndex:(unsigned long long)arg1 allowLazy:(_Bool)arg2;
- (void)_invalidateCacheSize;
- (void)_updateDesiredCacheSize;
- (void)_updateFrameCache;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned long long)arg1;
- (void)_frameGenerationQueue_updateFrameCache;
- (struct CGImage *)_createPredrawnImage:(struct CGImage *)arg1;

@end
