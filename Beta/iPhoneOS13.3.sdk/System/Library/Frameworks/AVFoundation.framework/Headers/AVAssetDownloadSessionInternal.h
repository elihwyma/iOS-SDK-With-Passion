/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVURLAsset, AVWeakReference, NSError, NSNumber, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadSessionInternal : NSObject

{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *player;
    struct OpaqueFigPlaybackItem *playbackItem;
    struct OpaqueFigAsset *figAsset;
    NSObject<OS_dispatch_queue> *readWriteQueue;
    long long status;
    NSError *error;
    long long priority;
    NSURL *URL;
    NSURL *destinationURL;
    unsigned long long downloadToken;
    NSNumber *cachePrimingDownloadTokenNum;
    AVURLAsset *asset;
    struct CMBaseObject *assetDownloader;
}

@end
