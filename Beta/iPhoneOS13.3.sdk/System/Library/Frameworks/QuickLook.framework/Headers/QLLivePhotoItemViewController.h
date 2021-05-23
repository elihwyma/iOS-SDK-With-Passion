/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSDate, NSLayoutConstraint, NSString, PHLivePhotoView, UIImageView;

__attribute__((visibility("hidden")))
@interface QLLivePhotoItemViewController

{
    struct CGSize _imageSize;
    PHLivePhotoView *_livePhotoView;
    UIImageView *_livePhotoBadge;
    NSLayoutConstraint *_livePhotoBadgeLeftConstraint;
    NSLayoutConstraint *_livePhotoBadgeTopConstraint;
    NSDate *_didEndPlayingTimestamp;
    _Bool _isPlaying;
    _Bool _livePhotoBadgeVisible;
    _Bool _isFullScreen;
    _Bool _fullyZoomedOut;
    _Bool _transitionInProgress;
    _Bool _shouldPlayHint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)imageSize;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canEnterFullScreen;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)previewWillFinishAppearing;
- (_Bool)canToggleFullScreen;
- (void)_updateLivePhotoBadgeAnimated:(_Bool)arg1;
- (_Bool)_wasJustPlaying;
- (void)didEndZoomingAtScale:(double)arg1;
- (void)willBeginZooming;

@end
