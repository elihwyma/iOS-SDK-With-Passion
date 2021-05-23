/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVCustomVideoCompositorSession, AVVideoComposition, AVWeakReference, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetImageGeneratorInternal : NSObject

{
    AVWeakReference *weakReference;
    struct OpaqueFigAssetImageGenerator *generator;
    AVAsset *asset;
    _Bool appliesPreferredTrackTransform;
    struct CGSize maximumSize;
    NSString *apertureMode;
    CDStruct_1b6d18a9 requestedTimeToleranceBefore;
    CDStruct_1b6d18a9 requestedTimeToleranceAfter;
    NSMutableArray *requests;
    NSObject<OS_dispatch_queue> *requestsQueue;
    int nextRequestID;
    AVVideoComposition *videoComposition;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    NSObject<OS_dispatch_queue> *imageRequestQueue;
    int cancelledRequestIDThreshold;
    NSObject<OS_dispatch_queue> *generateImagesAsyncQueue;
}

@end
