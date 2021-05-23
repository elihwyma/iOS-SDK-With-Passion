/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTViewController.h>

@class JTClipSequencePlayer, NSString, UIColor, UIView;

@protocol JTClipSequenceDisplayViewControllerDelegate, JTCompositionClipsDataSource;

@interface JTClipSequenceDisplayViewController : JTViewController

{
    _Bool _disableVideoDisplayGestures;
    _Bool _isDisplaying;
    _Bool _dontRenderLiveTitles;
    _Bool _duckAllAudioClips;
    _Bool _dontRemovePlaceHolderOnDisplay;
    _Bool _cachedWasPlaying;
    int _cachedDuration;
    int _cachedCurrentTime;
    int _cachedMuted;
    id <JTClipSequenceDisplayViewControllerDelegate> _delegate;
    id <JTCompositionClipsDataSource> _clipsDataSource;
    NSString *_displayName;
    long long _videoContentMode;
    UIView *_videoDisplayOverlayView;
    UIView *_viewFlashed;
    UIColor *_restoreToColor;
    JTClipSequencePlayer *_clipsPlayer;
    UIView *_placeHolderView;
    struct CGSize _cachedRenderSizeInPixels;
    struct CGSize _lastPlayerViewSize;
    CDStruct_1b6d18a9 _playbackTimeChangedObserverInterval;
}

@property (retain, nonatomic) UIView *videoDisplayOverlayView;
@property (nonatomic) _Bool dontRemovePlaceHolderOnDisplay;
@property (nonatomic) int cachedDuration;
@property (nonatomic) int cachedCurrentTime;
@property (nonatomic) int cachedMuted;
@property (nonatomic) _Bool cachedWasPlaying;
@property (nonatomic) struct CGSize cachedRenderSizeInPixels;
@property (weak, nonatomic) UIView *viewFlashed;
@property (retain, nonatomic) UIColor *restoreToColor;
@property (retain, nonatomic) JTClipSequencePlayer *clipsPlayer;
@property (retain, nonatomic) UIView *placeHolderView;
@property struct CGSize lastPlayerViewSize;
@property (weak, nonatomic) id <JTClipSequenceDisplayViewControllerDelegate> delegate;
@property (weak, nonatomic) id <JTCompositionClipsDataSource> clipsDataSource;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) _Bool disableVideoDisplayGestures;
@property (nonatomic) CDStruct_1b6d18a9 playbackTimeChangedObserverInterval;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (nonatomic) long long videoContentMode;
@property (nonatomic, readonly) struct CGSize renderSizeInPixels;
@property (nonatomic, readonly) _Bool isDisplaying;
@property (nonatomic) _Bool dontRenderLiveTitles;
@property (nonatomic) _Bool duckAllAudioClips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (int)duration;
- (void)play;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (int)currentTime;
- (_Bool)isPlaying;
- (void)playWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)seekToTime:(int)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (int)frameRate;
- (void)playbackDidStart:(id)arg1;
- (void)sharedInit;
- (void)playbackReadyForDisplayChanged:(id)arg1 isReady:(_Bool)arg2;
- (void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
- (void)dispatchBlockWhenDone:(CDUnknownBlockType)arg1;
- (void)updateLiveTransformForClip:(id)arg1;
- (void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2;
- (void)playerWillBeDestroyed:(id)arg1;
- (void)resetPlaybackTimeChangedObserverInterval;
- (void)liveTransformForClip:(id)arg1;
- (id)playerContainerView;
- (void)pauseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)playbackAreaDoubleTapped:(id)arg1;
- (void)setNeedsCompositionUpdate;
- (void)setNeedsCompositionUpdateForClip:(id)arg1;
- (id)playerViewer;
- (id)placeholderContainerView;
- (id)contentModeToVideoGravity:(long long)arg1;
- (void)updateDelegatePlayer;
- (void)reloadClipDataSourceOnBecomingActive;
- (void)updateCachedPlaybackProperties;
- (void)unloadClipDataSource;
- (void)preparePlaceHolder;
- (void)reloadClipDataSource;
- (void)reloadClipDataSourceIfNeeded;
- (void)beginFlash;
- (void)endFlash;
- (void)mediaserverdCrashed;
- (void)addPlaceHolder;
- (void)playbackDidReachEnd;
- (void)playerBecameReadyForDisplayChanged:(_Bool)arg1;
- (void)removePlaceHolder;
- (void)prepareVideoDisplayView;
- (void)updateVideoDisplayViewBounds;
- (void)installVideoDisplayGestures;
- (void)playbackAreaTapped:(id)arg1;
- (void)playbackAreaPanned:(id)arg1;
- (void)playbackAreaPinched:(id)arg1;
- (void)playbackAreaRotated:(id)arg1;
- (struct CGPoint)convertPointInPlaybackSizeToClipPointNormalized:(struct CGPoint)arg1;
- (id)viewToFlash;
- (void)playbackDidReachEnd:(id)arg1;
- (void)displayPlaceHolder;
- (void)setPlaybackTimeChangeNotificationPeriod:(CDStruct_1b6d18a9)arg1;
- (struct CGRect)videoDisplayBounds;
- (struct CGPoint)convertPointInPlaybackSizeToClipPoint:(struct CGPoint)arg1;

@end
