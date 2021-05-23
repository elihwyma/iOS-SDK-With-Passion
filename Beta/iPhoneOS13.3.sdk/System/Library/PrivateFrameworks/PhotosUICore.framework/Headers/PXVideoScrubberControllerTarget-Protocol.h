/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXVideoScrubberControllerTarget <Swift>

@property (copy, nonatomic) CDUnknownBlockType durationChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType statusChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType playerItemChangeHandler;

- (unsigned short)removeTimeObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)addPeriodicTimeObserverForInterval:queue:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelPendingSeeks;
- (unsigned short)playerItem;
- (unsigned short)playerStatus;
- (unsigned short)playRate;
- (unsigned short)currentItemDuration;
- (unsigned short)playerCurrentTime;
- (unsigned short)videoScrubberController:seekToTime:toleranceBefore:toleranceAfter:completionHandler: /* Error: Ran out of types for this method. */;

@end
