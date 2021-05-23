/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, VSShortTermCache, VSSpeechCache;

@protocol OS_dispatch_queue;

@interface VSCachingService : NSObject

{
    NSLock *_threadLock;
    NSMutableArray *_inMemoryCaches;
    VSSpeechCache *_cacheStore;
    VSShortTermCache *_shortTermCache;
    NSObject<OS_dispatch_queue> *_cachingQueue;
}

@property (retain, nonatomic) NSLock *threadLock;
@property (retain, nonatomic) NSMutableArray *inMemoryCaches;
@property (retain, nonatomic) VSSpeechCache *cacheStore;
@property (retain, nonatomic) VSShortTermCache *shortTermCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cachingQueue;

+ (id)standardService;

- (void)fetchCacheForTask:(id)arg1;
- (void)enqueueCacheSpeakTask:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)shortTermCacheForHash:(id)arg1;
- (void)enqueueShortTermCacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enqueueCacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)inMemoryCacheForHash:(id)arg1;
- (id)onDiskCacheForHash:(id)arg1;
- (id)initWithCache:(id)arg1 shortTermMemory:(id)arg2;
- (id)cacheWithHash:(id)arg1 audio:(id)arg2 timingInfo:(id)arg3;
- (id)onDiskCacheForSimilarTask:(id)arg1;

@end
