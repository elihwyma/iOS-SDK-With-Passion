/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class AVPlayer, NSString;

@interface PXSimpleVideoScrubberControllerTarget : NSObject

{
    CDStruct_1b6d18a9 _currentItemDuration;
    CDUnknownBlockType statusChangeHandler;
    CDUnknownBlockType durationChangeHandler;
    CDUnknownBlockType playerItemChangeHandler;
    AVPlayer *_videoPlayer;
}

@property (nonatomic, readonly) AVPlayer *videoPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType durationChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType statusChangeHandler;
@property (copy, nonatomic) CDUnknownBlockType playerItemChangeHandler;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeTimeObserver:(id)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)cancelPendingSeeks;
- (id)playerItem;
- (long long)playerStatus;
- (id)initWithVideoPlayer:(id)arg1;
- (float)playRate;
- (CDStruct_1b6d18a9)currentItemDuration;
- (CDStruct_1b6d18a9)playerCurrentTime;
- (void)videoScrubberController:(id)arg1 seekToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
