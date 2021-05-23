/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPlayerItem, AVQueuePlayer, AVWeakReference, NSError, NSMutableArray;

@protocol AVCallbackCancellation, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerLooperInternal : NSObject

{
    AVQueuePlayer *loopingPlayer;
    AVPlayerItem *loopingItem;
    NSMutableArray *loopingItemCopies;
    CDStruct_e83c9415 loopRange;
    long long loopCount;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long playerOriginalActionAtItemEnd;
    CDStruct_1b6d18a9 forwardPlaybackStartTime;
    AVPlayerItem *lastEnqueuedLoopingItem;
    _Bool waitingForLastLoopingCopyToFinish;
    long long status;
    NSError *error;
    id <AVCallbackCancellation> playerCurrentItemKVOInvoker;
    NSMutableArray *loopingItemStatusKVOInvokers;
    AVWeakReference *weakReference;
    _Bool listeningForItemFailedToPlayToEndTime;
}

@end
