/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class MPVideoView, UIColor, UIImage, UIView, _UIHostedWindow;

@protocol MPVideoOverlay;

@protocol MPVideoControllerProtocol <Swift>

@property (nonatomic) _Bool allowsDetailScrubbing;
@property (nonatomic) _Bool allowsWirelessPlayback;
@property (nonatomic) _Bool alwaysAllowHidingControlsOverlay;
@property (nonatomic) long long artworkImageStyle;
@property (nonatomic) _Bool attemptAutoPlayWhenControlsHidden;
@property (nonatomic, readonly) UIView *backgroundView;
@property (retain, nonatomic) UIColor *backstopColor;
@property (nonatomic) _Bool canAnimateControlsOverlay;
@property (nonatomic, readonly) _Bool canChangeScaleMode;
@property (nonatomic) _Bool canShowControlsOverlay;
@property (nonatomic) _Bool controlsOverlayVisible;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) _Bool disableAutoRotation;
@property (nonatomic) _Bool disableControlsAutohide;
@property (nonatomic) unsigned long long disabledParts;
@property (nonatomic) _Bool displayPlaybackErrorAlerts;
@property (nonatomic, readonly) _UIHostedWindow *hostedWindow;
@property (nonatomic, readonly) unsigned int hostedWindowContextID;
@property (nonatomic) _Bool inlinePlaybackUsesTVOut;
@property (nonatomic) long long itemTypeOverride;
@property (nonatomic, getter=isFullscreen) _Bool fullscreen;
@property (retain, nonatomic) UIImage *posterImage;
@property (nonatomic) long long scaleMode;
@property (nonatomic) _Bool TVOutEnabled;
@property (nonatomic, readonly) _Bool viewControllerWillRequestExit;
@property (retain, nonatomic, readonly) UIView<MPVideoOverlay> *videoOverlayView;
@property (retain, nonatomic, readonly) MPVideoView *videoView;
@property (nonatomic) unsigned long long visibleParts;
@property (nonatomic) _Bool autoPlayWhenLikelyToKeepUp;

- (unsigned short)exitFullscreen;
- (unsigned short)setFullscreen:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)canHideOverlay: /* Error: Ran out of types for this method. */;
- (unsigned short)displayVideoView;
- (unsigned short)prepareToDisplayVideo;
- (unsigned short)setControlsNeedLayout;
- (unsigned short)setControlsOverlayVisible:animate: /* Error: Ran out of types for this method. */;
- (unsigned short)setControlsOverlayVisible:animate:force: /* Error: Ran out of types for this method. */;
- (unsigned short)setDesiredParts:animate: /* Error: Ran out of types for this method. */;
- (unsigned short)setScaleModeOverride:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)setUseHostedWindowWhenFullscreen: /* Error: Ran out of types for this method. */;
- (unsigned short)setVisibleParts:animate: /* Error: Ran out of types for this method. */;
- (unsigned short)setOwnsStatusBar: /* Error: Ran out of types for this method. */;

@end
