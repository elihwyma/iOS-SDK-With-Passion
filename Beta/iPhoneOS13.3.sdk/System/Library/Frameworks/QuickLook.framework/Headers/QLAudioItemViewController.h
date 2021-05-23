/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSLayoutConstraint, NSString, QLOverlayPlayButton, QLVideoScrubberView, QLWaveformScrubberViewProvider, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface QLAudioItemViewController

{
    QLOverlayPlayButton *_playButton;
    UIView *_scrubberContainer;
    UIScrollView *_scrubberContainerScrollView;
    QLVideoScrubberView *_scrubber;
    QLWaveformScrubberViewProvider *_scrubberViewProvider;
    _Bool _previewIsVisisble;
    _Bool _scrubbing;
    NSLayoutConstraint *_topScrubber;
    double _scrubberVerticalOffset;
}

@property (retain) NSLayoutConstraint *topScrubber;
@property (retain) UIView *scrubberContainer;
@property _Bool scrubbing;
@property double scrubberVerticalOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)accessoryView;
- (void)_tapRecognized:(id)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canEnterFullScreen;
- (void)transitionDidFinish:(_Bool)arg1 didComplete:(_Bool)arg2;
- (void)transitionDidStart:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (_Bool)canPerformFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)performFirstTimeAppearanceActions:(unsigned long long)arg1;
- (void)addScrubberWithDeferral;
- (void)didChangePlayingStatus;
- (void)setPlayControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)timeLabelScrollView;

@end
