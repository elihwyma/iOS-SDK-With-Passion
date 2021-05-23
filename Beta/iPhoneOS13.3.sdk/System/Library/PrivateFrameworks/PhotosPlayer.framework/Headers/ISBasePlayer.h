/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <PhotosPlayer/ISObservable.h>

@class AVPlayer, ISBehavior, ISPlayerItem, ISPlayerOutputContent, ISPlayerState, ISWrappedAVPlayer, NSError, NSHashTable, NSObject, NSString;

@protocol ISBasePlayerDelegate, OS_dispatch_queue;

@interface ISBasePlayer : ISObservable

{
    float _videoVolume;
    AVPlayer *_providedAVPlayer;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSHashTable *_outputs;
    NSString *_apertureMode;
    struct {
        _Bool videoPlayer;
        _Bool videoPlayerVolume;
        _Bool contentFromPlayerItem;
        _Bool willPlayToEndObserver;
        _Bool willPlayToPhotoObserver;
        _Bool status;
    } _isValid;
    _Bool _audioEnabled;
    float _audioVolume;
    ISPlayerItem *_playerItem;
    long long _status;
    NSError *_error;
    id <ISBasePlayerDelegate> _delegate;
    ISWrappedAVPlayer *_videoPlayer;
    ISBehavior *_activeBehavior;
    id __videoWillPlayToEndObserver;
    id __videoWillPlayToPhotoObserver;
    ISPlayerState *_lastAppliedLayoutInfo;
    ISPlayerOutputContent *__outputContent;
    double _lastAppliedScale;
    CDStruct_1b6d18a9 __videoForwardPlaybackEndTime;
}

@property (retain, nonatomic, setter=setActiveBehavior:) ISBehavior *activeBehavior;
@property (retain, nonatomic, setter=_setVideoWillPlayToEndObserver:) id _videoWillPlayToEndObserver;
@property (retain, nonatomic, setter=_setVideoWillPlayToPhotoObserver:) id _videoWillPlayToPhotoObserver;
@property (retain, nonatomic, setter=_setLastAppliedLayoutInfo:) ISPlayerState *lastAppliedLayoutInfo;
@property (retain, nonatomic, setter=_setOutputContent:) ISPlayerOutputContent *_outputContent;
@property (nonatomic, setter=_setLastAppliedScale:) double lastAppliedScale;
@property (nonatomic, setter=_setStatus:) long long status;
@property (nonatomic, setter=_setVideoForwardPlaybackEndTime:) CDStruct_1b6d18a9 _videoForwardPlaybackEndTime;
@property (retain, nonatomic, setter=_setError:) NSError *error;
@property (retain, nonatomic) ISPlayerItem *playerItem;
@property (nonatomic) float audioVolume;
@property (nonatomic, getter=isAudioEnabled) _Bool audioEnabled;
@property (weak, nonatomic) id <ISBasePlayerDelegate> delegate;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic, readonly) _Bool videoLayersReadyForDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)removeOutput:(id)arg1;
- (_Bool)_needsUpdate;
- (void)statusDidChange;
- (void)addOutput:(id)arg1;
- (void)setApertureMode:(id)arg1;
- (id)apertureMode;
- (void)_handleMediaServicesReset;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)avPlayerDidDeallocate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (id)initWithVideoPlayer:(id)arg1;
- (void)_invalidateStatus;
- (void)_updateStatusIfNeeded;
- (void)playerItemDidChange;
- (void)_setVideoPlayer:(id)arg1;
- (void)_invalidateVideoPlayer;
- (void)_updateVideoPlayerIfNeeded;
- (void)configurePlayerItem;
- (void)activeBehaviorDidChange;
- (void)_outputVideoReadyForDisplayDidChange:(id)arg1;
- (_Bool)behaviorIsVideoReadyForDisplay:(id)arg1;
- (void)didAddOutput:(id)arg1;
- (void)willRemoveOutput:(id)arg1;
- (void)_videoDidPlayToEnd;
- (void)_videoWillPlayToPhoto;
- (void)_videoWillPlayToEnd;
- (double)videoWillPlayToEndInterval;
- (double)videoWillPlayToPhotoInterval;
- (void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyOutputInfo:(id)arg1 fromBehavior:(id)arg2 withTransitionOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enumerateOutputsWithBlock:(CDUnknownBlockType)arg1;
- (void)_configureNewOutput:(id)arg1;
- (void)_invalidateContentFromPlayerItem;
- (void)_updateContentFromPlayerItemIfNeeded;
- (void)_invalidateWillPlayToEndObserver;
- (void)_updateWillPlayToEndObserverIfNeeded;
- (void)_invalidateWillPlayToPhotoObserver;
- (void)_updateWillPlayToPhotoObserverIfNeeded;
- (void)_setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;
- (float)videoVolume;
- (void)setVideoVolume:(float)arg1;
- (void)_invalidateVideoPlayerVolume;
- (void)_updateVideoPlayerVolumeIfNeeded;
- (void)_handleErrorsIfNeeded;
- (void)behavior:(id)arg1 didSetOutputInfo:(id)arg2 withTransitionOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)behavior:(id)arg1 setVideoPlayRate:(float)arg2;
- (float)videoPlayRate;
- (_Bool)behavior:(id)arg1 seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)behavior:(id)arg1 seekVideoPlayerToTime:(CDStruct_1b6d18a9)arg2 toleranceBefore:(CDStruct_1b6d18a9)arg3 toleranceAfter:(CDStruct_1b6d18a9)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)behavior:(id)arg1 prerollVideoAtRate:(float)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)behavior:(id)arg1 setVideoForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg2;
- (void)behavior:(id)arg1 setVideoVolume:(float)arg2;
- (id)behavior:(id)arg1 addBoundaryTimeObserverForTimes:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)behavior:(id)arg1 removeTimeObserver:(id)arg2;
- (void)behavior:(id)arg1 playVideoToTime:(CDStruct_1b6d18a9)arg2 initialRate:(float)arg3 overDuration:(double)arg4 progressHandler:(CDUnknownBlockType)arg5;

@end
