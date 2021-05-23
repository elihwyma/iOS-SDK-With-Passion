/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class AVAsset, NSString, NSURL, OFUIButton, OFUIView, OKAudioDucker, OKVideoPlayerController, OKWidgetMediaVideoPlayerView, UIImageView;

@interface OKWidgetMediaViewProxy : OKWidgetView

{
    OFUIButton *_videoPlayButton;
    UIImageView *_thumbnailView;
    struct UIEdgeInsets _mediaEdgeInsets;
    NSURL *_videoURL;
    OKWidgetMediaVideoPlayerView *_videoPlayerView;
    OKVideoPlayerController *_videoPlayerController;
    AVAsset *_videoAsset;
    _Bool _disablePlayButton;
    float _rate;
    double _seekToTime;
    NSString *_didFinishPlayingActionScript;
    OKAudioDucker *_audioDucker;
    _Bool _isVideoAssetLoaded;
    _Bool _autoplay;
    _Bool _loop;
    _Bool _didPlayInteractively;
    _Bool _shouldPlayVideoWhenAvailable;
    _Bool _readyForDisplayAndPlay;
    float _requiredDuckLevel;
    float _volume;
    NSString *_audioTrackID;
    struct CGPoint _offset;
    struct CGPoint _originalOffsetWhilePanning;
    double _scale;
    _Bool _editable;
    _Bool _isEditingPanning;
    _Bool _shouldFitRegionOfInterest;
    _Bool _needsReloadThumbnail;
    OFUIView *_faceRect;
    double _reloadThumbnailContentProgress;
}

@property (nonatomic) _Bool shouldPlayVideoWhenAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)shouldDrawRegionOfInterest;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (double)duration;
- (void)play;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)currentTime;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)seekToTime:(double)arg1;
- (void)setVideoURL:(id)arg1;
- (void)prepareForReload;
- (float)contentAspectRatio;
- (struct CGRect)thumbnailRect;
- (void)instantPause;
- (void)setVideoAsset:(id)arg1;
- (id)initWithWidget:(id)arg1;
- (_Bool)canPerformAction:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (long long)settingContentMode;
- (void)setSettingContentMode:(long long)arg1;
- (void)setSettingAutoplay:(_Bool)arg1;
- (_Bool)settingLoop;
- (void)setSettingLoop:(_Bool)arg1;
- (double)settingScale;
- (void)setSettingScale:(double)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)networkStatusDidChange:(long long)arg1;
- (void)prepareForRefresh;
- (void)instantResume;
- (void)setPlaybackAudioVolume:(double)arg1;
- (void)beginFadingWithDuration:(double)arg1;
- (double)requiredDuckLevel;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)endDucking;
- (void)setSettingUrl:(id)arg1;
- (void)setSettingDisablePlayButton:(_Bool)arg1;
- (id)settingUrl;
- (id)layoutSettingsKeys;
- (_Bool)supportsReadiness;
- (void)setSettingAudioVolume:(float)arg1;
- (void)setSettingAudioRequiredDuckLevel:(float)arg1;
- (void)setAntialiasing:(_Bool)arg1;
- (double)_localReadyProgress;
- (double)remainingPlayDuration;
- (id)_contentViewToFocus;
- (void)playVideo:(id)arg1;
- (void)_cancelThumbnailOperations;
- (void)_reloadThumbnailContent;
- (void)_unloadThumbnailContent;
- (void)_setVideoContentMode:(long long)arg1;
- (void)calculateOffsetForRegionOfInterest;
- (void)updateOffset;
- (void)_reloadThumbnailContent:(_Bool)arg1 loadVideo:(_Bool)arg2;
- (void)drawRegionOfInterestContainerBounds;
- (void)resetVideo;
- (void)showVideoActivityIndicator:(_Bool)arg1;
- (void)pauseVideo:(id)arg1;
- (void)_hideVideoButton;
- (void)_stopAudioDucking;
- (void)_setupVideoPlayButton;
- (void)_cleanupVideo;
- (void)_setupVideo;
- (void)hideThumbnailAndPlayVideo;
- (void)_showVideoButton;
- (void)_beginAudioDucking;
- (void)videoBecomesReady;
- (void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2;
- (_Bool)endAllEditing:(_Bool)arg1;
- (struct UIEdgeInsets)settingMediaEdgeInsets;
- (void)setSettingMediaEdgeInsets:(struct UIEdgeInsets)arg1;
- (_Bool)settingsAutoplay;
- (double)settingSeekToTime;
- (void)setSettingSeekToTime:(double)arg1;
- (struct CGPoint)settingOffset;
- (void)setSettingOffset:(struct CGPoint)arg1;
- (void)setSettingShouldFitRegionOfInterest:(_Bool)arg1;
- (_Bool)settingShouldFitRegionOfInterest;
- (_Bool)settingEditable;
- (void)setSettingEditable:(_Bool)arg1;
- (void)setSettingDidFinishPlayingActionScript:(id)arg1;
- (void)_showVideoButtonWithDelay;

@end
