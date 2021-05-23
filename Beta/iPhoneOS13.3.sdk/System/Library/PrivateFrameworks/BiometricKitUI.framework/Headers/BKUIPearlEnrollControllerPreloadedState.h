/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Foundation/NSObject.h>

@class BKUIPearlAudioSession, BKUIPearlVideoCaptureSession, NSArray;

@interface BKUIPearlEnrollControllerPreloadedState : NSObject

{
    NSArray *_cachedEntryAnimationImages;
    BKUIPearlAudioSession *_cachedAudioSession;
    BKUIPearlVideoCaptureSession *_cachedVideoCaptureSession;
}

- (void)cacheEntryAnimationImages:(id)arg1;
- (void)cacheAudioSession:(id)arg1;
- (void)cacheVideoCaptureSession:(id)arg1;
- (id)acquireCachedVideoCaptureSession;
- (id)acquireCachedEntryAnimationImages;
- (id)acquireCachedAudioSession;

@end
