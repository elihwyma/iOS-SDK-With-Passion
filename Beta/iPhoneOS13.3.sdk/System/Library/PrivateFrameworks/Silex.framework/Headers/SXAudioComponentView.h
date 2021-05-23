/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaComponentView.h>

@class AVPlayerViewController, NSString, SXAVPlayer, SXAudioComponentOverlayView;

@protocol SXHost, SXResourceDataSource;

@interface SXAudioComponentView : SXMediaComponentView

{
    _Bool _audioHasPlayed;
    _Bool _startPlaybackWhenReady;
    id <SXResourceDataSource> _resourceDataSource;
    id <SXHost> _host;
    SXAudioComponentOverlayView *_overlayView;
    AVPlayerViewController *_playerViewController;
    SXAVPlayer *_player;
    CDUnknownBlockType _cancelHandler;
}

@property (nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;
@property (nonatomic, readonly) id <SXHost> host;
@property (nonatomic, readonly) SXAudioComponentOverlayView *overlayView;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) SXAVPlayer *player;
@property (nonatomic) _Bool audioHasPlayed;
@property (nonatomic) _Bool startPlaybackWhenReady;
@property (copy, nonatomic) CDUnknownBlockType cancelHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutViews;
- (void)discardContents;
- (void)loadImage;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (_Bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (void)pauseMediaPlayback;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 host:(id)arg8;
- (void)playButtonTapped:(id)arg1;
- (void)loadAudio;
- (void)setupPlayerViewControllerWithPlayer:(id)arg1;
- (void)submitMediaEngageEventForUserAction:(unsigned long long)arg1;
- (_Bool)shouldAutoStartPlayback;
- (void)submitMediaEngageCompleteEvent;
- (void)hidePlaybackControls;
- (void)showPlaybackControls;

@end
