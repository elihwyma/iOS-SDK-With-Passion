/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVAssetImageGenerator, NSLock, NSMutableArray, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PMScrubberImageSource : NSObject

{
    AVAssetImageGenerator *_imageGenerator;
    NSMutableDictionary *_cachedImages;
    NSMutableDictionary *_requestCompletionHandlers;
    NSMutableArray *_pendingTimestampRequests;
    _Bool _requestToProcessPendingThumbnailsQueued;
    _Bool _cancelled;
    NSLock *_cancelledLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    struct CGSize _maximumThumbnailSize;
}

@property (nonatomic) struct CGSize maximumThumbnailSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;

- (id)init;
- (void)dealloc;
- (void)processPendingThumbnailRequests;
- (void)setupImageGeneratorWithAVAsset:(id)arg1;
- (void)enqueueThumbnailRequestForTimestamp:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)cancelPendingThubmnailRequests;

@end
