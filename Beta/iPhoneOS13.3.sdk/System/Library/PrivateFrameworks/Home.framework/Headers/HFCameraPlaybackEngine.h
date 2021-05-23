/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class AVPlayer, HFCameraPlaybackPosition, HMCameraClip, HMCameraClipManager, HMCameraProfile, HMCameraSource, HMHome, NADelegateDispatcher, NSArray, NSDate, NSError, NSMapTable, NSString;

@protocol HFCameraClipPlaying, HFCameraClipScrubbing, HFCameraLiveStreamControlling, OS_dispatch_queue;

@interface HFCameraPlaybackEngine : NSObject

{
    _Bool _prefersAudioEnabled;
    _Bool _microphoneEnabled;
    _Bool _streamAudioEnabled;
    _Bool _userScrubbing;
    _Bool _pictureInPictureModeActive;
    _Bool _shouldBypassVideoFetchRequest;
    _Bool _wantsToPlay;
    _Bool _scrubbing;
    float _streamAudioVolume;
    HMCameraProfile *_cameraProfile;
    HMCameraClipManager *_clipManager;
    HMCameraSource *_liveCameraSource;
    unsigned long long _timeControlStatus;
    NSError *_playbackError;
    HMHome *_home;
    CDUnknownBlockType _clipPlayerBuilder;
    id <HFCameraLiveStreamControlling> _liveStreamController;
    id <HFCameraClipScrubbing> _clipScrubber;
    NSMapTable *_observerStates;
    NADelegateDispatcher *_observerDispatcher;
    unsigned long long _playbackContentType;
    unsigned long long _engineMode;
    NSDate *_lastRequestedClipPlaybackDate;
    unsigned long long _scrubbingInProgressCount;
    NSObject<OS_dispatch_queue> *_clipQueue;
    id <HFCameraClipPlaying> _clipPlayer;
    unsigned long long _timelineState;
}

@property (retain, nonatomic) HMHome *home;
@property (copy, nonatomic, readonly) CDUnknownBlockType clipPlayerBuilder;
@property (nonatomic, readonly) id <HFCameraLiveStreamControlling> liveStreamController;
@property (nonatomic, readonly) id <HFCameraClipScrubbing> clipScrubber;
@property (nonatomic, readonly) NSMapTable *observerStates;
@property (nonatomic, readonly) NADelegateDispatcher *observerDispatcher;
@property (nonatomic) unsigned long long playbackContentType;
@property (nonatomic) unsigned long long engineMode;
@property (copy, nonatomic) NSDate *lastRequestedClipPlaybackDate;
@property (nonatomic) _Bool wantsToPlay;
@property (nonatomic) unsigned long long timeControlStatus;
@property (retain, nonatomic) NSError *playbackError;
@property (retain, nonatomic) HMCameraSource *liveCameraSource;
@property (nonatomic) unsigned long long scrubbingInProgressCount;
@property (nonatomic, getter=isScrubbing) _Bool scrubbing;
@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *clipQueue;
@property (nonatomic, readonly) id <HFCameraClipPlaying> clipPlayer;
@property (copy, nonatomic, readonly) NSArray *observers;
@property (nonatomic) unsigned long long timelineState;
@property (nonatomic, getter=isUserScrubbing) _Bool userScrubbing;
@property (retain, nonatomic) HMCameraClipManager *clipManager;
@property (nonatomic, readonly) HMCameraClip *currentClip;
@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled;
@property (nonatomic, getter=isStreamAudioEnabled) _Bool streamAudioEnabled;
@property (nonatomic) float streamAudioVolume;
@property (nonatomic) _Bool prefersAudioEnabled;
@property (nonatomic, getter=isPictureInPictureModeActive) _Bool pictureInPictureModeActive;
@property (nonatomic) _Bool shouldBypassVideoFetchRequest;
@property (retain, nonatomic) HFCameraPlaybackPosition *playbackPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)removeObserver:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)play;
- (void)beginScrubbing;
- (void)endScrubbing;
- (_Bool)isLiveStreaming;
- (void)clipManager:(id)arg1 didUpdateClips:(id)arg2;
- (void)clipManager:(id)arg1 didRemoveClipsWithUUIDs:(id)arg2;
- (void)clipPlayer:(id)arg1 didUpdateError:(id)arg2 isFatal:(_Bool)arg3;
- (void)clipPlayer:(id)arg1 didUpdateTimeControlStatus:(long long)arg2;
- (void)clipPlayer:(id)arg1 didUpdateMuted:(_Bool)arg2;
- (void)clipPlayerDidPlayToEndTime:(id)arg1;
- (void)_setupLiveStreamController:(id)arg1;
- (void)_updateStateForRequestedPlaybackPosition:(id)arg1 notifyObservers:(_Bool)arg2;
- (void)_setupTimeObservationForObserver:(id)arg1;
- (void)_setupClipPlayerWithClipManager:(id)arg1;
- (void)_setPlayerVolume:(float)arg1 notifyObservers:(_Bool)arg2;
- (void)_setMicrophoneEnabled:(_Bool)arg1 notifyObservers:(_Bool)arg2;
- (void)_setStreamAudioEnabled:(_Bool)arg1 notifyObservers:(_Bool)arg2;
- (void)_updatePlaybackStateNotifyingObservers:(_Bool)arg1;
- (id)_derivedPlaybackError;
- (void)_updatePlaybackStateNotifyingObservers:(_Bool)arg1 rebuildClipPlayerIfNeeded:(_Bool)arg2;
- (unsigned long long)_derivedTimeControlStatus;
- (void)streamControllerStateDidUpdate:(id)arg1;
- (void)updateLiveStreamForCameraProfile:(id)arg1;
- (void)updatePlaybackPositionToDate:(id)arg1 usingClip:(id)arg2;
- (void)addObserver:(id)arg1 withOptions:(id)arg2;
- (void)modifyPlaybackFromSender:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
