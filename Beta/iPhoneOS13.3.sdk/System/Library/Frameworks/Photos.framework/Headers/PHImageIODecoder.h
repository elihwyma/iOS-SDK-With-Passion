/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHImageDecoder.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImageIODecoder : PHImageDecoder

{
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;
    NSObject<OS_dispatch_queue> *_activeRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
}

+ (long long)maxConcurrentDecodeCount;
+ (id)sharedDecoder;
+ (void)setMaxConcurrentDecodeCount:(long long)arg1;

- (id)init;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(_Bool)arg5 optimizeForDrawing:(_Bool)arg6 highPriority:(_Bool)arg7 waitUntilComplete:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(_Bool)arg5 optimizeForDrawing:(_Bool)arg6 highPriority:(_Bool)arg7 waitUntilComplete:(_Bool)arg8 existingRequestHandle:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;

@end
