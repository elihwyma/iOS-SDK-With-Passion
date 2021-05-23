/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSKAVPlayerController;

@interface TSKAVPlayerTimeController : NSObject

{
    id mTimeObserver;
    _Bool mObservingPlayerStatus;
    double mAbsoluteCurrentTime;
    double mCurrentTime;
    double mRemainingTime;
    double mUpdateInterval;
    TSKAVPlayerController *mPlayerController;
}

@property (nonatomic) double absoluteCurrentTime;
@property (nonatomic) double currentTime;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic) double updateInterval;
@property (retain, nonatomic, readonly) TSKAVPlayerController *playerController;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithPlayerController:(id)arg1;
- (void)p_createTimeObserver;
- (void)p_setTimeValuesWithoutScrubbing;
- (void)p_teardownTimeObserver;
- (void)p_beginScrubbingIfNeeded;
- (void)p_endScrubbing;
- (void)startObservingTime;
- (void)stopObservingTime;

@end
