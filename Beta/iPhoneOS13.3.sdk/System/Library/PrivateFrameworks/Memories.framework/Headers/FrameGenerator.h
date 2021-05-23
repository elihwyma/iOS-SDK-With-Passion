/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator, NSLock, NSMutableDictionary, VideoMovie;

__attribute__((visibility("hidden")))
@interface FrameGenerator : NSObject

{
    AVAssetImageGenerator *m_imageGenerator;
    VideoMovie *m_movie;
    NSMutableDictionary *m_fetchNotificationList;
    NSLock *m_fetchLock;
    CDStruct_1b6d18a9 m_timeToleranceBefore;
    CDStruct_1b6d18a9 m_timeToleranceAfter;
    _Bool m_requestedTimeTolerance;
    _Bool m_disablePosterFrame;
    _Bool m_cropImage;
    struct CGRect m_cropRect;
    float m_rotation;
    long long _maximumCacheSize;
    struct CGSize m_maximumSize;
}

@property (retain, nonatomic) VideoMovie *movie;
@property (nonatomic) struct CGSize maximumSize;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic, readonly) _Bool isQueueEmpty;
@property (nonatomic) _Bool disablePosterFrame;
@property (nonatomic) float rotation;
@property (nonatomic, readonly) long long maximumCacheSize;

+ (void)ensureCacheDirectoryExists;
+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)nukeCaches;
+ (id)cachedFrameForMovie:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 nearby:(_Bool)arg3 actualTime:(CDStruct_1b6d18a9 *)arg4 size:(struct CGSize)arg5 withRotation:(double)arg6;
+ (id)posterCacheKeyForMovie:(id)arg1;
+ (id)posterCacheDirectory;
+ (void)setupCaches;
+ (id)posterFrameForMovie:(id)arg1;
+ (id)imageKeyForTime:(int)arg1 size:(struct CGSize)arg2 withRotation:(float)arg3;
+ (void)queueOne:(id)arg1 times:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)queueNextItem;
+ (void)setCachedFrame:(id)arg1 forMovie:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 canPoster:(_Bool)arg4 size:(struct CGSize)arg5 withRotation:(double)arg6 maximumCacheSize:(long long)arg7;
+ (void)queueGenerator:(id)arg1 forTimes:(id)arg2 highPriority:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)removeQueueEntriesForGenerator:(id)arg1;
+ (void)changeTimesToHighPriority:(id)arg1 forGenerator:(id)arg2;
+ (void)pauseFetching;
+ (void)resumeFetching;
+ (_Bool)isAnythingFetching;
+ (void)logAllQueuedTimes;

- (void)dealloc;
- (id)applyRotation:(id)arg1;
- (id)imageGenerator;
- (void)cropImage:(struct CGRect)arg1;
- (id)initWithMovie:(id)arg1 maximumCacheSize:(long long)arg2;
- (id)imageAtTime:(CDStruct_1b6d18a9)arg1;
- (void)clearImageGenerator;
- (id)imageFrom:(struct CGImage *)arg1;
- (id)applyCrop:(id)arg1;
- (void)requestedTimeTolerance:(CDStruct_1b6d18a9)arg1 after:(CDStruct_1b6d18a9)arg2;
- (void)fetchTime:(CDStruct_1b6d18a9)arg1 highPriority:(_Bool)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)cancelAllFetching;
- (void)cancelFetchingOutsideActiveSegment:(CDStruct_1b6d18a9)arg1 until:(CDStruct_1b6d18a9)arg2 maxRequestInFlight:(long long)arg3;
- (_Bool)isFetching:(CDStruct_1b6d18a9)arg1;
- (void)logQueuedTimes;
- (_Bool)fetchTimeInQueue:(CDStruct_1b6d18a9)arg1;
- (void)changeTimesToHighPriority:(id)arg1;

@end
