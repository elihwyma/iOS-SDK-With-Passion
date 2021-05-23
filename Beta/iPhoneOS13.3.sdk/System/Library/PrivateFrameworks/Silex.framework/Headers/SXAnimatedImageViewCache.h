/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableIndexSet, NSOperationQueue, SXAnimatedImage;

@protocol SXAnimatedImageViewCacheDelegate;

@interface SXAnimatedImageViewCache : NSObject

{
    _Bool _cachingEnabled;
    struct os_unfair_lock_s _lock;
    id <SXAnimatedImageViewCacheDelegate> _delegate;
    SXAnimatedImage *_animatedImage;
    long long _singleImageByteSize;
    unsigned long long _lastRequestedIndex;
    NSOperationQueue *_queue;
    unsigned long long _numberOfCachedImages;
    NSMutableArray *_cachedImages;
    NSMutableIndexSet *_indicesToCache;
    struct CGSize _size;
}

@property (nonatomic) _Bool cachingEnabled;
@property long long singleImageByteSize;
@property unsigned long long lastRequestedIndex;
@property (nonatomic, readonly) unsigned long long maxCacheSize;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (nonatomic, readonly) struct os_unfair_lock_s lock;
@property (nonatomic) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) NSMutableArray *cachedImages;
@property (nonatomic, readonly) NSMutableIndexSet *indicesToCache;
@property (nonatomic, readonly) struct CGSize size;
@property (weak, nonatomic) id <SXAnimatedImageViewCacheDelegate> delegate;
@property (weak, nonatomic) SXAnimatedImage *animatedImage;
@property (nonatomic, getter=preloadingSuspended) _Bool suspendPreloading;

- (void)prune;
- (id)imageForFrameIndex:(unsigned long long)arg1;
- (void)prepareCache;
- (void)cacheNextImage;
- (void)decreaseCacheSize;
- (void)restoreCacheSize;
- (id)decodeImageFromSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2;
- (void)checkCacheSize;
- (id)initWithImageSize:(struct CGSize)arg1;
- (void)prepareImageForFrameIndex:(unsigned long long)arg1;
- (unsigned long long)nearestCachedFrameIndexForFrameIndex:(unsigned long long)arg1;

@end
