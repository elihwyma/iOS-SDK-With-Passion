/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AVMutableMovieTrackInternal : NSObject

{
    struct OpaqueFigMutableMovie *figMutableMovie;
    int trackID;
    struct OpaqueFigAssetTrack *figAssetTrack;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack *figAssetTrackNotificationSource;
}

@end
