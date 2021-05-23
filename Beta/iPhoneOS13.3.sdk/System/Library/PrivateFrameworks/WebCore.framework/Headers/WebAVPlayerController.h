/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class AVPlayerController, AVValueTiming, NSArray, NSString, WebAVMediaSelectionOption;

__attribute__((visibility("hidden")))
@interface WebAVPlayerController : NSObject

{
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;
    _Bool _pictureInPictureInterrupted;
    _Bool _muted;
    _Bool _liveStreamEventModePossible;
    _Bool _isScrubbing;
    _Bool _canScanBackward;
    _Bool _canPlay;
    _Bool _canPause;
    _Bool _canTogglePlayback;
    _Bool _canSeek;
    _Bool _hasEnabledAudio;
    _Bool _hasEnabledVideo;
    _Bool _hasVideo;
    _Bool _playingOnSecondScreen;
    _Bool _externalPlaybackActive;
    _Bool _allowsExternalPlayback;
    _Bool _pictureInPicturePossible;
    AVPlayerController *_playerControllerProxy;
    struct PlaybackSessionModel *_delegate;
    struct PlaybackSessionInterfaceAVKit *_playbackSessionInterface;
    double _rate;
    double _contentDuration;
    double _contentDurationWithinEndTimes;
    NSArray *_loadedTimeRanges;
    long long _status;
    AVValueTiming *_timing;
    NSArray *_seekableTimeRanges;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    long long _externalPlaybackType;
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;
    double _seekableTimeRangesLastModifiedTime;
    double _liveUpdateInterval;
    AVValueTiming *_minTiming;
    AVValueTiming *_maxTiming;
    struct CGSize _contentDimensions;
}

@property (retain) AVPlayerController *playerControllerProxy;
@property struct PlaybackSessionModel *delegate;
@property struct PlaybackSessionInterfaceAVKit *playbackSessionInterface;
@property (readonly) _Bool canScanForward;
@property _Bool canScanBackward;
@property (readonly) _Bool canSeekToBeginning;
@property (readonly) _Bool canSeekToEnd;
@property (readonly) _Bool isScrubbing;
@property _Bool canPlay;
@property (getter=isPlaying) _Bool playing;
@property _Bool canPause;
@property _Bool canTogglePlayback;
@property double rate;
@property _Bool canSeek;
@property double contentDuration;
@property struct CGSize contentDimensions;
@property _Bool hasEnabledAudio;
@property _Bool hasEnabledVideo;
@property _Bool hasVideo;
@property (readonly) double minTime;
@property (readonly) double maxTime;
@property double contentDurationWithinEndTimes;
@property (retain) NSArray *loadedTimeRanges;
@property long long status;
@property (retain) AVValueTiming *timing;
@property (retain) NSArray *seekableTimeRanges;
@property (getter=isMuted) _Bool muted;
@property double volume;
@property (readonly) _Bool hasMediaSelectionOptions;
@property (readonly) _Bool hasAudioMediaSelectionOptions;
@property (retain) NSArray *audioMediaSelectionOptions;
@property (retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property (readonly) _Bool hasLegibleMediaSelectionOptions;
@property (retain) NSArray *legibleMediaSelectionOptions;
@property (retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property (readonly, getter=isPlayingOnExternalScreen) _Bool playingOnExternalScreen;
@property (nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;
@property (getter=isExternalPlaybackActive) _Bool externalPlaybackActive;
@property long long externalPlaybackType;
@property (retain) NSString *externalPlaybackAirPlayDeviceLocalizedName;
@property _Bool allowsExternalPlayback;
@property (getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property (getter=isPictureInPictureInterrupted) _Bool pictureInPictureInterrupted;
@property double seekableTimeRangesLastModifiedTime;
@property double liveUpdateInterval;
@property (retain, nonatomic) AVValueTiming *minTiming;
@property (retain, nonatomic) AVValueTiming *maxTiming;

+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;

- (id)init;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)volumeChanged:(double)arg1;
- (id)player;
- (void)togglePlayback:(id)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1;
- (_Bool)hasSeekableLiveStreamingContent;
- (void)seekToBeginning:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)updateMinMaxTiming;
- (_Bool)hasLiveStreamingContent;
- (void)play:(id)arg1;
- (void)pause:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (void)seekByTimeInterval:(double)arg1;
- (double)currentTimeWithinEndTimes;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)toggleMuted:(id)arg1;

@end
