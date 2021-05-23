/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AVMovieTrackInternal : NSObject

{
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
}

@end
