/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class AVPlayer, JTClipSequencePlayerRequest, JTComposition, NSMutableArray, NSString;

@protocol JTAVPlayerViewer, JTClipSequencePlaybackDelegate, JTCompositionClipsDataSource;

@interface JTClipSequencePlayer : NSObject

{
    _Bool _wasAudioMuted;
    _Bool _wasPlaying;
    _Bool _restoringPlayerStateAfterCompositionUpdate;
    NSString *_displayName;
    id <JTClipSequencePlaybackDelegate> _playbackDelegate;
    NSObject<JTAVPlayerViewer> *_playerView;
    id <JTCompositionClipsDataSource> _clipsDataSource;
    JTComposition *_composition;
    AVPlayer *_player;
    id _playerProVideoPeriodicObserver;
    id _playerPlaybackTimePeriodicObserver;
    JTClipSequencePlayerRequest *_pendingRequest;
    NSMutableArray *_requestQueue;
    CDStruct_1b6d18a9 _playbackTimeChangedObserverInterval;
    CDStruct_1b6d18a9 _wasCurrentTime;
    CDStruct_1b6d18a9 _cachedCurrentTimeForCompositionUpdate;
}

@property (retain, nonatomic) id <JTCompositionClipsDataSource> clipsDataSource;
@property (retain, nonatomic) JTComposition *composition;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) id playerProVideoPeriodicObserver;
@property (retain, nonatomic) id playerPlaybackTimePeriodicObserver;
@property (retain, nonatomic) JTClipSequencePlayerRequest *pendingRequest;
@property (retain, nonatomic) NSMutableArray *requestQueue;
@property (nonatomic) CDStruct_1b6d18a9 wasCurrentTime;
@property (nonatomic) CDStruct_1b6d18a9 cachedCurrentTimeForCompositionUpdate;
@property (nonatomic) _Bool wasAudioMuted;
@property (nonatomic) _Bool wasPlaying;
@property (nonatomic) _Bool restoringPlayerStateAfterCompositionUpdate;
@property (copy, nonatomic) NSString *displayName;
@property (weak, nonatomic) id <JTClipSequencePlaybackDelegate> playbackDelegate;
@property (nonatomic, readonly) NSObject<JTAVPlayerViewer> *playerView;
@property (nonatomic, readonly) struct CGSize renderSize;
@property (nonatomic) CDStruct_1b6d18a9 playbackTimeChangedObserverInterval;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)duration;
- (void)enqueueRequest:(id)arg1;
- (void)teardown;
- (int)currentTime;
- (_Bool)isPlaying;
- (_Bool)play:(CDUnknownBlockType)arg1;
- (_Bool)pause:(CDUnknownBlockType)arg1;
- (void)destroyPlayer;
- (id)removeAllRequests;
- (void)createPlayer;
- (_Bool)isAudioMuted;
- (void)warnTooManyLiveCompositors:(id)arg1;
- (void)clearQueuedRequests;
- (void)executeRequestCompletionBlock:(id)arg1 success:(_Bool)arg2 wasCancelled:(_Bool)arg3 error:(id)arg4;
- (_Bool)isRequestOfTypeQueued:(unsigned long long)arg1;
- (void)handleUpdateCompositionCompleted:(_Bool)arg1 wasCancelled:(_Bool)arg2 error:(id)arg3;
- (void)handleClipCompositionUpdateTimedOut;
- (void)completePendingRequest:(_Bool)arg1 wasCancelled:(_Bool)arg2 error:(id)arg3;
- (void)executeNextRequest;
- (void)checkPendingRequestForTimeOut;
- (void)completeRequest:(id)arg1 success:(_Bool)arg2 wasCancelled:(_Bool)arg3 error:(id)arg4;
- (id)requestWithBlock:(CDUnknownBlockType)arg1 ofType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isRequestOfTypePendingOrQueued:(unsigned long long)arg1;
- (void)throttleRequestWithCompletionBlock:(CDUnknownBlockType)arg1 ofType:(unsigned long long)arg2;
- (void)doPlay;
- (void)setupPlaybackTimeChangedObserver;
- (void)removeCompositorCompletionBlock;
- (void)doPause;
- (void)configureCompositorCompletionBlock;
- (void)cancelQueuedRequestOfType:(unsigned long long)arg1;
- (void)handleSeekCompleted:(_Bool)arg1;
- (void)seek:(int)arg1 cancelQueuedRequest:(_Bool)arg2 tolerance:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)doMuteAudio:(_Bool)arg1;
- (void)handleChangeAudioMutedCompleted;
- (_Bool)updateComposition:(CDUnknownBlockType)arg1;
- (void)doUpdateComposition;
- (_Bool)setAudioMuted:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)removeRequestOfType:(unsigned long long)arg1;
- (void)appendRequests:(id)arg1;
- (id)firstQueuedRequestOfType:(unsigned long long)arg1;
- (void)seek:(int)arg1 tolerance:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dispatchBlockWhenDone:(CDUnknownBlockType)arg1;
- (void)cancelQueuedCompositionUpdateRequestFromClip:(id)arg1;
- (void)doClipCompositionUpdate:(id)arg1;
- (void)handleUpdateCompositionForClipCompleted:(_Bool)arg1;
- (void)updateLiveTransformForClip:(id)arg1;
- (void)handleCompositionRefreshCompleted:(_Bool)arg1;
- (void)handlePlaybackBegan;
- (void)handlePlaybackPaused;
- (void)handleReadyForDisplay:(_Bool)arg1;
- (id)initWithClipsDataSource:(id)arg1 seekPosition:(int)arg2 audioMuted:(_Bool)arg3;
- (void)resetPlaybackTimeChangedObserverInterval;
- (void)setPlayerView:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)notifyPlayerViewSizeChanged;
- (_Bool)updateCompositionForClip:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)liveTransformForClip:(id)arg1;

@end
