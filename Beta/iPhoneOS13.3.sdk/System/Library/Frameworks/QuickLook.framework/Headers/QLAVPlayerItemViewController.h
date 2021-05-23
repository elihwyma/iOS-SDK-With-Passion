/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class AVPlayer, AVPlayerViewController, NSString, QLOverlayPlayButton;

__attribute__((visibility("hidden")))
@interface QLAVPlayerItemViewController

{
    QLOverlayPlayButton *_playButton;
    AVPlayerViewController *_playerViewController;
    _Bool _fullScreen;
    _Bool _mediaWasPausedOnResignActive;
    AVPlayer *_player;
    struct CGSize _imageSize;
    _Bool _isAudioOnly;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)pause;
- (void)play;
- (struct CGSize)imageSize;
- (long long)preferredWhitePointAdaptivityStyle;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canEnterFullScreen;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)enterFullScreen:(_Bool)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;

@end
