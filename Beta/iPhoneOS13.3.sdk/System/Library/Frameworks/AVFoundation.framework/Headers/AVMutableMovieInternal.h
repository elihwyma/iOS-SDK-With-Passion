/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVDispatchOnce, NSData, NSDictionary, NSMutableArray, NSURL;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AVMutableMovieInternal : NSObject

{
    struct OpaqueFigMutableMovie *figMutableMovie;
    struct OpaqueFigFormatReader *formatReader;
    struct OpaqueFigAsset *figAsset;
    NSURL *URL;
    NSData *data;
    NSDictionary *initializationOptions;
    NSObject<OS_dispatch_semaphore> *trackWaitingSemaphore;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    NSMutableArray *tracks;
    AVDispatchOnce *makeTracksArrayOnce;
}

@end
