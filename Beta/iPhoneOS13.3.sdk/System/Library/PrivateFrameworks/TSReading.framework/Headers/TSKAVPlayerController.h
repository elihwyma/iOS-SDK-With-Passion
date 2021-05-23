/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class AVPlayer;

@protocol TSKAVPlayerControllerDelegate;

@interface TSKAVPlayerController : NSObject

{
    AVPlayer *mPlayer;
    id <TSKAVPlayerControllerDelegate> mDelegate;
    long long mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    unsigned long long mScrubbingCount;
    _Bool mCanPlay;
    _Bool mPlaying;
    _Bool mFastReversing;
    _Bool mFastForwarding;
    _Bool mIsObservingStatus;
    unsigned long long mAdditionalReferences;
    double _absoluteCurrentTime;
}

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) id <TSKAVPlayerControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool canPlay;
@property (nonatomic, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) double absoluteDuration;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long repeatMode;
@property (nonatomic) float volume;
@property (nonatomic) double absoluteCurrentTime;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly, getter=isScrubbing) _Bool scrubbing;
@property (nonatomic, getter=isFastReversing) _Bool fastReversing;
@property (nonatomic, getter=isFastForwarding) _Bool fastForwarding;

+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (_Bool)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingStartTime;
+ (_Bool)automaticallyNotifiesObserversOfEndTime;
+ (id)keyPathsForValuesAffectingEndTime;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)teardown;
- (void)beginScrubbing;
- (void)endScrubbing;
- (void)seekToEnd;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_applyVolumeToPlayerItem;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (_Bool)p_canFastReverse;
- (_Bool)p_canFastForward;
- (void)p_closedCaptioningStatusDidChange:(id)arg1;
- (void)p_updateClosedCaptionDisplayEnabled;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_applicationDidResignActive;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2;
- (void)addAdditionalReference;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)seekForwardByOneFrame;
- (void)seekBackwardByOneFrame;
- (void)seekToBeginning;

@end
