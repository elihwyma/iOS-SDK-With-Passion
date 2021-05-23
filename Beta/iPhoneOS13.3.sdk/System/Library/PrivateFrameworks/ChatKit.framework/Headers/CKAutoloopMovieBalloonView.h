/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKImageBalloonView.h>

@class CKMovieMediaObject, ISVideoPlayerUIView, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, UIImageView, UIView;

@interface CKAutoloopMovieBalloonView : CKImageBalloonView

{
    _Bool _isJellyfishVideo;
    _Bool _isMuted;
    _Bool _isListeningToVideoPlayer;
    CKMovieMediaObject *_mediaObject;
    ISVideoPlayerUIView *_videoPlayer;
    ISWrappedAVPlayer *_avPlayer;
    ISWrappedAVAudioSession *_audioSession;
    UIImageView *_muteButton;
    UIView *_snapshotView;
}

@property (retain, nonatomic) ISVideoPlayerUIView *videoPlayer;
@property (retain, nonatomic) ISWrappedAVPlayer *avPlayer;
@property (retain, nonatomic) ISWrappedAVAudioSession *audioSession;
@property (retain, nonatomic) UIImageView *muteButton;
@property (nonatomic) _Bool isMuted;
@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) _Bool isListeningToVideoPlayer;
@property (retain, nonatomic) CKMovieMediaObject *mediaObject;
@property (nonatomic) _Bool isJellyfishVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isEnabled;
+ (Class)AVPlayerClass;
+ (Class)VideoPlayerUIViewClass;
+ (Class)AVPlayerLayerClass;
+ (id)_autoloopAVAudioSessionQueue;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)prepareForDisplay;
- (void)tapGestureRecognized:(id)arg1;
- (void)prepareForAcknowledgementDisplay;
- (void)prepareForAcknowledgementDismissal;
- (void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(BOOL)arg3;
- (void)previewDidChange:(id)arg1;
- (void)startListeningToVideoPlayer;
- (void)_thermalStateDidChange:(id)arg1;
- (void)stopListeningToVideoPlayer;
- (void)_removeSnapshot;
- (_Bool)_shouldPauseInitialLooping;
- (_Bool)_thermalStateAcceptableForLooping;
- (_Bool)_shouldPresentQuickLookOnTap;
- (_Bool)_applicationStateAcceptableForLooping;
- (void)avPlayer:(id)arg1 itemDidPlayToEnd:(id)arg2;
- (void)avPlayerDidDeallocate;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end
