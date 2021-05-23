/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class ISWrappedAVPlayer, NSString;

@interface PXSimpleWrappedVideoScrubberControllerTarget : NSObject

{
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    CDUnknownBlockType durationChangeHandler;
    ISWrappedAVPlayer *_videoPlayer;
}

@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType durationChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType statusChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType playerItemChangeHandler;

- (id)init;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)cancelPendingSeeks;
- (id)playerItem;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (long long)playerStatus;
- (id)initWithVideoPlayer:(id)arg1;
- (float)playRate;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
